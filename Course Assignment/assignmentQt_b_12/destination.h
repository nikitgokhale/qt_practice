#ifndef DESTINATION_H
#define DESTINATION_H

#include <QObject>

class destination : public QObject
{
    Q_OBJECT
public:
    explicit destination(QObject *parent = nullptr);

signals:

public slots:
    void test();    // Slot which receives the signal
};

#endif // DESTINATION_H
