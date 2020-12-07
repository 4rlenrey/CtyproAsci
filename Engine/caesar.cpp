#include "handle_text.h"
#include <QApplication>

std::string Funct::caesar(std::string str, bool dec)
{
	if (dec) //if encrypt
	{
        char ch;
		int i, key = 3; //key change later

		for (i = 0; str[i] != '\0'; ++i)
		{
			ch = str[i];

			if (ch >= 'a' && ch <= 'z')
			{
				ch = ch + key;

				if (ch > 'z')
				{
					ch = ch - 'z' + 'a' - 1;
				}

				str[i] = ch;
			}
			else if (ch >= 'A' && ch <= 'Z')
			{
				ch = ch + key;

				if (ch > 'Z')
				{
					ch = ch - 'Z' + 'A' - 1;
				}

				str[i] = ch;
			}
		}
	}
	else
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
	}
	return str;
}
