#include "httpclient.h"

#include <QMapIterator>
#include <QDebug>

HttpClient::HttpClient(QString url): url(url) {}

/**
 * @brief HttpClient::SendPostRequest
 * @param params a QMap containg post param name and value
 */
void HttpClient::SendPostRequest(QMap<QString, QString> &params) {
    QMapIterator<QString, QString> itr(params);
    while (itr.hasNext()) {
        itr.next();
        qDebug() << itr.key() << ": " << itr.value() << endl;
    }
}
