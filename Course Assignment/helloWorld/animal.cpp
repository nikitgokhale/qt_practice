#include <QCoreApplication>
#include <QDebug>
#include "animal.h"

animal::animal(QObject *parent) : QObject(parent)
{
    // When created - "this" is created automatically
}

void animal::speeck(QString value) {
    qInfo() << value;
}
