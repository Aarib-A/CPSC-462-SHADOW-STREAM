/********************************************************************************
** Form generated from reading UI file 'loginui.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINUI_H
#define UI_LOGINUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginUI
{
public:
    QWidget *centralwidget;
    QLineEdit *userName_field;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *password_field;
    QPushButton *AuthenticatBUTTON;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *LoginUI)
    {
        if (LoginUI->objectName().isEmpty())
            LoginUI->setObjectName(QStringLiteral("LoginUI"));
        LoginUI->resize(495, 300);
        centralwidget = new QWidget(LoginUI);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        userName_field = new QLineEdit(centralwidget);
        userName_field->setObjectName(QStringLiteral("userName_field"));
        userName_field->setGeometry(QRect(200, 50, 113, 22));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 50, 91, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 110, 91, 16));
        password_field = new QLineEdit(centralwidget);
        password_field->setObjectName(QStringLiteral("password_field"));
        password_field->setGeometry(QRect(200, 110, 113, 22));
        AuthenticatBUTTON = new QPushButton(centralwidget);
        AuthenticatBUTTON->setObjectName(QStringLiteral("AuthenticatBUTTON"));
        AuthenticatBUTTON->setGeometry(QRect(200, 170, 93, 28));
        LoginUI->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(LoginUI);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        LoginUI->setStatusBar(statusbar);
        menubar = new QMenuBar(LoginUI);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 495, 26));
        LoginUI->setMenuBar(menubar);

        retranslateUi(LoginUI);

        QMetaObject::connectSlotsByName(LoginUI);
    } // setupUi

    void retranslateUi(QMainWindow *LoginUI)
    {
        LoginUI->setWindowTitle(QApplication::translate("LoginUI", "LOGIN", nullptr));
        label->setText(QApplication::translate("LoginUI", "Username:", nullptr));
        label_2->setText(QApplication::translate("LoginUI", "Password:", nullptr));
        AuthenticatBUTTON->setText(QApplication::translate("LoginUI", "Authenticate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginUI: public Ui_LoginUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINUI_H
