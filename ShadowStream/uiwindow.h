#ifndef UIWINDOW_H
#define UIWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class UIwindow; }
QT_END_NAMESPACE

class UIwindow : public QMainWindow
{
    Q_OBJECT

public:
    UIwindow(QWidget *parent = nullptr);
    ~UIwindow();

private:
    Ui::UIwindow *ui;
};
#endif // UIWINDOW_H
