#include <QCoreApplication>
#include <QDebug>
#include <iostream>

template<typename T>
void print(T value) {
    qInfo() << value;
}

void divideBy(int num){
    int a = 44;
    try {
        if (!num) throw QString("Division by 0");
        qInfo() << a / num;
    } catch (QString e) {
        qInfo() << e;
    } catch(...) {
        qInfo() << "Unknown error!";
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //divideBy(18);
    //divideBy(0);

    print(1);
    // But always give its template
    print<int>(22);   // Can be used in this manner as well, specifying the type
    print("Hello World");

    return a.exec();
}
