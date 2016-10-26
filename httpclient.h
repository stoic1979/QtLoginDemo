#ifndef HTTPCLIENT_H
#define HTTPCLIENT_H

#include <QObject>
#include <QMap>

/**
 * @brief The HttpClient class
 * Description:
 * Http Client is used to send http get/post etc requests to server.
 */
class HttpClient: public QObject
{
    Q_OBJECT
public:
    HttpClient(QString url);

    void SendPostRequest(QMap<QString, QString> &params);

private:
    QString url;
};

#endif // HTTPCLIENT_H
