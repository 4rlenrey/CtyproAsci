#include "handle_text.h"
#include <QApplication>


QString Funct::handle(QString str, QString input_format, QString output_format)
{

    if(input_format == output_format)
        return str;

    std::string utf8_text = str.toUtf8().constData();
    std::string _string = utf8_text;

    if(input_format != "Normal text")
    {
        if(input_format == "Caesar cipher")
        {
            _string = Caesar::decrypt(_string);
        }
    }

    if(output_format != "Normal text")
    {
        if(output_format == "Caesar cipher")
        {
            _string = Caesar::encrypt(_string);
        }
    }

    str = QString::fromStdString(_string);
	return str;
}
