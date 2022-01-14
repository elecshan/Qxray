#ifndef QXRAYMAINWINDOW_H
#define QXRAYMAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class QxrayMainWindow; }
QT_END_NAMESPACE

class QxrayMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QxrayMainWindow(QWidget *parent = nullptr);
    ~QxrayMainWindow();

private:
    Ui::QxrayMainWindow *ui;
};
#endif // QXRAYMAINWINDOW_H
