#include <QString>

#ifndef MYCESARCHIPHER_H
#define MYCESARCHIPHER_H

class MyCesarChipher
{
public:
    MyCesarChipher();

    const static QString encryption(const QString &str, const QString &strKey);

    const static QString decryption(const QString &str, const QString &strKey);
private:
    static int calculateKey(const QString &strKey);
};

#endif // MYCESARCHIPHER_H
