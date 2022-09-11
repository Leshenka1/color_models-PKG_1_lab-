/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *DrawButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label1;
    QComboBox *comboBox1;
    QLabel *label3;
    QSlider *horizontalSlider_8;
    QSlider *horizontalSlider_4;
    QLineEdit *lineEdit_2_4;
    QSlider *horizontalSlider_9;
    QSlider *horizontalSlider_1;
    QComboBox *comboBox3;
    QSlider *horizontalSlider_5;
    QComboBox *comboBox2;
    QLineEdit *lineEdit_3_4;
    QSlider *horizontalSlider_6;
    QSlider *horizontalSlider_3;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_4;
    QSlider *horizontalSlider_2;
    QLabel *label2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_1_4;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_5;
    QSlider *horizontalSlider_7;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_8;
    QSlider *horizontalSlider_3_4;
    QSlider *horizontalSlider_2_4;
    QSlider *horizontalSlider_1_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(806, 578);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        DrawButton = new QPushButton(centralwidget);
        DrawButton->setObjectName(QString::fromUtf8("DrawButton"));
        DrawButton->setGeometry(QRect(20, 260, 150, 100));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(180, 20, 611, 391));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label1 = new QLabel(gridLayoutWidget);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setTextFormat(Qt::MarkdownText);
        label1->setAlignment(Qt::AlignCenter);
        label1->setWordWrap(false);

        gridLayout->addWidget(label1, 11, 0, 1, 1);

        comboBox1 = new QComboBox(gridLayoutWidget);
        comboBox1->addItem(QString());
        comboBox1->addItem(QString());
        comboBox1->addItem(QString());
        comboBox1->addItem(QString());
        comboBox1->addItem(QString());
        comboBox1->addItem(QString());
        comboBox1->setObjectName(QString::fromUtf8("comboBox1"));
        comboBox1->setToolTipDuration(0);
        comboBox1->setMaxCount(2147483645);

        gridLayout->addWidget(comboBox1, 0, 0, 1, 1);

        label3 = new QLabel(gridLayoutWidget);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label3, 11, 2, 1, 1);

        horizontalSlider_8 = new QSlider(gridLayoutWidget);
        horizontalSlider_8->setObjectName(QString::fromUtf8("horizontalSlider_8"));
        horizontalSlider_8->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_8, 19, 2, 1, 1);

        horizontalSlider_4 = new QSlider(gridLayoutWidget);
        horizontalSlider_4->setObjectName(QString::fromUtf8("horizontalSlider_4"));
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_4, 14, 1, 1, 1);

        lineEdit_2_4 = new QLineEdit(gridLayoutWidget);
        lineEdit_2_4->setObjectName(QString::fromUtf8("lineEdit_2_4"));

        gridLayout->addWidget(lineEdit_2_4, 29, 1, 1, 1);

        horizontalSlider_9 = new QSlider(gridLayoutWidget);
        horizontalSlider_9->setObjectName(QString::fromUtf8("horizontalSlider_9"));
        horizontalSlider_9->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_9, 28, 2, 1, 1);

        horizontalSlider_1 = new QSlider(gridLayoutWidget);
        horizontalSlider_1->setObjectName(QString::fromUtf8("horizontalSlider_1"));
        horizontalSlider_1->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_1, 14, 0, 1, 1);

        comboBox3 = new QComboBox(gridLayoutWidget);
        comboBox3->addItem(QString());
        comboBox3->addItem(QString());
        comboBox3->addItem(QString());
        comboBox3->addItem(QString());
        comboBox3->addItem(QString());
        comboBox3->addItem(QString());
        comboBox3->setObjectName(QString::fromUtf8("comboBox3"));

        gridLayout->addWidget(comboBox3, 0, 2, 1, 1);

        horizontalSlider_5 = new QSlider(gridLayoutWidget);
        horizontalSlider_5->setObjectName(QString::fromUtf8("horizontalSlider_5"));
        horizontalSlider_5->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_5, 19, 1, 1, 1);

        comboBox2 = new QComboBox(gridLayoutWidget);
        comboBox2->addItem(QString());
        comboBox2->addItem(QString());
        comboBox2->addItem(QString());
        comboBox2->addItem(QString());
        comboBox2->addItem(QString());
        comboBox2->addItem(QString());
        comboBox2->setObjectName(QString::fromUtf8("comboBox2"));

        gridLayout->addWidget(comboBox2, 0, 1, 1, 1);

        lineEdit_3_4 = new QLineEdit(gridLayoutWidget);
        lineEdit_3_4->setObjectName(QString::fromUtf8("lineEdit_3_4"));

        gridLayout->addWidget(lineEdit_3_4, 29, 2, 1, 1);

        horizontalSlider_6 = new QSlider(gridLayoutWidget);
        horizontalSlider_6->setObjectName(QString::fromUtf8("horizontalSlider_6"));
        horizontalSlider_6->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_6, 28, 1, 1, 1);

        horizontalSlider_3 = new QSlider(gridLayoutWidget);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_3, 28, 0, 1, 1);

        lineEdit_7 = new QLineEdit(gridLayoutWidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        gridLayout->addWidget(lineEdit_7, 13, 2, 1, 1);

        lineEdit_1 = new QLineEdit(gridLayoutWidget);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));

        gridLayout->addWidget(lineEdit_1, 13, 0, 1, 1);

        lineEdit_9 = new QLineEdit(gridLayoutWidget);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));

        gridLayout->addWidget(lineEdit_9, 20, 2, 1, 1);

        lineEdit_4 = new QLineEdit(gridLayoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 13, 1, 1, 1);

        horizontalSlider_2 = new QSlider(gridLayoutWidget);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_2, 19, 0, 1, 1);

        label2 = new QLabel(gridLayoutWidget);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label2, 11, 1, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 18, 0, 1, 1);

        lineEdit_1_4 = new QLineEdit(gridLayoutWidget);
        lineEdit_1_4->setObjectName(QString::fromUtf8("lineEdit_1_4"));

        gridLayout->addWidget(lineEdit_1_4, 29, 0, 1, 1);

        lineEdit_3 = new QLineEdit(gridLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 20, 0, 1, 1);

        lineEdit_5 = new QLineEdit(gridLayoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        gridLayout->addWidget(lineEdit_5, 18, 1, 1, 1);

        horizontalSlider_7 = new QSlider(gridLayoutWidget);
        horizontalSlider_7->setObjectName(QString::fromUtf8("horizontalSlider_7"));
        horizontalSlider_7->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_7, 14, 2, 1, 1);

        lineEdit_6 = new QLineEdit(gridLayoutWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        gridLayout->addWidget(lineEdit_6, 20, 1, 1, 1);

        lineEdit_8 = new QLineEdit(gridLayoutWidget);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        gridLayout->addWidget(lineEdit_8, 18, 2, 1, 1);

        horizontalSlider_3_4 = new QSlider(gridLayoutWidget);
        horizontalSlider_3_4->setObjectName(QString::fromUtf8("horizontalSlider_3_4"));
        horizontalSlider_3_4->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_3_4, 30, 2, 1, 1);

        horizontalSlider_2_4 = new QSlider(gridLayoutWidget);
        horizontalSlider_2_4->setObjectName(QString::fromUtf8("horizontalSlider_2_4"));
        horizontalSlider_2_4->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_2_4, 30, 1, 1, 1);

        horizontalSlider_1_4 = new QSlider(gridLayoutWidget);
        horizontalSlider_1_4->setObjectName(QString::fromUtf8("horizontalSlider_1_4"));
        horizontalSlider_1_4->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_1_4, 30, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 806, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        DrawButton->setText(QCoreApplication::translate("MainWindow", "Draw", nullptr));
        label1->setText(QString());
        comboBox1->setItemText(0, QCoreApplication::translate("MainWindow", "RGB", nullptr));
        comboBox1->setItemText(1, QCoreApplication::translate("MainWindow", "CMYK", nullptr));
        comboBox1->setItemText(2, QCoreApplication::translate("MainWindow", "HSV", nullptr));
        comboBox1->setItemText(3, QCoreApplication::translate("MainWindow", "HLS", nullptr));
        comboBox1->setItemText(4, QCoreApplication::translate("MainWindow", "XYZ", nullptr));
        comboBox1->setItemText(5, QCoreApplication::translate("MainWindow", "LAB", nullptr));

        label3->setText(QString());
        comboBox3->setItemText(0, QCoreApplication::translate("MainWindow", "RGB", nullptr));
        comboBox3->setItemText(1, QCoreApplication::translate("MainWindow", "CMYK", nullptr));
        comboBox3->setItemText(2, QCoreApplication::translate("MainWindow", "HSV", nullptr));
        comboBox3->setItemText(3, QCoreApplication::translate("MainWindow", "HLS", nullptr));
        comboBox3->setItemText(4, QCoreApplication::translate("MainWindow", "XYZ", nullptr));
        comboBox3->setItemText(5, QCoreApplication::translate("MainWindow", "LAB", nullptr));

        comboBox2->setItemText(0, QCoreApplication::translate("MainWindow", "RGB", nullptr));
        comboBox2->setItemText(1, QCoreApplication::translate("MainWindow", "CMYK", nullptr));
        comboBox2->setItemText(2, QCoreApplication::translate("MainWindow", "HSV", nullptr));
        comboBox2->setItemText(3, QCoreApplication::translate("MainWindow", "HLS", nullptr));
        comboBox2->setItemText(4, QCoreApplication::translate("MainWindow", "XYZ", nullptr));
        comboBox2->setItemText(5, QCoreApplication::translate("MainWindow", "LAB", nullptr));

        label2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
