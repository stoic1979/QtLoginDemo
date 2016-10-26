#include "utils.h"

#include <QFile>
#include <QDebug>

Utils::Utils() {
    // pass
}

/**
 * @brief Utils::GetFileContent
 * @param path a Qt string defining the path of file to be read
 * @return a Qt string containing the content of the file.
 */
QString Utils::GetFileContent(QString path) {

    QString content = "";

    QFile file(path);
    if(!file.open(QIODevice::ReadOnly)) {
        qDebug() << "[Utils::GetFileContent] got error while reading file: " << file.errorString();
    }

    QTextStream in(&file);

    while(!in.atEnd()) {
        QString line = in.readLine();
        content += line;
    }

    file.close();

    return content;
}
