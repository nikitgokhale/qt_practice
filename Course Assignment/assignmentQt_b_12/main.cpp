#include <QCoreApplication>
#include <QDebug>
#include "source.h"
#include "destination.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    source src;
    destination dest;

    QObject::connect(&src, &source::test, &dest, &destination::test);

    src.doTest();

    return a.exec();
}
