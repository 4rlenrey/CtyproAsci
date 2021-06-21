#ifndef HANDD
#define HANDD

#include <string>
#include <iostream>
#include <sstream>
#include <QApplication>
#include "cipher.h"
#include "conversion.h"

class Funct
{
public:
    //choose functions to encrypt and return qstring
    static QString handle(QString strin, QString from_format, QString to_format);
};

#endif // HANDD
