#include "aes256.h"
#include "Qt-AES/qaesencryption.h"

const QString AES256::encryption(const QString &str, const QString &strKey)
{
    QByteArray aesKey = QCryptographicHash::hash(strKey.toUtf8(), QCryptographicHash::Sha256);

    QByteArray iv = generateIV();

    QAESEncryption encryption(QAESEncryption::AES_256, QAESEncryption::CBC);
    QByteArray encrypted = encryption.encode(str.toUtf8(), aesKey, iv);

    QByteArray result = iv + encrypted;

    return result.toBase64();
}

const QString AES256::decryption(const QString &str, const QString &strKey)
{
    QByteArray encryptedData = QByteArray::fromBase64(str.toUtf8());

    if (encryptedData.size() < 16) {
        return "Ошибка: данные слишком короткие";
    }
    QByteArray iv = encryptedData.left(16);
    QByteArray ciphertext = encryptedData.mid(16);

    QByteArray aesKey = QCryptographicHash::hash(strKey.toUtf8(), QCryptographicHash::Sha256);

    QAESEncryption encryption(QAESEncryption::AES_256, QAESEncryption::CBC);
    QByteArray decrypted = encryption.decode(ciphertext, aesKey, iv);

    return encryption.removePadding(decrypted);
}

const QByteArray AES256::generateIV()
{
    return QCryptographicHash::hash(QByteArray::number(QDateTime::currentMSecsSinceEpoch()) + QByteArray::number(QRandomGenerator::global()->generate()), QCryptographicHash::Md5).left(16);
}
