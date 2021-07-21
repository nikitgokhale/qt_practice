#ifndef TEACHER_H
#define TEACHER_H

#include <QObject>
#include "person.h"

class teacher : public person
{
    Q_OBJECT
public:
    explicit teacher(QObject *parent = nullptr);

    void teaching();

signals:

};

#endif // TEACHER_H
