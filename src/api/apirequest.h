#ifndef APIREQUEST_H
#define APIREQUEST_H

#include <QHash>
#include <QHashIterator>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QObject>

class ApiRequest : public QObject
{
    Q_OBJECT

public:
    ApiRequest(QObject *parent = 0);

public slots:
    void startRequest(QString method, QHash<QString, QString> args);

private slots:
    void httpFinished(QNetworkReply *rep);

private:
    QString BASE_URL;
    QString API_VERSION;
};

#endif // APIREQUEST_H
