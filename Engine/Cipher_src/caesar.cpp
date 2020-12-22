#include "../cipher.h"
#include <iostream>

int Caesar::shift = 1;

std::string Caesar::encrypt(std::string str)
{
	int i, key = shift; //key change later

	for (i = 0; str[i] != '\0'; ++i)
	{

		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] + key;

			if (str[i] > 'z')
			{
				str[i] = str[i] - 'z' + 'a' - 1;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + key;

			if (str[i] > 'Z')
			{
				str[i] = str[i] - 'Z' + 'A' - 1;
			}
		}
	}
	return str;
}

std::string Caesar::decrypt(std::string str)
{
	char ch;
	int i, key = 3;
	for (i = 0; str[i] != '\0'; ++i)
	{
		ch = str[i];

		if (ch >= 'a' && ch <= 'z')
		{
			ch = ch - key;

			if (ch < 'a')
			{
				ch = ch + 'z' - 'a' + 1;
			}

			str[i] = ch;
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			ch = ch - key;

			if (ch < 'A')
			{
				ch = ch + 'Z' - 'A' + 1;
			}

			str[i] = ch;
		}
	}

	return str;
}
