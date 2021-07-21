#include <QDebug>
#include "source.h"

source::source(QObject *parent) : QObject(parent)
{

}

void source::sayHello()
{
    qInfo() << "Hello World";
}

void source::doTest()
{
    emit test();
}
