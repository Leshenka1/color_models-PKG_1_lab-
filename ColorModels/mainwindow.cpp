#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <algorithm>
#include <QVector>





MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit_1_4->setEnabled(false);
    ui->lineEdit_2_4->setEnabled(false);
    ui->lineEdit_3_4->setEnabled(false);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeModel(int index, int code)
{
    //ln->clear();
    QLineEdit *lineEdit1 = new QLineEdit();
    QLineEdit *lineEdit2 = new QLineEdit();
    QLineEdit *lineEdit3 = new QLineEdit();
    QLineEdit *lineEdit1_1 = new QLineEdit();


    if(code == 0){
        lineEdit1 = ui->lineEdit_1;
        lineEdit2 = ui->lineEdit_2;
        lineEdit3 = ui->lineEdit_3;
        lineEdit1_1 = ui->lineEdit_1_4;

    }
    else if(code == 1){
        lineEdit1 = ui->lineEdit_4;
        lineEdit2 = ui->lineEdit_5;
        lineEdit3 = ui->lineEdit_6;
        lineEdit1_1 = ui->lineEdit_2_4;

    }
    else if(code == 2){
        lineEdit1 = ui->lineEdit_7;
        lineEdit2 = ui->lineEdit_8;
        lineEdit3 = ui->lineEdit_9;
        lineEdit1_1 = ui->lineEdit_3_4;

    }

    if(index == 1){
        lineEdit1_1->setEnabled(true);
    }
        else {
            lineEdit1_1->setEnabled(false);
        }

    if(index == 0 ){

        lineEdit1->setText(QString::number(colorModel->getR()));
        lineEdit2->setText(QString::number(colorModel->getG()));
        lineEdit3->setText(QString::number(colorModel->getB()));


    }
    if(index == 1 ){

        lineEdit1->setText(QString::number(colorModel->getC()));
        lineEdit2->setText(QString::number(colorModel->getM()));
        lineEdit3->setText(QString::number(colorModel->getY()));
        lineEdit1_1->setText(QString::number(colorModel->getK()));

    }
    if(index == 2 ){

        lineEdit1->setText(QString::number(colorModel->getH()));
        lineEdit2->setText(QString::number(colorModel->getS()));
        lineEdit3->setText(QString::number(colorModel->getV()));


    }




}


void MainWindow::on_DrawButton_clicked()
{
    *color = colorDial->getColor();
    colorModel->setRgb(color->red(),color->green(), color->blue());
    color->setRgb(colorModel->getR(),colorModel->getG(), colorModel->getB());
    brush.setColor(*color);
//    QVector <QLineEdit*> ln;
//    int index;
//    for(int i = 0; i < 3; i++)
//    {
//        if(i == 0)
//        {
//            ln.push_back(ui->lineEdit_1);
//            index = ui->comboBox1->currentIndex();
//        }
//        else if(i == 1)
//        {
//            ln.push_back(ui->lineEdit_4);
//            index = ui->comboBox2->currentIndex();
//        }
//        else
//        {
//            ln.push_back(ui->lineEdit_7);
//            index = ui->comboBox3->currentIndex();
//        }
        //changeModel(index, ln);
//    }
    repaint();

}

/* Метод, в котором происходит рисование
 * */
void MainWindow::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this); // Создаём объект отрисовщика
    // Устанавливаем кисть абриса
    painter.setPen(QPen(Qt::black, 1, Qt::SolidLine, Qt::FlatCap));
    brush.setStyle(Qt::SolidPattern);
    painter.setBrush(brush);
    painter.drawRect(20, 20, 150, 220);
}

void MainWindow::on_comboBox1_activated(int index)
{
    changeModel(index, 0);
}


void MainWindow::on_comboBox2_activated(int index)
{
    changeModel(index, 1);

}


void MainWindow::on_comboBox3_activated(int index)
{
    changeModel(index, 2);
}





