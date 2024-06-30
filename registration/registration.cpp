#include "registration.h"
#include "ui_registrationwindow.h"
#include <QMessageBox>

RegistrationWindow::RegistrationWindow(QWidget *parent)
    : QDialog(parent), ui(new Ui::RegistrationWindow) {
    ui->setupUi(this);
}

RegistrationWindow::~RegistrationWindow() {
    delete ui;
}

void RegistrationWindow::on_OK_button_clicked() {
    QString username = ui->login_input_field->text(); // Получаем текст из поля ввода имени пользователя
    QString password = ui->password_input_field->text(); // Получаем текст из поля ввода пароля

    // Пример простой проверки
    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Registration Error", "Please fill in all fields");
    } else {
        // Здесь можно добавить код для обработки регистрации, например, отправку данных на сервер
        QMessageBox::information(this, "Registration Success", "You have been registered successfully!");
    }
}
