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
    ui->horizontalSlider_1_4->setEnabled(false);
    ui->horizontalSlider_2_4->setEnabled(false);
    ui->horizontalSlider_3_4->setEnabled(false);


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

    QSlider *slider1 = new QSlider();
    QSlider *slider2 = new QSlider();
    QSlider *slider3 = new QSlider();
    QSlider *slider1_1 = new QSlider();




    if(code == 0){
        lineEdit1 = ui->lineEdit_1;
        lineEdit2 = ui->lineEdit_2;
        lineEdit3 = ui->lineEdit_3;
        lineEdit1_1 = ui->lineEdit_1_4;

        slider1 = ui->horizontalSlider_1;
        slider2 = ui->horizontalSlider_2;
        slider3 = ui->horizontalSlider_3;
        slider1_1 = ui->horizontalSlider_1_4;

    }
    else if(code == 1){
        lineEdit1 = ui->lineEdit_4;
        lineEdit2 = ui->lineEdit_5;
        lineEdit3 = ui->lineEdit_6;
        lineEdit1_1 = ui->lineEdit_2_4;

        slider1 = ui->horizontalSlider_4;
        slider2 = ui->horizontalSlider_5;
        slider3 = ui->horizontalSlider_6;
        slider1_1 = ui->horizontalSlider_2_4;

    }
    else if(code == 2){
        lineEdit1 = ui->lineEdit_7;
        lineEdit2 = ui->lineEdit_8;
        lineEdit3 = ui->lineEdit_9;
        lineEdit1_1 = ui->lineEdit_3_4;

        slider1 = ui->horizontalSlider_7;
        slider2 = ui->horizontalSlider_8;
        slider3 = ui->horizontalSlider_9;
        slider1_1 = ui->horizontalSlider_3_4;

    }

    if(index == 1){
        lineEdit1_1->setEnabled(true);
        slider1_1->setEnabled(true);
    }
    else {
            lineEdit1_1->setEnabled(false);
            slider1_1->setEnabled(false);
    }

    if(index == 0 ){





        slider1->setMinimum(0);
        slider1->setMaximum(255);
        slider2->setMinimum(0);
        slider2->setMaximum(255);
        slider3->setMinimum(0);
        slider3->setMaximum(255);

//        lineEdit1->setText(QString::number(slider1->value()));
//        lineEdit2->setText(QString::number(slider2->value()));
//        lineEdit3->setText(QString::number(slider3->value()));

        lineEdit1->setText(QString::number(colorModel->getR()));
        lineEdit2->setText(QString::number(colorModel->getG()));
        lineEdit3->setText(QString::number(colorModel->getB()));

        slider1->setValue(colorModel->getR());
        slider2->setValue(colorModel->getG());
        slider3->setValue(colorModel->getB());




    }
    if(index == 1 ){



        slider1->setMinimum(0);
        slider1->setMaximum(100);
        slider2->setMinimum(0);
        slider2->setMaximum(100);
        slider3->setMinimum(0);
        slider3->setMaximum(100);
        slider1_1->setMinimum(0);
        slider1_1->setMaximum(100);

//        lineEdit1->setText(QString::number(slider1->value()));
//        lineEdit2->setText(QString::number(slider2->value()));
//        lineEdit3->setText(QString::number(slider3->value()));
//        lineEdit1_1->setText(QString::number(slider1_1->value()));

        lineEdit1->setText(QString::number(colorModel->getC()));
        lineEdit2->setText(QString::number(colorModel->getM()));
        lineEdit3->setText(QString::number(colorModel->getY()));
        lineEdit1_1->setText(QString::number(colorModel->getK()));


        slider1->setValue(colorModel->getC());
        slider2->setValue(colorModel->getM());
        slider3->setValue(colorModel->getY());
        slider1_1->setValue(colorModel->getK());


    }
    if(index == 2 ){



        slider1->setMinimum(0);
        slider1->setMaximum(360);
        slider2->setMinimum(0);
        slider2->setMaximum(100);
        slider3->setMinimum(0);
        slider3->setMaximum(100);


        lineEdit1->setText(QString::number(colorModel->getH()));
        lineEdit2->setText(QString::number(colorModel->getS()));
        lineEdit3->setText(QString::number(colorModel->getV()));

        slider1->setValue(colorModel->getH());
        slider2->setValue(colorModel->getS());
        slider3->setValue(colorModel->getV());

    }
    if(index == 3 ){

        slider1->setMinimum(0);
        slider1->setMaximum(360);
        slider2->setMinimum(0);
        slider2->setMaximum(100);
        slider3->setMinimum(0);
        slider3->setMaximum(100);

        lineEdit1->setText(QString::number(colorModel->getH2()));
        lineEdit2->setText(QString::number(colorModel->getS2()));
        lineEdit3->setText(QString::number(colorModel->getV()));

        slider1->setValue(colorModel->getH2());
        slider2->setValue(colorModel->getS2());
        slider3->setValue(colorModel->getV());



    }
    if(index == 4 ){

        lineEdit1->setText(QString::number(colorModel->getX2()));
        lineEdit2->setText(QString::number(colorModel->getY2()));
        lineEdit3->setText(QString::number(colorModel->getZ2()));

        slider1->setValue(colorModel->getX2());
        slider2->setValue(colorModel->getY2());
        slider3->setValue(colorModel->getZ2());

    }




}


