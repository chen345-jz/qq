#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QEvent>
#include <QMouseEvent>
#include "loginpage.h"
#include "databasemanager.h"
#include "appconfig.h"
#include <QPainter>
#include <QMessageBox>
#include <QRegularExpression>
#include <QInputDialog>
#include "mainpage.h"
#include <QRandomGenerator>
#include <QDateTime>

namespace Ui {
class LoginPage;
}

class LoginPage : public QWidget
{
    Q_OBJECT

public:
    // 通过构造函数注入DatabaseManager依赖
    explicit LoginPage(DatabaseManager& dbManager, QWidget *parent = nullptr);
    ~LoginPage();

private:
    void init();
    void initDeveloper();//初始化开发者界面跳转逻辑
    DatabaseManager& m_dbManager;
    Ui::LoginPage *ui;
    QString m_avatar="";
    void radioButtonAllSet();
    void setButtonAllSet();
    void closeButtonAllSet();
    void okButtonAllSet();
    void richTextLabelAllSet();
    void richTextMakesureSet(QLabel *label);
    void richTextExSet(QLabel *label,int id);
    //生成20个测试用户数据，并初始化四个表的内容
    static void generateTestUsers(DatabaseManager& db);

private slots:
    bool checkLogin(DatabaseManager& db);
    bool checkRegister(DatabaseManager& db);
    bool checkCancel(DatabaseManager& db);
    void openSettings();
    void closePage();
    void avatarSelect();
};

//重写拖拽窗口的逻辑
/**
 * @brief DragWidgetFilter 自定义事件过滤器类，用于实现无边框窗口的拖拽功能
 * 
 * 该类通过事件过滤器机制捕获鼠标事件，实现窗口拖拽移动功能。
 * 工作原理：
 * 1. 在鼠标按下时记录当前鼠标在窗口中的位置
 * 2. 在鼠标移动时，计算新位置并移动窗口
 * 3. 使用时，需要将此过滤器安装到需要支持拖拽的窗口上
 */
class DragWidgetFilter : public QObject {
public:
    /**
     * @brief 构造函数
     * @param parent 父对象指针，通常是要添加拖拽功能的窗口
     */
    DragWidgetFilter(QObject *parent):QObject(parent){}
    
    /**
     * @brief 重写的事件过滤器方法，处理鼠标按下和移动事件
     * @param obj 接收事件的对象
     * @param e 事件对象
     * @return 如果事件被处理并拦截返回true，否则返回false
     */
    bool eventFilter(QObject *obj, QEvent *e){
        // 尝试将对象转换为QWidget
        auto w=dynamic_cast<QWidget*>(obj);
        if (!w) {
            return false; // 如果不是QWidget，不处理该事件
        }
        
        if (e->type() == QEvent::MouseButtonPress) {
            // 处理鼠标按下事件
            auto ev=dynamic_cast<QMouseEvent*>(e);
            if (!ev) {
                return false; // 确保事件类型转换成功
            }
            pos=ev->pos(); // 记录鼠标按下时在窗口中的位置
        }else if (e->type() == QEvent::MouseMove) {
            // 处理鼠标移动事件
            auto ev=dynamic_cast<QMouseEvent*>(e);
            if (!ev) {
                return false; // 确保事件类型转换成功
            }
            // 判断是否按下左键进行拖动
            if (ev->buttons()&Qt::MouseButton::LeftButton) {
                // 计算窗口新位置：全局鼠标位置减去初始按下位置的偏移
                w->move(ev->globalPos()-pos);
            }
        }
        // 继续传递事件给父类处理
        return QObject::eventFilter(obj,e);
    }
private:
    QPoint pos; // 存储鼠标按下时相对于窗口的位置
};

#endif // LOGINPAGE_H
