#include <QCoreApplication>
#include <QDebug>

template<typename T>
T addVal(T value1, T value2) {
    return (value1 + value2);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << addVal<int>(100, 8);

    return a.exec();
}
