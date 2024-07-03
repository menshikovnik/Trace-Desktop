#ifndef LOG_IN_H
#define LOG_IN_H

#include <QDialog>
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QNetworkAccessManager>
#include "registration.h"

QT_BEGIN_NAMESPACE
namespace Ui
{
class LogInWindow;
}
QT_END_NAMESPACE

class LogInWindow : public QDialog
{
    Q_OBJECT

public:
    LogInWindow(QWidget* parent = nullptr);
    ~LogInWindow();

private slots:
    void on_log_in_button_clicked();
    void on_sign_up_button_clicked();

private:
    Ui::LogInWindow *ui;
    QNetworkAccessManager *networkManager;
    RegistrationWindow *registration_window = nullptr;
};

#endif // LOG_IN_H
