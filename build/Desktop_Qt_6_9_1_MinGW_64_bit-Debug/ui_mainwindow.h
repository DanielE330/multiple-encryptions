/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLineEdit *input_line_encryption;
    QLabel *label_5;
    QLineEdit *encryption_key;
    QPushButton *convert_encryption;
    QLabel *label_6;
    QLineEdit *encryption_output;
    QWidget *tab_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLineEdit *input_line_decryption;
    QLabel *label_2;
    QLineEdit *decryption_key;
    QPushButton *convert_decryption;
    QLabel *label_3;
    QLineEdit *decryption_output;
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QRadioButton *to_aes_256;
    QRadioButton *to_cesar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(501, 327);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 0, 221, 281));
        tab = new QWidget();
        tab->setObjectName("tab");
        layoutWidget_2 = new QWidget(tab);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(0, 0, 211, 251));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName("label_4");

        verticalLayout_3->addWidget(label_4);

        input_line_encryption = new QLineEdit(layoutWidget_2);
        input_line_encryption->setObjectName("input_line_encryption");

        verticalLayout_3->addWidget(input_line_encryption);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName("label_5");

        verticalLayout_3->addWidget(label_5);

        encryption_key = new QLineEdit(layoutWidget_2);
        encryption_key->setObjectName("encryption_key");

        verticalLayout_3->addWidget(encryption_key);

        convert_encryption = new QPushButton(layoutWidget_2);
        convert_encryption->setObjectName("convert_encryption");

        verticalLayout_3->addWidget(convert_encryption);

        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName("label_6");

        verticalLayout_3->addWidget(label_6);

        encryption_output = new QLineEdit(layoutWidget_2);
        encryption_output->setObjectName("encryption_output");

        verticalLayout_3->addWidget(encryption_output);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        layoutWidget = new QWidget(tab_2);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 211, 251));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        input_line_decryption = new QLineEdit(layoutWidget);
        input_line_decryption->setObjectName("input_line_decryption");

        verticalLayout_2->addWidget(input_line_decryption);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        decryption_key = new QLineEdit(layoutWidget);
        decryption_key->setObjectName("decryption_key");

        verticalLayout_2->addWidget(decryption_key);

        convert_decryption = new QPushButton(layoutWidget);
        convert_decryption->setObjectName("convert_decryption");

        verticalLayout_2->addWidget(convert_decryption);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        decryption_output = new QLineEdit(layoutWidget);
        decryption_output->setObjectName("decryption_output");

        verticalLayout_2->addWidget(decryption_output);

        tabWidget->addTab(tab_2, QString());
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(230, 20, 141, 61));
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(7, 19, 114, 38));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        to_aes_256 = new QRadioButton(widget);
        to_aes_256->setObjectName("to_aes_256");

        verticalLayout->addWidget(to_aes_256);

        to_cesar = new QRadioButton(widget);
        to_cesar->setObjectName("to_cesar");

        verticalLayout->addWidget(to_cesar);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 501, 18));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\321\202\320\265\320\272\321\201\321\202 \320\264\320\273\321\217 \321\210\320\270\321\204\321\200\320\276\320\262\320\272\320\270", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\272\320\273\321\216\321\207", nullptr));
        convert_encryption->setText(QCoreApplication::translate("MainWindow", "\320\272\320\276\320\275\320\262\320\265\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\262\321\213\320\262\320\276\320\264", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", " \321\210\320\270\321\204\321\200\320\276\320\262\320\272\320\260 ", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\321\202\320\265\320\272\321\201\321\202 \320\264\320\273\321\217 \321\200\320\260\321\201\321\210\320\270\321\204\321\200\320\276\320\262\320\272\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\272\320\273\321\216\321\207", nullptr));
        convert_decryption->setText(QCoreApplication::translate("MainWindow", "\320\272\320\276\320\275\320\262\320\265\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\262\321\213\320\262\320\276\320\264", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\321\200\320\260\321\201\321\210\320\270\321\204\321\200\320\276\320\262\320\272\320\260", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\250\320\270\321\204\321\200\321\213:", nullptr));
        to_aes_256->setText(QCoreApplication::translate("MainWindow", "AES-256-CBC \321\201 PBKDF2", nullptr));
        to_cesar->setText(QCoreApplication::translate("MainWindow", "\321\210\320\270\321\204\321\200 \321\206\320\265\320\267\320\260\321\200\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
