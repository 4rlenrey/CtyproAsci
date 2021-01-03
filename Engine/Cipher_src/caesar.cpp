#include "../cipher.h"
#include <iostream>

int Caesar::shift = 1;

std::string Caesar::encrypt(std::string str)
{
	int value;

	for (char &i : str) //for each character in string
	{
		value = static_cast<int>(i); //conversion to get ascii value
		if (i >= 'a' && i <= 'z')
		{
			value = value + shift;

			if (value > 122)
			{
				value = value - 26;
			}
		}
		else if (i >= 'A' && i <= 'Z')
		{
			value = value + shift;

			if (value > 90)
			{
				value = value - 26;
			}
		}
		i = static_cast<char>(value);
	}
	return str;
}

std::string Caesar::decrypt(std::string str)
{
	int value;

	for (char &i : str) //for each character in string
	{
		value = static_cast<int>(i);
		if (i >= 'a' && i <= 'z')
		{
			value = value - shift;

			if (value < 97)
			{
				value = value + 26;
			}
		}
		else if (i >= 'A' && i <= 'Z')
		{
			value = value - shift;

			if (value < 65)
			{
				value = value + 26;
			}
		}
		i = static_cast<char>(value);
	}
	return str;
}