#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "aes256.h"
#include "blowfish.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->to_cesar->setChecked(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

EncryptionType MainWindow::check_radio_button(){

    if(ui->to_cesar->isChecked()) return EncryptionType::Caesar;

    else if(ui->to_aes_256->isChecked()) return EncryptionType::AES;

    else if(ui->to_blowfish->isChecked()) return EncryptionType::Blowfish;

    return EncryptionType::None;
}

void MainWindow::on_convert_encryption_clicked()
{
    const QString str = ui->input_line_encryption->text().trimmed();
    const QString strKey = ui->encryption_key->text().trimmed();

    if (str.isEmpty() || strKey.isEmpty()) {
        ui->encryption_output->setText("Введите текст и ключ!");
        return;
    }

    try {
        const EncryptionType chipher = check_radio_button();
        QString result;
        switch (chipher) {
            case EncryptionType::Caesar:
                result = MyCesarChipher::encryption(str, strKey);
                break;
            case EncryptionType::AES:
                result = AES256::encryption(str, strKey);
                break;
            case EncryptionType::Blowfish:
                result = Blowfish::encryption(str, strKey);
                break;
            case EncryptionType::None:
                result = "Ничего не выбрано";
                break;
            default:
                result = "Ошибка!";
                break;
        }

        ui->encryption_output->setText(result);
    }
    catch (const std::exception& e) {
        ui->encryption_output->setText("Ошибка: " + QString(e.what()));
    }
    catch (...) {
        ui->encryption_output->setText("Неизвестная ошибка шифрования");
    }
}


void MainWindow::on_convert_decryption_clicked()
{
    const QString str = ui->input_line_decryption->text().trimmed();
    const QString strKey = ui->decryption_key->text().trimmed();

    if (str.isEmpty() || strKey.isEmpty()) {
        ui->decryption_output->setText("Введите текст и ключ!");
        return;
    }

    try {
        const EncryptionType chipher = check_radio_button();
        QString result;
        switch (chipher) {
        case EncryptionType::Caesar:
            result = MyCesarChipher::decryption(str, strKey);
            break;
        case EncryptionType::AES:
            result = AES256::decryption(str, strKey);
            break;
        case EncryptionType::Blowfish:
            result = Blowfish::decryption(str, strKey);
            break;
        case EncryptionType::None:
            result = "Ничего не выбрано";
            break;
        default:
            result = "Ошибка!";
            break;
        }

        ui->decryption_output->setText(result);
    }
    catch (const std::exception& e) {
        ui->decryption_output->setText("Ошибка: " + QString(e.what()));
    }
    catch (...) {
        ui->decryption_output->setText("Неизвестная ошибка шифрования");
    }
}

