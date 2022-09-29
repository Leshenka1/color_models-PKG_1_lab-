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
#include <QSlider>
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
    void changeColor1(int index, QString args);
    void changeColor2(int index, QString args);
    void changeColor3(int index, QString args);
    void changeSliderColor1(int index, QString args);
    void changeSliderColor2(int index, QString args);
    void changeSliderColor3(int index, QString args);


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
    void on_horizontalSlider_1_sliderMoved(int position);
    void on_horizontalSlider_2_sliderMoved(int position);
    void on_horizontalSlider_3_sliderMoved(int position);
    void on_horizontalSlider_4_sliderMoved(int position);
    void on_horizontalSlider_5_sliderMoved(int position);
    void on_horizontalSlider_6_sliderMoved(int position);
    void on_horizontalSlider_7_sliderMoved(int position);
    void on_horizontalSlider_8_sliderMoved(int position);
    void on_horizontalSlider_9_sliderMoved(int position);
    void on_horizontalSlider_1_4_sliderMoved(int position);
    void on_horizontalSlider_2_4_sliderMoved(int position);
    void on_horizontalSlider_3_4_sliderMoved(int position);

};
#endif // MAINWINDOW_H
