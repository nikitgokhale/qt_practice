#ifndef TEST_H
#define TEST_H

#include <QObject>

class test : public QObject
{
    Q_OBJECT
public:
    explicit test(QObject *parent = nullptr);

signals:
    void closeSignal();

public slots:
    void kill();

};

#endif // TEST_H
