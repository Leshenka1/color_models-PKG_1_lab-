#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QColorDialog>
#include <QString>
#include <QDebug>
#include <QLabel>
#include <QLineEdit>
#include <QColor>
#include "colormodels.h"



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void changeModel(int index, int code);


private:
    Ui::MainWindow *ui;
    QBrush brush;
    QColorDialog *colorDial= new QColorDialog;
    QColor *color = new QColor;
    ColorModels *colorModel = new ColorModels;



protected:
    /* Определяем виртуальный метод родительского класса
     * для отрисовки содержимого виджета
     * */
    void paintEvent(QPaintEvent *event);

private slots:
    void on_DrawButton_clicked();


    void on_comboBox1_activated(int index);
    void on_comboBox2_activated(int index);
    void on_comboBox3_activated(int index);

    void on_lineEdit_1_textChanged(const QString &arg1);
    void on_lineEdit_2_textChanged(const QString &arg1);
    void on_lineEdit_3_textChanged(const QString &arg1);
    void on_lineEdit_4_textChanged(const QString &arg1);
    void on_lineEdit_5_textChanged(const QString &arg1);
    void on_lineEdit_6_textChanged(const QString &arg1);
    void on_lineEdit_7_textChanged(const QString &arg1);
    void on_lineEdit_8_textChanged(const QString &arg1);
    void on_lineEdit_9_textChanged(const QString &arg1);
    void on_lineEdit_1_4_textChanged(const QString &arg1);
    void on_lineEdit_2_4_textChanged(const QString &arg1);
    void on_lineEdit_3_4_textChanged(const QString &arg1);
};
#endif // MAINWINDOW_H
