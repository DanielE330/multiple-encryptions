#include "mycesarchipher.h"
#include "qdebug.h"

MyCesarChipher::MyCesarChipher() {}

int MyCesarChipher::calculateKey(const QString &strKey){
    if(strKey.isEmpty()) {
        throw std::invalid_argument("Key cannot be empty");
    }

    int keyValue = 0;
    for(const QChar& ch : strKey) {
        keyValue += ch.unicode();
    }
    return keyValue;
}

const QString MyCesarChipher::encryption(const QString &str,  const QString &strKey){
    try {
        if(str.isEmpty()) {
            return "";
        }

        const int keyValue = calculateKey(strKey);
        QString result;
        result.reserve(str.length());

        for(const QChar& ch : str) {
            const ushort current = ch.unicode();
            const ushort encrypted = (current + keyValue) % 65536;
            result.append(QChar(encrypted));
        }

        return result;
    }
    catch(const std::exception& e) {
        return "";
    }
}

const QString MyCesarChipher::decryption(const QString &str,  const QString &strKey){
    try {
        if(str.isEmpty()) {
            return "";
        }

        const int keyValue = calculateKey(strKey);
        QString result;
        result.reserve(str.length());

        for(const QChar& ch : str) {
            const ushort current = ch.unicode();
            const ushort decrypted = (current - keyValue) % 65536;
            result.append(QChar(decrypted));
        }

        return result;
    }
    catch(const std::exception& e) {
        return "";
    }
}
