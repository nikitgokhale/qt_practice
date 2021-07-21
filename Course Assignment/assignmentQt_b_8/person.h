#ifndef PERSON_H
#define PERSON_H

#include <QObject>

class person : public QObject
{
    Q_OBJECT
public:
    explicit person(QObject *parent = nullptr);

    QString name;
    void sayHello();

signals:

};

#endif // PERSON_H
