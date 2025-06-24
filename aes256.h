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
    // Шифрует текст с ключом и возвращает результат в Base64
    static QString encryption(QString str, QString strKey);

    // Дешифрует текст из Base64 с ключом
    static QString decryption(QString str, QString strKey);

private:
    // Генерирует IV (вектор инициализации)
    static QByteArray generateIV();
};

#endif // AESCIPHER_H
