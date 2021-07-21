#ifndef SOURCE_H
#define SOURCE_H

#include <QObject>

class source : public QObject
{
    Q_OBJECT
public:
    explicit source(QObject *parent = nullptr);

    void sayHello(); // prints out "Hello World"
    void doTest();   // emits the signal

signals:
    void test();    // signal
public slots:

};

#endif // SOURCE_H
