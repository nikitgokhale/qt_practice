#ifndef ANIMAL_H  // If not defined
#define ANIMAL_H  // Define

#include <QObject>

class animal : public QObject
{
    Q_OBJECT
    // Here anything is private
public:
    explicit animal(QObject *parent = nullptr);

    void speeck(QString value);

    // animal* this;  // This is an implicit pointer which points to this class.

signals:

};

#endif // ANIMAL_H