void MainWindow::on_lineEdit_1_textChanged(const QString &arg1)
{
    switch(ui->comboBox1->currentIndex()){
    case 0:
    colorModel->setR(arg1.toDouble());
    color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    case 1:
        colorModel->setC((double)arg1.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    case 2:
        colorModel->setH((double)arg1.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    }
    brush.setColor(*color);
    repaint();

}


void MainWindow::on_lineEdit_2_textChanged(const QString &arg1)
{
    switch(ui->comboBox1->currentIndex()){
    case 0:
    colorModel->setG(arg1.toDouble());
    color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    case 1:
        colorModel->setM((double)arg1.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    case 2:
        colorModel->setS((double)arg1.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    }
    brush.setColor(*color);
    repaint();
}


void MainWindow::on_lineEdit_3_textChanged(const QString &arg1)
{
    switch(ui->comboBox1->currentIndex()){
    case 0:
    colorModel->setB(arg1.toDouble());
    color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    case 1:
        colorModel->setY((double)arg1.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    case 2:
        colorModel->setV((double)arg1.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    }
    brush.setColor(*color);
    repaint();
}


void MainWindow::on_lineEdit_4_textChanged(const QString &arg1)
{
    switch(ui->comboBox2->currentIndex()){
    case 0:
    colorModel->setR(arg1.toDouble());
    color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    case 1:
        colorModel->setC((double)arg1.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    case 2:
        colorModel->setH((double)arg1.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    }
    brush.setColor(*color);
    repaint();
}


void MainWindow::on_lineEdit_5_textChanged(const QString &arg1)
{
    switch(ui->comboBox2->currentIndex()){
    case 0:
    colorModel->setG(arg1.toDouble());
    color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    case 1:
        colorModel->setM((double)arg1.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    case 2:
        colorModel->setS((double)arg1.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    }
    brush.setColor(*color);
    repaint();
}


void MainWindow::on_lineEdit_6_textChanged(const QString &arg1)
{
    switch(ui->comboBox2->currentIndex()){
    case 0:
    colorModel->setB(arg1.toDouble());
    color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    case 1:
        colorModel->setY((double)arg1.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    case 2:
        colorModel->setV((double)arg1.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    }
    brush.setColor(*color);
    repaint();
}


void MainWindow::on_lineEdit_7_textChanged(const QString &arg1)
{
    switch(ui->comboBox3->currentIndex()){
    case 0:
    colorModel->setR(arg1.toDouble());
    color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    case 1:
        colorModel->setC((double)arg1.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    case 2:
        colorModel->setH((double)arg1.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    }
    brush.setColor(*color);
    repaint();
}


void MainWindow::on_lineEdit_8_textChanged(const QString &arg1)
{
    switch(ui->comboBox3->currentIndex()){
    case 0:
    colorModel->setG(arg1.toDouble());
    color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    case 1:
        colorModel->setM((double)arg1.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    case 2:
        colorModel->setS((double)arg1.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    }
    brush.setColor(*color);
    repaint();
}


void MainWindow::on_lineEdit_9_textChanged(const QString &arg1)
{
    switch(ui->comboBox3->currentIndex()){
    case 0:
    colorModel->setB(arg1.toDouble());
    color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    case 1:
        colorModel->setY((double)arg1.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    case 2:
        colorModel->setV((double)arg1.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    }
    brush.setColor(*color);
    repaint();
}


void MainWindow::on_lineEdit_1_4_textChanged(const QString &arg1)
{
    if(ui->comboBox1->currentIndex() == 1){
    ui->lineEdit_1_4->setEnabled(true);
    colorModel->setK(arg1.toDouble());
    color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());

    }
    brush.setColor(*color);
    repaint();
}


void MainWindow::on_lineEdit_2_4_textChanged(const QString &arg1)
{
    if(ui->comboBox2->currentIndex() == 1){
    ui->lineEdit_2_4->setEnabled(true);
    colorModel->setK(arg1.toDouble());
    color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());

    }
    brush.setColor(*color);
    repaint();
}


void MainWindow::on_lineEdit_3_4_textChanged(const QString &arg1)
{
    if(ui->comboBox3->currentIndex() == 1){
    ui->lineEdit_3_4->setEnabled(true);
    colorModel->setK(arg1.toDouble());
    color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());

    }
    brush.setColor(*color);
    repaint();
}

