#include "../conversion.h"
#include <cmath>
#include <string>
#include <iostream>

int binary::to_dec(std::string number)
{
	int dec_value = 0;
	int base = static_cast<int>(number.length()) - 1;

	for (char &i : number)
	{
		dec_value += ((i == '1' ? 1 : 0) * std::pow(2, base));
		base--;
	}
	return dec_value;
}

std::string binary::to_binary(int number)
{
	std::string binary_version;
	while (number != 0)
	{
		binary_version = (number % 2 == 0 ? "0" : "1") + binary_version;
		number /= 2;
	}
	return binary_version;
}

std::string binary::convert(std::string str)
{
	int value;
	std::string bin_rep;

	for (char &i : str)
	{
		value = static_cast<int>(i);

		bin_rep = bin_rep + (value < 65 ? " " : " 0") + to_binary(value);

		i = static_cast<char>(value);
	}
	return bin_rep;
}

std::string binary::deconvert(std::string str)
{
	std::string ASCII_rep;
	std::string a_ch;

	for (char &i : str) //for each character in string
	{
		if (i != ' ')
		{
			a_ch += i;
		}
		else
		{
			ASCII_rep += static_cast<char>(to_dec(a_ch));
			a_ch.clear();
		}
	}
	if (!a_ch.empty())
	{
		ASCII_rep += static_cast<char>(to_dec(a_ch));
		a_ch.clear();
	}
	return ASCII_rep;
}
