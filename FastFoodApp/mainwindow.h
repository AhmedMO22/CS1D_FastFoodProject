#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "restaurantwidget.h"
#include "mainmenuwidget.h"
#include "login.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
