#ifndef HANDD
#define HANDD

#include <string>
#include <iostream>
#include <sstream>
#include <QApplication>
#include "cipher.h"

enum Option {Ascii_txt, Caesar};

class Funct
{
	public:
    //choose functions to encrypt and return qstring
    static QString handle(QString strin, QString from_format, QString to_format);
    
    //encrypt/decrypt function
};

#endif // HANDD
