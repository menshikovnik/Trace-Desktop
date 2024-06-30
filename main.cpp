#include <QApplication>
#include "registration/registration.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    RegistrationWindow w;
    w.show();
    return a.exec();
}
