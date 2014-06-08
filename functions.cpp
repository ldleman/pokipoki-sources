#include "functions.h"


Functions::Functions() {}

/**
 * Récupérer le contenu d'un fichier au format DB_SNIPPET_FORMAT|DB_LANGAGE_FORMAT.
 * @author idleman
 */
QString Functions::readFile(QString filePath) {
    QFile file(filePath);
    QString texte;

    if ( file.open(QIODevice::ReadOnly | QIODevice::Text) ) {
        QTextStream flux(&file);
        flux.setCodec("UTF-8");
        texte = flux.readAll();
        file.close();
    } else {
    }
    return texte;
}

QString Functions::getOs(){
    QString OS = "Unknown";
    #ifdef Q_WS_X11
        OS = "Linux";
    #endif
    #ifdef Q_WS_WIN
        OS = "Windows";
    #endif
    #ifdef Q_WS_MACX
        OS = "Mac";
    #endif
        return OS;
}

void Functions::pkill(QString name){
    QString cmd = "taskkill /F /IM "+name+".exe";
    if(Functions::getOs()=="Linux"){
       cmd = "pkill "+name;
    }
    QProcess p;
    p.start(cmd);
    p.waitForFinished();
}

void Functions::writeFile(QString filePath,QString content){
    QFile file(filePath);
    if (file.open(QFile::WriteOnly)) {
        QTextStream out(&file);
        out.setCodec("UTF-8");
        out << content;
    }
}

void Functions::deleteFile(QString filePath){
    QFile file(filePath);
    file.remove();
}


void Functions::touch(QString filePath){
    Functions::writeFile( filePath,"");
}
