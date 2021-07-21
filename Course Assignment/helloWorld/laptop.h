#ifndef LAPTOP_H
#define LAPTOP_H

#include <QObject>

class laptop : public QObject
{
    // Out laptop class is already inheriting the methods present 1 in the
    // QObject class, and all these inherited methods are marked public in the
    // QObject class
    Q_OBJECT
public:
    explicit laptop(QObject *parent = nullptr, QString name="");

    int weight;
    QString name;
    double asKilogram();
    void test();

    ~laptop();

signals:

};

#endif // LAPTOP_H
