#include <QApplication>
#include "auth/auth.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    const Auth auth_manager;
    auth_manager.show_log_in_window();
    return QApplication::exec();
}
