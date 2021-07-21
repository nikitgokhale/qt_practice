#include <QCoreApplication>
#include <QDebug>
#include <QList>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> ages = {};
    do {
        int age;
        qInfo() << "Enter Age:";
        std::cin >> age;
        if (!age) break;
        ages.append(age);
    } while(true);

    qInfo() << "Ages Entered: ";
    for (int i : ages) {
        qInfo() << i;
    }
    qInfo() << "Finished!";


    return a.exec();
}