void MainWindow::on_DrawButton_clicked()
{
    *color = colorDial->getColor();
    colorModel->setRgb(color->red(),color->green(), color->blue());
    color->setRgb(colorModel->getR(),colorModel->getG(), colorModel->getB());
    brush.setColor(*color);
    repaint();

}

void MainWindow::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
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



void MainWindow::changeColor1(int index, QString args)
{
    switch(index){
    case 0:
        if(args.toDouble() < 0 || args.toDouble() > 255){
            QMessageBox::information(this,"Ууууууупс :( !Ошибка!","параметры rgb имеют диапозон от 0 до 255");
            break;
        }
        else{
    colorModel->setR(args.toDouble());
    color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    }

    case 1:
        if(args.toDouble() < 0 || args.toDouble() > 100){
            QMessageBox::information(this,"Ууууууупс :( !Ошибка!","параметры cmyk имеют диапозон от 0 до 100");
            break;

        }
        else{
        colorModel->setC((double)args.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
        }
    case 2:
        if(args.toDouble() < 0 || args.toDouble() > 360){
            QMessageBox::information(this,"Ууууууупс :( !Ошибка!","параметры hsv имеют диапозоны от (0-360, 0-100, 0-100)");
            break;

        }
        else{
        colorModel->setH((double)args.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
        }
    case 3:
        if(args.toDouble() < 0 || args.toDouble() > 360){
            QMessageBox::information(this,"Ууууууупс :( !Ошибка!","параметры hsl имеют диапозоны от (0-360, 0-100, 0-100)");
            break;

        }
        else{
        colorModel->setH2((double)args.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
        }
    case 4:
        if(args.toDouble() < 0 || args.toDouble() > 255){
            QMessageBox::information(this,"Ууууууупс :( !Ошибка!","параметры xyz имеют диапозоны от (0-360, 0-100, 0-100)");
            break;

        }
        else{
        colorModel->setX2((double)args.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
        }
    }

    brush.setColor(*color);
    repaint();
}

void MainWindow::changeColor2(int index, QString args)
{
    switch(index){
    case 0:
        if(args.toDouble() < 0 || args.toDouble() > 255){
            QMessageBox::information(this,"Ууууууупс :( !Ошибка!","параметры rgb имеют диапозон от 0 до 255");
            break;

            break;
        }
        else{
    colorModel->setG(args.toDouble());
    color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
        }
    case 1:
        if(args.toDouble() < 0 || args.toDouble() > 100){
            QMessageBox::information(this,"Ууууууупс :( !Ошибка!","параметры cmyk имеют диапозон от 0 до 100");
            break;

        }
        else{
        colorModel->setM((double)args.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
        }
    case 2:
            if(args.toDouble() < 0 || args.toDouble() > 100){
                QMessageBox::information(this,"Ууууууупс :( !Ошибка!","параметры hsv имеют диапозоны от (0-360, 0-100, 0-100)");
                break;

            }
            else{
        colorModel->setS((double)args.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
            }
    case 3:
        if(args.toDouble() < 0 || args.toDouble() > 100){
            QMessageBox::information(this,"Ууууууупс :( !Ошибка!","параметры hsl имеют диапозоны от (0-360, 0-100, 0-100)");
            break;

        }
        else{
        colorModel->setS2((double)args.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
        }
    case 4:
        if(args.toDouble() < 0 || args.toDouble() > 100){
            QMessageBox::information(this,"Ууууууупс :( !Ошибка!","параметры xyz имеют диапозоны от (0-360, 0-100, 0-100)");
            break;

        }
        else{
        colorModel->setY2((double)args.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
        }
    }

    brush.setColor(*color);
    repaint();
}

void MainWindow::changeColor3(int index, QString args)
{
    switch(index){
    case 0:
        if(args.toDouble() < 0 || args.toDouble() > 255){
            QMessageBox::information(this,"Ууууууупс :( !Ошибка!","параметры rgb имеют диапозон от 0 до 255");
            break;

        }
        else{
    colorModel->setB(args.toDouble());
    color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
        }
    case 1:
        if(args.toDouble() < 0 || args.toDouble() > 100){
            QMessageBox::information(this,"Ууууууупс :( !Ошибка!","параметры cmyk имеют диапозон от 0 до 100");
            break;

        }
        else{
        colorModel->setY((double)args.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
        }
    case 2:
        if(args.toDouble() < 0 || args.toDouble() > 100){
            QMessageBox::information(this,"Ууууууупс :( !Ошибка!","параметры hsv имеют диапозоны от (0-360, 0-100, 0-100)");
            break;

        }
        else{
        colorModel->setV((double)args.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
        }
    case 3:
        if(args.toDouble() < 0 || args.toDouble() > 100){
            QMessageBox::information(this,"Ууууууупс :( !Ошибка!","параметры hsl имеют диапозоны от (0-360, 0-100, 0-100)");
            break;

        }
        else{
        colorModel->setL2((double)args.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
        }
    case 4:
        if(args.toDouble() < 0 || args.toDouble() > 100){
            QMessageBox::information(this,"Ууууууупс :( !Ошибка!","параметры xyz имеют диапозоны от (0-360, 0-100, 0-100)");
            break;

        }
        else{
        colorModel->setZ2((double)args.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
        }
    }

    brush.setColor(*color);
    repaint();
}

void MainWindow::changeSliderColor1(int index, QString args)
{
    switch(index){
    case 0:
    colorModel->setR(args.toDouble());
    color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    case 1:
        colorModel->setC((double)args.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    case 2:
        colorModel->setH((double)args.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    case 3:
        colorModel->setH2((double)args.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    case 4:
        colorModel->setX2((double)args.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    }
    brush.setColor(*color);
    repaint();
}

void MainWindow::changeSliderColor2(int index, QString args)
{
    switch(index){
    case 0:
    colorModel->setG(args.toDouble());
    color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    case 1:
        colorModel->setM((double)args.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    case 2:
        colorModel->setS((double)args.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    case 3:
        colorModel->setS2((double)args.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    case 4:
        colorModel->setY2((double)args.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    }
    brush.setColor(*color);
    repaint();
}

void MainWindow::changeSliderColor3(int index, QString args)
{
    switch(index){
    case 0:
    colorModel->setB(args.toDouble());
    color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    case 1:
        colorModel->setY((double)args.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    case 2:
        colorModel->setV((double)args.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    case 3:
        colorModel->setL2((double)args.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    case 4:
        colorModel->setZ2((double)args.toDouble());
        color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
        break;
    }
    brush.setColor(*color);
    repaint();
}



void MainWindow::on_lineEdit_1_textChanged(const QString &arg1)
{

        changeColor1(ui->comboBox1->currentIndex(), arg1);
    //ui->horizontalSlider_1->setValue(arg1.toInt());

}


void MainWindow::on_lineEdit_2_textChanged(const QString &arg1)
{
    changeColor2(ui->comboBox1->currentIndex(), arg1);
    //ui->horizontalSlider_2->setValue(arg1.toInt());

}


void MainWindow::on_lineEdit_3_textChanged(const QString &arg1)
{
    changeColor3(ui->comboBox1->currentIndex(), arg1);
    //ui->horizontalSlider_3->setValue(arg1.toInt());

}


void MainWindow::on_lineEdit_4_textChanged(const QString &arg1)
{
    changeColor1(ui->comboBox2->currentIndex(), arg1);
    //ui->horizontalSlider_4->setValue(arg1.toInt());

}


void MainWindow::on_lineEdit_5_textChanged(const QString &arg1)
{
    changeColor2(ui->comboBox2->currentIndex(), arg1);
    //ui->horizontalSlider_5->setValue(arg1.toInt());

}


void MainWindow::on_lineEdit_6_textChanged(const QString &arg1)
{
    changeColor3(ui->comboBox2->currentIndex(), arg1);
    //ui->horizontalSlider_6->setValue(arg1.toInt());

}


void MainWindow::on_lineEdit_7_textChanged(const QString &arg1)
{
    changeColor1(ui->comboBox3->currentIndex(), arg1);
    //ui->horizontalSlider_7->setValue(arg1.toInt());

}


void MainWindow::on_lineEdit_8_textChanged(const QString &arg1)
{
    changeColor2(ui->comboBox3->currentIndex(), arg1);
    //ui->horizontalSlider_8->setValue(arg1.toInt());

}


void MainWindow::on_lineEdit_9_textChanged(const QString &arg1)
{
    changeColor3(ui->comboBox3->currentIndex(), arg1);
    //ui->horizontalSlider_9->setValue(arg1.toInt());

}


void MainWindow::on_lineEdit_1_4_textChanged(const QString &arg1)
{
    if(ui->comboBox1->currentIndex() == 1){
    ui->lineEdit_1_4->setEnabled(true);
    colorModel->setK(arg1.toDouble());
    color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());

    }
    //ui->horizontalSlider_1_4->setValue(arg1.toInt());

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
    //ui->horizontalSlider_2_4->setValue(arg1.toInt());

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
    //ui->horizontalSlider_3_4->setValue(arg1.toInt());

    brush.setColor(*color);
    repaint();
}


void MainWindow::on_horizontalSlider_1_sliderMoved(int position)
{
    if(ui->horizontalSlider_1->hasMouseTracking()){
    changeSliderColor1(ui->comboBox1->currentIndex(), QString::number(position));
    }
    ui->lineEdit_1->setText(QString::number(position));

}

void MainWindow::on_horizontalSlider_2_sliderMoved(int position)
{
    if(ui->horizontalSlider_2->hasMouseTracking())
    {
    changeSliderColor2(ui->comboBox1->currentIndex(), QString::number(position));
    }
    ui->lineEdit_2->setText(QString::number(position));


}

void MainWindow::on_horizontalSlider_3_sliderMoved(int position)
{
    if(ui->horizontalSlider_3->hasMouseTracking()){
    changeSliderColor3(ui->comboBox1->currentIndex(), QString::number(position));
    }
    ui->lineEdit_3->setText(QString::number(position));

}

void MainWindow::on_horizontalSlider_4_sliderMoved(int position)
{
    if(ui->horizontalSlider_4->hasMouseTracking()){
    changeSliderColor1(ui->comboBox2->currentIndex(), QString::number(position));
    }
    ui->lineEdit_4->setText(QString::number(position));

}

void MainWindow::on_horizontalSlider_5_sliderMoved(int position)
{
    if(ui->horizontalSlider_5->hasMouseTracking()){
    changeSliderColor2(ui->comboBox2->currentIndex(), QString::number(position));
    }
    ui->lineEdit_5->setText(QString::number(position));

}

void MainWindow::on_horizontalSlider_6_sliderMoved(int position)
{
    if(ui->horizontalSlider_6->hasMouseTracking()){
    changeSliderColor3(ui->comboBox2->currentIndex(), QString::number(position));
    }
    ui->lineEdit_6->setText(QString::number(position));

}

void MainWindow::on_horizontalSlider_7_sliderMoved(int position)
{
    if(ui->horizontalSlider_7->hasMouseTracking()){
    changeSliderColor1(ui->comboBox3->currentIndex(), QString::number(position));
    }
    ui->lineEdit_7->setText(QString::number(position));

}

void MainWindow::on_horizontalSlider_8_sliderMoved(int position)
{
    if(ui->horizontalSlider_8->hasMouseTracking()){
    changeSliderColor2(ui->comboBox3->currentIndex(), QString::number(position));
    }
    ui->lineEdit_8->setText(QString::number(position));

}

void MainWindow::on_horizontalSlider_9_sliderMoved(int position)
{
    if(ui->horizontalSlider_9->hasMouseTracking()){
    changeSliderColor3(ui->comboBox3->currentIndex(), QString::number(position));
    }
    ui->lineEdit_9->setText(QString::number(position));

}

void MainWindow::on_horizontalSlider_1_4_sliderMoved(int position)
{
    if(ui->comboBox1->currentIndex() == 1){
    ui->horizontalSlider_1_4->setEnabled(true);
    colorModel->setK(position);
    color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
    ui->lineEdit_1_4->setText(QString::number(position));
    }
    brush.setColor(*color);
    repaint();
}

void MainWindow::on_horizontalSlider_2_4_sliderMoved(int position)
{
    if(ui->comboBox2->currentIndex() == 1){
    ui->horizontalSlider_2_4->setEnabled(true);
    colorModel->setK(position);
    color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
    ui->lineEdit_2_4->setText(QString::number(position));
    }
    brush.setColor(*color);
    repaint();
}

void MainWindow::on_horizontalSlider_3_4_sliderMoved(int position)
{
    if(ui->comboBox3->currentIndex() == 1){
    ui->horizontalSlider_3_4->setEnabled(true);
    colorModel->setK(position);
    color->setRgb(colorModel->getR(),colorModel->getG(),colorModel->getB());
    ui->lineEdit_3_4->setText(QString::number(position));
    }
    brush.setColor(*color);
    repaint();

}

