#include "log_in.h"
#include "ui_log_in_window.h"
#include "registration.h"

LogInWindow::LogInWindow(QWidget *parent)
    : QDialog(parent), ui(new Ui::LogInWindow), networkManager(new QNetworkAccessManager(this)) {
    ui->setupUi(this);

    connect(ui->sign_up_button, &QPushButton::clicked, this, &LogInWindow::on_sign_up_button_clicked);
}


LogInWindow::~LogInWindow()
{
    delete ui;
}


void LogInWindow::on_sign_up_button_clicked()
{
    if (!registration_window) {
        registration_window = new RegistrationWindow();
        connect(registration_window, &QObject::destroyed, this, [this]() {
            registration_window = nullptr;
        });
    }
    registration_window->show();  // Показываем окно регистрации
    this->close();
}


void LogInWindow::on_log_in_button_clicked()
{

}



