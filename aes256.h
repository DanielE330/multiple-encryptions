#ifndef AES256_H
#define AES256_H

#include <QString>
#include <QByteArray>
#include <QCryptographicHash>
#include <QRandomGenerator>
#include <QDateTime>

class AES256
{
public:
    const static QString encryption(const QString &str, const QString &strKey);

    const static QString decryption(const QString &str, const QString &strKey);

private:
    const static QByteArray generateIV();
};

#endif // AESCIPHER_H
