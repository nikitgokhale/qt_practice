#include "destination.h"
#include "source.h"

destination::destination(QObject *parent) : QObject(parent)
{

}

void destination::test()
{
    // We casted the source object to use the source fubction in a destination source file
    source* obj = qobject_cast<source*>(sender());
    if(obj) obj->sayHello();
}
