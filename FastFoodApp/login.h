#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

signals:
    void transmit_validUser(const bool& valid);

public slots:
    void on_passwordlineEdit_returnPressed();

    void on_logInButton_pressed();

    void on_clearButton_pressed();

private:
    Ui::Login *ui;
    bool validUser;
};

#endif // LOGIN_H
