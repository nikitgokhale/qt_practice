#include <QCoreApplication>
#include <QDebug>

#include "laptop.h"

laptop::laptop(QObject *parent, QString name) : QObject(parent)
{
    this->name = name;
    qInfo() << this << name << " constructed";
}

laptop::~laptop()
{
    qInfo() << this << name << " deconstructed";
}

double laptop::asKilogram()
{
    return this->weight * 0.453592;
}

void laptop::test()
{
    qInfo() << this << name << asKilogram();
}
