#include "httpclient.h"

#include <QMapIterator>
#include <QDebug>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QUrlQuery>

HttpClient::HttpClient(QString url, QObject *parent): QObject(parent), url(url) {}

/**
 * @brief HttpClient::SendPostRequest
 * @param params a QMap containg post param name and value
 */
void HttpClient::SendPostRequest(QMap<QString, QString> &params) {
    QMapIterator<QString, QString> itr(params);


    QNetworkAccessManager manager(this);

    QNetworkRequest request(url);

    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");

    QUrlQuery postData;
    while (itr.hasNext()) {
        itr.next();
        postData.addQueryItem(itr.key(), itr.value());
    }

    QObject::connect(&manager, SIGNAL(finished(QNetworkReply *)), this, SLOT(replyFinished(QNetworkReply *)));

    manager.post(request, postData.toString(QUrl::FullyEncoded).toUtf8());

    qDebug() << "[HttpClient] sent post request";
}

void HttpClient::replyFinished(QNetworkReply *reply) {
    qDebug() << "[HttpClient] got network reply";
}
