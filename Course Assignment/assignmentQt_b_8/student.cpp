#include <QDebug>
#include "student.h"

student::student(QObject *parent) : person(parent)
{

}

void student::buyBooks()
{
    qInfo() << "Buying Books";
}
