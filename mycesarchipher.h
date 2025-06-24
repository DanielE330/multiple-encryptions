#include <QString>

#ifndef MYCESARCHIPHER_H
#define MYCESARCHIPHER_H

class MyCesarChipher
{
public:
    MyCesarChipher();

    static QString encryption(QString str, QString strKey);
    static QString decryption(QString str, QString strKey);
private:
    static int calculateKey(QString strKey);
};

#endif // MYCESARCHIPHER_H
