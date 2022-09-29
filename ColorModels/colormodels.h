#ifndef COLORMODELS_H
#define COLORMODELS_H
#include <QVector>
#include <QDebug>
#include <math.h>
#include <QMessageBox>


class ColorModels
{

private:

    double r;
    double g;
    double b;
    double c;
    double m;
    double y;
    double k;
    float h;
    float s;
    float v;
    double h2;
    double s2;
    double l2;
    double x2;
    double y2;
    double z2;
    double delt;
    double v1;
    double v2;
    double vH;

    QVector <double> rgbVec;




public:
    ColorModels();

    void setR(double _r);
    void setG(double _r);
    void setB(double _r);
    void setRgb(double _r, double _g, double _b);

    double getR();
    double getG();
    double getB();


    void setC(double newC);
    void setM(double newM);
    void setY(double newY);
    void setK(double newK);
    double getC() const;
    double getM() const;
    double getY() const;
    double getK() const;
    void setH(float newH);
    void setS(float newS);
    void setV(float newV);
    void setDelt();
    float getH() const;
    float getS() const;
    float getV() const;
    double getDelt() const;

    void sortRgbVec();
    void rgb_hsv();
    void hsv_rgb();
    void hsv_cmyk();
    void hsv_hsl();
    void rgb_cmyk();
    void cmyk_rgb();
    void cmyk_hsv();
    void cmyk_hsl();
    void rgb_hsl();
    void hsl_rgb();
    void hsl_cmyk();
    void hsl_hsv();
    double Hue_2_RGB(double v1,double v2,double vH );
    void rgb_xyz();
    void cmyk_xyz();
    void hsv_xyz();
    void hsl_xyz();
    void xyz_rgb();
    void xyz_cmyk();
    void xyz_hsv();
    void xyz_hsl();





    double getH2() const;
    void setH2(double newH2);
    double getS2() const;
    void setS2(double newS2);
    double getL2() const;
    void setL2(double newL2);
    double getX2() const;
    void setX2(double newX2);
    double getY2() const;
    void setY2(double newY2);
    double getZ2() const;
    void setZ2(double newZ2);
    };

#endif // COLORMODELS_H
