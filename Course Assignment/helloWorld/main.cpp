#include <QCoreApplication>
#include <QDebug>
#include <iostream>

#include "laptop.h"

int getMax()
{
    int max;
    qInfo() << "Enter maximum value: ";
    std::cin >> max;
    return max;
}

void message(QString value) {
    qInfo() << value;
}

void testLaptop(laptop &machine)
{
    // We have to pass the QObject by reference
    // By value would attempt to make a copy!!!
    // **Note: Qt doesn't allow to make a copy of QObject
    machine.test();
}

void makeLaptops(QObject* parent)
{
    laptop mine(parent, "HP Notebook");
    laptop yours(parent, "Dell Laptop");

    mine.weight = 5;
    yours.weight = 3;

    testLaptop(mine);
    testLaptop(yours);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* Assignment No 1 and 2
     *
     * qInfo() << "Hello World";
    qInfo("Hello Again!");
    *
    */

    /* Assignment No 4
     * int age = 44;
    qInfo() << "I am " << age << " years old";
    */

    /* Assignment No 5
    int age = 0;

    qInfo() << "Enter your age: ";
    std::cin >> age;

    qInfo() << "You are" << age << "years old";
    */

    /* Assignment No 6
    int max = 0;
    qInfo() << "Enter maximum number";
    std::cin >> max;

    if (max <= 0) {
        // Making sure to stop the application
        qFatal("You did not enter a valid number!");
    }
    else {
        for (int i = 1; i <= max; i++) {
            qInfo() << i << "Hello";
        }
    }
    */

    /* Assignment No 7
    int max = getMax();
    if (max) {
        for (int i = 0; i < max; i++) {
            message("Hello World");
        }
    }*/

    makeLaptops(&a);

    return a.exec();
}
