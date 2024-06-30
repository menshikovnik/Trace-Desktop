/********************************************************************************
** Form generated from reading UI file 'registration.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef REGISTRATION_WINDOW_H
#define REGISTRATION_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Registration
{
public:
    QLineEdit *login_input_field;
    QLineEdit *password_input_field;
    QLabel *login_label;
    QLabel *password_label;
    QPushButton *ok_button;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;

    void setupUi(QDialog *Registration)
    {
        if (Registration->objectName().isEmpty())
            Registration->setObjectName(QString::fromUtf8("Registration"));
        Registration->resize(400, 325);
        login_input_field = new QLineEdit(Registration);
        login_input_field->setObjectName(QString::fromUtf8("login_input_field"));
        login_input_field->setGeometry(QRect(40, 50, 311, 31));
        password_input_field = new QLineEdit(Registration);
        password_input_field->setObjectName(QString::fromUtf8("password_input_field"));
        password_input_field->setGeometry(QRect(40, 120, 311, 31));
        login_label = new QLabel(Registration);
        login_label->setObjectName(QString::fromUtf8("login_label"));
        login_label->setGeometry(QRect(40, 30, 101, 20));
        password_label = new QLabel(Registration);
        password_label->setObjectName(QString::fromUtf8("password_label"));
        password_label->setGeometry(QRect(40, 100, 81, 16));
        ok_button = new QPushButton(Registration);
        ok_button->setObjectName(QString::fromUtf8("ok_button"));
        ok_button->setGeometry(QRect(140, 220, 100, 32));
        pushButton = new QPushButton(Registration);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 270, 100, 32));
        label = new QLabel(Registration);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 250, 58, 16));
        label_2 = new QLabel(Registration);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 170, 121, 16));
        lineEdit = new QLineEdit(Registration);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 190, 311, 31));

        retranslateUi(Registration);

        QMetaObject::connectSlotsByName(Registration);
    } // setupUi

    void retranslateUi(QDialog *Registration)
    {
        Registration->setWindowTitle(QCoreApplication::translate("Registration", "Dialog", nullptr));
        login_label->setText(QCoreApplication::translate("Registration", "Login:", nullptr));
        password_label->setText(QCoreApplication::translate("Registration", "Password:", nullptr));
        ok_button->setText(QCoreApplication::translate("Registration", "OK", nullptr));
        pushButton->setText(QCoreApplication::translate("Registration", "Log in", nullptr));
        label->setText(QCoreApplication::translate("Registration", "      or", nullptr));
        label_2->setText(QCoreApplication::translate("Registration", "Password secondly", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistrationWindow: public Ui_Registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // REGISTRATION_WINDOW_H
