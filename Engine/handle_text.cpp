#include "handle_text.h"
#include <QApplication>


QString Funct::handle(QString str, QString from_format, QString to_format)
{

    std::string utf8_text = str.toUtf8().constData();

    if(from_format != "Normal text")
    {
        if(from_format == "Caesar cipher")
        {
            utf8_text = caesar(utf8_text, false);
        }
    }

    if(to_format == "Caesar cipher")
    {
        str = QString::fromStdString(caesar(utf8_text, true));
    }
    else
    {
        str = QString::fromStdString(utf8_text); //for normal text
    }

	return str;
}
