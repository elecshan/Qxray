#include "qxraymainwindow.h"
#include "ui_qxraymainwindow.h"

QxrayMainWindow::QxrayMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QxrayMainWindow)
{
    ui->setupUi(this);
}

QxrayMainWindow::~QxrayMainWindow()
{
    delete ui;
}

