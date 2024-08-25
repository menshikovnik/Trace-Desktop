#include "auth/auth.h"
#include "auth/log-in/log_in.h"
#include "auth/registration/registration.h"

Auth::Auth()
{
    log_in_window = new LogInWindow();
    registration_window = nullptr;
    [[maybe_unused]] auto show_reg_window = connect(log_in_window, &LogInWindow::sign_up_button_clicked, this,
                                                &Auth::show_registration_window);
}

void Auth::show_log_in_window() const
{
    log_in_window->show();
    if (registration_window) {
        registration_window->hide();
    }
}

void Auth::show_registration_window()
{
    if (!registration_window) {
        registration_window = new RegistrationWindow();
        [[maybe_unused]] auto show_log_window = connect(registration_window, &RegistrationWindow::log_in_button_clicked,
                                                        this, &Auth::show_log_in_window);
    }
    registration_window->show();
    log_in_window->hide();
}
