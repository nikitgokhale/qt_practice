#include <QDebug>
#include "person.h"

person::person(QObject *parent) : QObject(parent)
{

}

void person::sayHello()
{
    QString message = "Hello";
    if (!name.isEmpty())
        message.append(" My name is"+name);
    qInfo() << message;
}


