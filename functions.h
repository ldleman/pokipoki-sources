#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <QFile>
#include <QTextStream>
#include <QProcess>
#include "json.h"

class Functions {
public:
    Functions();
    static QString readFile(QString filePath);
    static QStringList readFileLine(QString filePath);
    static void touch(QString filePath);
    static void writeFile(QString filePath,QString content);
    static void deleteFile(QString filePath);
    static QString getOs();
    static void pkill(QString name);
};

#endif // FUNCTION_H
