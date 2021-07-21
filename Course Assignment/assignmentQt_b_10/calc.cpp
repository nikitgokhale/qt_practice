#include <QDebug>
#include "calc.h"

calc::calc(QObject *parent) : QObject(parent)
{
    qInfo() << this << "constructed";
}

calc::~calc()
{
    qInfo() << this << "deconstructed";
}

int calc::inDogYears(int age)
{
    return age * 7;
}

int calc::inCatYears(int age)
{
    return age * 10;
}
