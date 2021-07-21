#include <QCoreApplication>
#include <QDebug>
#include <iostream>

#include "calc.h"

void display(QString* name)
{
    qInfo() << "The name" << name;
    qInfo() << "The object" << &name;
    qInfo() << "The data" << *name;
    qInfo("");
}

int calcDog(int age, calc* obj)
{
    return obj->inDogYears(age);
}

int calcCat(int age, calc* obj)
{
    return obj->inCatYears(age);
}

void test()
{
    int age = 0;
    qInfo() << "Enter Age:";
    std::cin >> age;

    calc* obj = new calc(nullptr);
    qInfo() << "Age in dog years" << calcDog(age, obj);
    qInfo() << "Age in cat years" << calcCat(age, obj);

    delete obj;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /*QString name = "Nikit";   // On the stack
    QString* description = new QString("Software Engineer");  // Actually on the Heap ALWAYS DELETE

    display(&name);
    display(description);

    delete description;*/

    test();

    return a.exec();
}
