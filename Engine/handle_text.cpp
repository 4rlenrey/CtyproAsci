#include "handle_text.h"
#include <QApplication>


QString Funct::handle(QString str, bool dec, Option system)
{
    std::string utf8_text = str.toUtf8().constData();
	switch (system)
	{
	case Caesar:
        str = QString::fromStdString(caesar(utf8_text, dec));
		break;
	
	default:
		break;
	}
	return str;
}
