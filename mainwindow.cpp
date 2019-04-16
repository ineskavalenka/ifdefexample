#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


#ifdef Q_OS_WIN32
    qDebug() << "Q_OS_WIN32";
#endif

#ifdef Q_OS_WINCE
    qDebug() << "Q_OS_WINCE";
#endif

#ifdef Q_OS_LINUX
    qDebug() << "Q_OS_LINUX";
#endif
}

MainWindow::~MainWindow()
{
    delete ui;
}
