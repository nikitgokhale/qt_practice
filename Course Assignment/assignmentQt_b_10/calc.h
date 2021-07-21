#ifndef CALC_H
#define CALC_H

#include <QObject>

class calc : public QObject
{
    Q_OBJECT
public:
    explicit calc(QObject *parent = nullptr);
    ~calc();

    int inDogYears(int age);
    int inCatYears(int age);


signals:

};

#endif // CALC_H
