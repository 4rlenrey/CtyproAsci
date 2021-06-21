#ifndef CIPHER
#define CIPHER
#include <iostream>

class Caesar
{
	static int shift;

public:
	static std::string encrypt(std::string);
	static std::string decrypt(std::string);
};

#endif // CIPHER
