#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "mycesarchipher.h"
#include "encryption_types.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_convert_encryption_clicked();

    void on_convert_decryption_clicked();

private:
    Ui::MainWindow *ui;

    EncryptionType check_radio_button();
};
#endif // MAINWINDOW_H
