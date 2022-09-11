#ifndef COLORMODELS_H
#define COLORMODELS_H
#include <QVector>
#include <QDebug>

class ColorModels
{

private:
    int r;
    int g;
    int b;
    double c;
    double m;
    double y;
    double k;
    double h;
    double s;
    double v;
    double delt;

    QVector <double> rgbVec;



public:
    ColorModels();

    void setR(int _r);
    void setG(int _r);
    void setB(int _r);
    void setRgb(int _r, int _g, int _b);

    int getR();
    int getG();
    int getB();


    void setC(double newC);
    void setM(double newM);
    void setY(double newY);
    void setK(double newK);
    double getC() const;
    double getM() const;
    double getY() const;
    double getK() const;
    void setH(double newH);
    void setS(double newS);
    void setV(double newV);
    void setDelt();
    double getH() const;
    double getS() const;
    double getV() const;
    double getDelt() const;

    void sortRgbVec();
    double rgb_h();
    double rgb_s();
    double rgb_v();
    void rgb_hsv();
    void hsv_rgb();
    void rgb_cmyk();
    void cmyk_rgb();
    void cmyk_hsv();
    void hsv_cmyk();

};

#endif // COLORMODELS_H
