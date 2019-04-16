#include "sampleclass.h"

SampleClass::SampleClass()
{

}


#ifdef Q_OS_LINUX
void SampleClass::Print()
{
    qDebug() << "Q_OS_LINUX";
}
#endif

#ifdef Q_OS_WIN32
void SampleClass::Print()
{
    qDebug() << "Q_OS_Windows";
}
#endif
