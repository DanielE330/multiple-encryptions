#ifndef BLOWFISH_H
#define BLOWFISH_H

#include <QString>
#include <QByteArray>
#include <QtEndian>

class Blowfish {
public:
    static QString encryption(const QString &str, const QString &strKey);

    static QString decryption(const QString &str, const QString &strKey);

private:
    static void initialize(const QString &strKey);

    static quint32 feistel(quint32 &x);

    static void encrypt_block(quint32 &left, quint32 &right);

    static void decrypt_block(quint32 &left, quint32 &right);
};

#endif // BLOWFISH_H
