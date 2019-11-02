/********************************************************************************
** Form generated from reading UI file 'uiwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIWINDOW_H
#define UI_UIWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UIwindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UIwindow)
    {
        if (UIwindow->objectName().isEmpty())
            UIwindow->setObjectName(QStringLiteral("UIwindow"));
        UIwindow->resize(800, 600);
        centralwidget = new QWidget(UIwindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        UIwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UIwindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        UIwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(UIwindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        UIwindow->setStatusBar(statusbar);

        retranslateUi(UIwindow);

        QMetaObject::connectSlotsByName(UIwindow);
    } // setupUi

    void retranslateUi(QMainWindow *UIwindow)
    {
        UIwindow->setWindowTitle(QApplication::translate("UIwindow", "UIwindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UIwindow: public Ui_UIwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIWINDOW_H
