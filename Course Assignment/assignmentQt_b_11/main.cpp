#include <QCoreApplication>
#include <QDebug>

#include "source.h"
#include "destination.h"
#include "test.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // source objSource;
    // destination objDestination;
    test objTestSignal;

    // QObject::connect(&objSource, &source::mySignal, &objDestination, &destination::onMessage);

    // Connection is made between the close signal and the Qt application quit() function
    QObject::connect(&objTestSignal, &test::closeSignal, &a, &QCoreApplication::quit, Qt::QueuedConnection);
    qInfo() << "Close the application";

    objTestSignal.kill();  // When this "kill()" function is called "closeSignal()" is emitted and the connection
                           // is successfully made and the application is closed
    //objSource.test();

    return a.exec();
}
