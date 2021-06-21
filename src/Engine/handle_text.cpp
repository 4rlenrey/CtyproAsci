#include "handle_text.h"
#include <QApplication>

QString Funct::handle(QString str, QString input_format, QString output_format)
{

	if (input_format == output_format)
		return str;

	std::string utf8_text = str.toUtf8().constData(); //change for windows
	std::string _string = utf8_text;

	if (input_format != "Normal text") //deconvert/decrypt input
	{
		if (input_format == "Caesar cipher")
			_string = Caesar::decrypt(_string);

		else if (input_format == "Binary")
			_string = binary::deconvert(_string);

		else if (input_format == "Hex")
			_string = hex::deconvert(_string);

		else if (input_format == "ROT13")
			_string = rot13::use(_string);
	}

	if (output_format != "Normal text") //convert/encrypt
	{
		if (output_format == "Caesar cipher")
			_string = Caesar::encrypt(_string);

		else if (output_format == "Binary")
			_string = binary::convert(_string);

		else if (output_format == "Hex")
			_string = hex::convert(_string);

		else if (output_format == "ROT13")
			_string = rot13::use(_string);
	}

	str = QString::fromStdString(_string);
	return str;
}
