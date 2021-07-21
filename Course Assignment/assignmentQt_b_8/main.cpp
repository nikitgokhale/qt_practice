#include <QCoreApplication>
#include <QDebug>

#include "person.h"
#include "student.h"
#include "teacher.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    student s;
    teacher t;

    s.buyBooks();
    t.teaching();

    t.name = "Mr.Gokhale";

    t.sayHello();
    s.sayHello();

    return a.exec();
}
