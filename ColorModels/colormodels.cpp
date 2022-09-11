
#include "colormodels.h"

void ColorModels::setC(double newC)
{
    c = newC;
    cmyk_rgb();
    cmyk_hsv();
}

void ColorModels::setM(double newM)
{
    m = newM;
    cmyk_rgb();
    cmyk_hsv();

}

void ColorModels::setY(double newY)
{
    y = newY;
    cmyk_rgb();
    cmyk_hsv();

}

void ColorModels::setK(double newK)
{
    k = newK;
    cmyk_rgb();
    cmyk_hsv();

}

double ColorModels::getC() const
{
    return c;
}

double ColorModels::getM() const
{
    return m;
}

double ColorModels::getY() const
{
    return y;
}

double ColorModels::getK() const
{

    return k;
}

void ColorModels::setH(double newH)
{
    h = newH;
    hsv_rgb();
    hsv_cmyk();
}

void ColorModels::setS(double newS)
{
    s = newS;
    hsv_rgb();
    hsv_cmyk();

}

void ColorModels::setV(double newV)
{
    v = newV;
    hsv_rgb();
    hsv_cmyk();

}


double ColorModels::getH() const
{
    return h;
}

double ColorModels::getS() const
{
    return s;
}

double ColorModels::getV() const
{
    return v;
}

double ColorModels::getDelt() const
{
    return delt;
}

void ColorModels::sortRgbVec()
{
    rgbVec ={(double)r/255, (double)g/255, (double)b/255};
    std::sort(rgbVec.begin(),rgbVec.end());
}

void ColorModels::setDelt()
{
    sortRgbVec();
    delt = rgbVec[2] - rgbVec[0];
}

void ColorModels::rgb_hsv()
{
    //setDelt();
    rgbVec ={(double)r/255, (double)g/255, (double)b/255};
    std::sort(rgbVec.begin(),rgbVec.end());
    delt = rgbVec[2] - rgbVec[0];

    if(delt == 0){
        h = 0;
    }
    else if(rgbVec[2] == (double)r/255 && g >= b){
        h = 60 * (((double)g/255 - (double)b/255)/delt);
    }
    else if(rgbVec[2] == (double)r/255 && g < b){
        h = 60 * (((double)g/255 - (double)b/255)/delt) + 360;
    }
    else if(rgbVec[2] == (double)g/255){
        h = 60 * ((((double)b/255 - (double)r/255)/delt)) + 120;
    }
    else if(rgbVec[2] == (double)b/255){
        h = 60 * ((((double)r/255 - (double)g/255)/delt)) + 240;
    }

    if(rgbVec[2] == 0){
        s = 0;
    }
    else{
        s = delt / rgbVec[2];
    }

    sortRgbVec();
    v = rgbVec[2];
}

void ColorModels::hsv_rgb()
{
    double c = v * s;
    double x =  c * (1 - abs((int)(h/60)%2 - 1));
    double m = v - c;
    //qDebug() << m;
    double r_ = 0;
    double g_ = 0;
    double b_ = 0;
    if(h >= 0 && h < 60){
        r_ = c;
        g_ = x;
        b_ = 0;
    }
    else if(h >= 60 && h < 120){
        r_ = x;
        g_ = c;
        b_ = 0;
    }
    else if(h >= 120 && h < 180){
        r_ = 0;
        g_ = c;
        b_ = x;
    }
    else if(h >= 180 && h < 240){
        r_ = 0;
        g_ = x;
        b_ = c;
    }
    else if(h >= 240 && h < 300){
        r_ = x;
        g_ = 0;
        b_ = c;
    }
    else if(h >= 300 && h < 360){
        r_ = c;
        g_ = 0;
        b_ = x;
    }
    r = (r_ + m) * 255;
    g = (g_ + m) * 255;
    b = (b_ + m) * 255;
}

void ColorModels::rgb_cmyk()
{
    QVector <double> rgb ={1.0 - ((double)r / 255.0),1.0 - ((double)g / 255.0),
                           1.0 - ((double)b / 255.0)};
    std::sort(rgb.begin(),rgb.end());

    k = rgb[0];
    if(rgb[0] != 1){
        c = (1.0 - ((double)r / 255.0) - getK()) / (1 - getK());
        m = (1.0 - ((double)g / 255.0) - getK()) / (1 - getK());
        y = (1.0 - ((double)b / 255.0) - getK()) / (1 - getK());
    }
    else{
        c = 1;
        m = 1;
        y = 1;
    }
}

void ColorModels::cmyk_rgb()
{
    r = (255*(1-c)*(1 - k));
    g = (255*(1-m)*(1 - k));
    b = (255*(1-y)*(1 - k));



}

void ColorModels::cmyk_hsv()
{
    cmyk_rgb();
    rgb_hsv();

}

void ColorModels::hsv_cmyk()
{
    hsv_rgb();
    rgb_cmyk();
}

ColorModels::ColorModels()
{
    sortRgbVec();
    setR(0);
    setG(0);
    setB(0);
//    setC(1);
//    setM(1);
//    setY(1);
//    setK(1);
//    setH(0);
//    setS(0);
//    setV(0);


}

void ColorModels::setR(int _r)
{    
    r = _r;

    rgb_cmyk();
    rgb_hsv();


}

void ColorModels::setG(int _g)
{
    g = _g;


    rgb_cmyk();
    rgb_hsv();

}

void ColorModels::setB(int _b)
{
    b = _b;

    rgb_cmyk();
    rgb_hsv();
}

void ColorModels::setRgb(int _r, int _g, int _b)
{
    setR(_r);
    setG(_g);
    setB(_b);
}

int ColorModels::getR()
{
    return r;
}

int ColorModels::getG()
{
    return g;
}

int ColorModels::getB()
{
    return b;
}
