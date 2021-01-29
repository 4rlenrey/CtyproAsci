#include "../conversion.h"
#include <iostream>

std::string rot13::use(std::string str)
{
	int value;
	for (char &i : str)
	{
		value = static_cast<int>(i);
		if (value <= 90 && value >= 65)
		{
			if (value > 78)
			{
				value -= 13;
			}
			else
				value += 13;
		}
		else if (value <= 122 && value >= 97)
		{
			if (value > 110)
			{
				value -= 13;
			}
			else
				value += 13;
		}
		i = static_cast<char>(value);
	}
	return str;
}
