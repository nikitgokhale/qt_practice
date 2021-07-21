#include <QCoreApplication>
#include <QDebug>
#include <iostream>

int addTen(int age)
{
    return age+10;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 0;
    qInfo() << "Enter age:";
    std::cin >> age;

    int value = addTen(age);
    qInfo() << "After ten years you will be" << value << "years old";

    return a.exec();
}
