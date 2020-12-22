#ifndef CIPHER
#define CIPHER
#include <iostream>

class Caesar
{
    static int shift;
public:
	static std::string encrypt(std::string strin); //bool is encrypt/decrypt
	static std::string decrypt(std::string strin); //bool is encrypt/decrypt
};

#endif // CIPHER
