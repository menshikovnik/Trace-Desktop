#include "registration.h"
#include "ui_registrationwindow.h"
#include <QMessageBox>

RegistrationWindow::RegistrationWindow(QWidget *parent)
    : QDialog(parent), ui(new Ui::RegistrationWindow) {
    ui->setupUi(this);

    connect(ui->ok_button, &QPushButton::clicked, this, &RegistrationWindow::on_OK_button_clicked);
}

RegistrationWindow::~RegistrationWindow() {
    delete ui;
}

void RegistrationWindow::on_OK_button_clicked() {
    QString username = ui->login_input_field->text();
    QString password = ui->password_input_field->text();


    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Registration Error", "Please fill in all fields");
    } else {
        QMessageBox::information(this, "Registration Success", "You have been registered successfully!");
    }
}
