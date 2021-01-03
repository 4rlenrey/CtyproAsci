#include "../conversion.h"
#include <cmath>
#include <string>
#include <iostream>
#include <algorithm>

int hex::to_dec(std::string number)
{
	int dec_value = 0;
	int base = static_cast<int>(number.length()) - 1;

	for (char &i : number)
	{
		dec_value += (((i >= '0' && i <= '9')  ? (static_cast<int>(i)-48) : ((i >= 'A' && i <= 'F')  ? (static_cast<int>(i)-55) : 0)) * std::pow(16, base));
		base--;
	}
	return dec_value;
}

std::string hex::to_hex(int number)
{
	int rest;
	std::string converted;
	do
	{
		rest = number % 16;
		number = (number - rest) / 16;
		converted.push_back(static_cast<char>(rest + (rest > 9 ? 55 : 48)));

	} while (number != 0);
	std::reverse(converted.begin(), converted.end());
	return converted;
}

std::string hex::convert(std::string str)
{
	int value;
	std::string bin_rep;

	for (char &i : str)
	{
		value = static_cast<int>(i);

        bin_rep = bin_rep + to_hex(value) + " ";

		i = static_cast<char>(value);
	}
	return bin_rep;
}

std::string hex::deconvert(std::string str)
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
            std::cout <<a_ch<<" "<< to_dec(a_ch)<<"\n";
		}
	}
	if (!a_ch.empty())
	{
		ASCII_rep += static_cast<char>(to_dec(a_ch));
		a_ch.clear();
	}
	return ASCII_rep;
}
