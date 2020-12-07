#ifndef HANDD
#define HANDD

#include <string>
#include <iostream>
#include <sstream>
#include <QApplication>

enum Option {Caesar};

class Funct
{
	public:
    static QString handle(QString strin, bool encrypt, Option); // string
    static std::string caesar(std::string strin, bool encrypt); //bool is encrypt/decrypt
};

#endif // HANDD
