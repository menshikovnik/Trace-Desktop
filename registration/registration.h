#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui
{
class RegistrationWindow;
}
QT_END_NAMESPACE

class RegistrationWindow : public QDialog
{
    Q_OBJECT

public:
    RegistrationWindow(QWidget* parent = nullptr);
    ~RegistrationWindow();

private slots:
    void on_OK_button_clicked();

private:
    Ui::RegistrationWindow *ui;
};
#endif
