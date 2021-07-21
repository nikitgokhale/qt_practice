#include <QDebug>
#include "teacher.h"

teacher::teacher(QObject *parent) : person(parent)
{

}

void teacher::teaching()
{
    qInfo() << "Teaching";
}
