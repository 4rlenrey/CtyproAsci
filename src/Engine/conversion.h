#ifndef CONVER
#define CONVER
#include <iostream>

namespace binary
{
	int to_dec(std::string);
	std::string to_binary(int);
	std::string convert(std::string);
	std::string deconvert(std::string);
} // namespace binary

namespace hex
{
	int to_dec(std::string);
	std::string to_hex(int);
	std::string convert(std::string);
	std::string deconvert(std::string);
} // namespace hex

namespace rot13
{
	std::string use(std::string);
} // namespace rot13

#endif // CONVER
