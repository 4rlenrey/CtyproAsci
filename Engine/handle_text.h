#ifndef HANDD
#define HANDD

#include <string>
#include <iostream>
#include <sstream>
#include <QApplication>

enum Option {Ascii_txt, Caesar};

class Funct
{
	public:
    static QString handle(QString strin, QString from_format, QString to_format); // string
    static std::string caesar(std::string strin, bool encrypt); //bool is encrypt/decrypt
};

#endif // HANDD
