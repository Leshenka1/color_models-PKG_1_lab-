#include "colormodels.h"

void ColorModels::setC(double newC)
{
    c = newC / 100.0;
    cmyk_rgb();
    cmyk_hsv();
    cmyk_hsl();
    cmyk_xyz();
}

void ColorModels::setM(double newM)
{
    m = newM / 100.0;
    cmyk_rgb();
    cmyk_hsv();
    cmyk_hsl();
    cmyk_xyz();

}

void ColorModels::setY(double newY)
{
    y = newY / 100.0;
    cmyk_rgb();
    cmyk_hsv();
    cmyk_hsl();
    cmyk_xyz();

}

void ColorModels::setK(double newK)
{
    k = newK / 100.0;
    cmyk_rgb();
    cmyk_hsv();
    cmyk_hsl();
    cmyk_xyz();

}

double ColorModels::getC() const
{
    return 100.0 * c;
}

double ColorModels::getM() const
{
    return 100.0 * m;
}

double ColorModels::getY() const
{
    return 100.0 * y;
}

double ColorModels::getK() const
{

    return 100.0 * k;
}

void ColorModels::setH(float newH)
{
    h = newH / 360.0;
    hsv_rgb();
    hsv_cmyk();
    hsv_hsl();
    hsv_xyz();
}

void ColorModels::setS(float newS)
{
    s = newS / 100.0;
    hsv_rgb();
    hsv_cmyk();
    hsv_hsl();
    hsv_xyz();

}

void ColorModels::setV(float newV)
{
    v = newV / 100.0;
    hsv_rgb();
    hsv_cmyk();
    hsv_hsl();
    hsv_xyz();

}


float ColorModels::getH() const
{
    return 360 * h;
}

float ColorModels::getS() const
{
    return 100.0 * s;
}

float ColorModels::getV() const
{
    return 100.0 * v;
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
//    setDelt();
//    if(delt == 0){
//        h = 0;
//    }
//    else if(rgbVec[2] == (double)r/255.0 && g >= b){
//        h = 60 * (((double)g/255.0 - (double)b/255.0)/delt);
//    }
//    else if(rgbVec[2] == (double)r/255.0 && g < b){
//        h = 60 * (((double)g/255.0 - (double)b/255.0)/delt) + 360;
//    }
//    else if(rgbVec[2] == (double)g/255.0){
//        h = 60 * ((((double)b/255.0 - (double)r/255.0)/delt)) + 120;
//    }
//    else if(rgbVec[2] == (double)b/255){
//        h = 60 * ((((double)r/255.0 - (double)g/255.0)/delt)) + 240;
//    }

//    if(rgbVec[2] == 0){
//        s = 0;
//    }
//    else{
//        s = delt / rgbVec[2];
//    }

//    sortRgbVec();
//    v = rgbVec[2];
    setDelt();
    double var_Max = rgbVec[2];
    double var_R = r / 255.0;
    double var_G = g / 255.0;
    double var_B = b / 255.0;
    double del_Max = delt;

    v = rgbVec[2];


    if(delt == 0){
        h = 0;
        s = 0;
    }
    else {
        s = delt / rgbVec[2];

            double del_R = ( ( ( var_Max - var_R ) / 6.0 ) + ( del_Max / 2.0 ) ) / del_Max;
            double del_G = ( ( ( var_Max - var_G ) / 6.0 ) + ( del_Max / 2.0 ) ) / del_Max;
            double del_B = ( ( ( var_Max - var_B ) / 6.0 ) + ( del_Max / 2.0 ) ) / del_Max;

            if      ( var_R == var_Max ) {
                h = del_B - del_G;
            }
            else if ( var_G == var_Max ){
                h = ( 1.0 / 3.0 ) + del_R - del_B;
            }
            else if ( var_B == var_Max ){
                h = ( 2.0 / 3.0 ) + del_G - del_R;
            }
             if ( h < 0 ) h += 1;
             if ( h > 1 ) h -= 1;
    }

}

//double var_Max = rgbVec[2];
//double var_R = r / 255.0;
//double var_G = g / 255.0;
//double var_B = b / 255.0;
//double del_Max = delt;

//if(delt == 0){
//    h = 0;
//    s = 0;
//}
//else {
//    s = delt / rgbVec[2];

//        double del_R = ( ( ( var_Max - var_R ) / 6.0 ) + ( del_Max / 2.0 ) ) / del_Max;
//        double del_G = ( ( ( var_Max - var_G ) / 6.0 ) + ( del_Max / 2.0 ) ) / del_Max;
//        double del_B = ( ( ( var_Max - var_B ) / 6.0 ) + ( del_Max / 2.0 ) ) / del_Max;

//        if      ( var_R == var_Max ) {
//            h = del_B - del_G;
//        }
//        else if ( var_G == var_Max ){
//            h = ( 1.0 / 3.0 ) + del_R - del_B;
//        }
//        else if ( var_B == var_Max ){
//            h = ( 2.0 / 3.0 ) + del_G - del_R;
//        }
//         if ( h < 0 ) h += 1;
//         if ( h > 1 ) h -= 1;
//}
//v = rgbVec[2];

void ColorModels::hsv_rgb()
{
//    qDebug() <<"rgb begin" << r << g << b;
//    qDebug() <<"hsv begin" << h << s << v;

//    double c = v * s;
//    double x =  c * (1 - abs(((int)(h/60.0))%2 - 1));
//    double m = v - c;
//    double r_ = 0;
//    double g_ = 0;
//    double b_ = 0;
//    if(h >= 0 && h < 60){
//        r_ = c;
//        g_ = x;
//        b_ = 0;
//    }
//    else if(h >= 60 && h < 120){
//        r_ = x;
//        g_ = c;
//        b_ = 0;
//    }
//    else if(h >= 120 && h < 180){
//        r_ = 0;
//        g_ = c;
//        b_ = x;
//    }
//    else if(h >= 180 && h < 240){
//        r_ = 0;
//        g_ = x;
//        b_ = c;
//    }
//    else if(h >= 240 && h < 300){
//        r_ = x;
//        g_ = 0;
//        b_ = c;
//    }
//    else if(h >= 300 && h < 360){
//        r_ = c;
//        g_ = 0;
//        b_ = x;
//    }
//    r = (r_ + m) * 255;
//    g = (g_ + m) * 255;
//    b = (b_ + m) * 255;
//    qDebug() <<"hsv end" << r << g << b;
    if ( s == 0 )
    {
       r = v * 255;
       g = v * 255;
       b = v * 255;
    }
    else
    {
       double var_h = h * 6;
       if ( var_h == 6 ){
           var_h = 0;
       }//H must be < 1
       double var_i = int( var_h );             //Or ... var_i = floor( var_h )
       double var_1 = v * ( 1 - s );
       double var_2 = v * ( 1 - s * ( var_h - var_i ) );
       double var_3 = v * ( 1 - s * ( 1 - ( var_h - var_i ) ) );

       double var_r;
       double var_g;
       double var_b ;
       if      ( var_i == 0 ) {
           var_r = v;
           var_g = var_3;
           var_b = var_1;
       }
       else if ( var_i == 1 ) {
           var_r = var_2;
           var_g = v;
           var_b = var_1;
       }
       else if ( var_i == 2 ) {
           var_r = var_1;
           var_g = v;
           var_b = var_3;
       }
       else if ( var_i == 3 ) {
           var_r = var_1;
           var_g = var_2;
           var_b = v;
       }
       else if ( var_i == 4 ) {
           var_r = var_3;
           var_g = var_1;
           var_b = v;
       }
       else{
           var_r = v;
           var_g = var_1;
           var_b = var_2;
       }

       r = var_r * 255;
       g = var_g * 255;
       b = var_b * 255;
    }
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

void ColorModels::cmyk_hsl()
{
    cmyk_rgb();
    rgb_hsl();
}

void ColorModels::hsv_cmyk()
{
    hsv_rgb();
    rgb_cmyk();
}

void ColorModels::hsv_hsl()
{
    hsv_rgb();
    rgb_hsl();
}

void ColorModels::hsl_rgb()
{

    qDebug() <<"hsl begin" << r << g << b;

    if ( s2 == 0 )
    {

       r = l2 * 255.0;
       g = l2 * 255.0;
       b = l2 * 255.0;
    }
    else
    {
       double var_2;
       if ( l2 < 0.5 ) {
           var_2 = l2 * ( 1 + s2 );
       }
       else{
           var_2 = ( l2 + s2 ) - ( s2 * l2 );
               }

       double var_1 = 2.0 * l2 - var_2;

//       double v1 = var_1;
//       double v2 = var_2;
//       double vH = h2 + 0.33333;
//       if ( vH < 0 ){
//           vH += 1;
//       }
//       if( vH > 1 ){
//           vH -= 1;
//       }
//       if ( ( 6 * vH ) < 1 ){
//           r = 255 * ( v1 + ( v2 - v1 ) * 6 * vH );
//       }
//       else if ( ( 2 * vH ) < 1 ){
//           r = 255 * ( v2 );
//       }
//       else if ( ( 3 * vH ) < 2 ){
//           r = 255 * ( v1 + ( v2 - v1 ) * ( ( 2.0 / 3.0 ) - vH ) * 6 );
//       }
//       else{
//           r = 255 * ( v1 );
//       }


//       vH = h2;
//       if ( vH < 0 ){
//           vH += 1;
//       }
//       if( vH > 1 ){
//           vH -= 1;
//       }
//       if ( ( 6 * vH ) < 1 ){
//           g = 255 * ( v1 + ( v2 - v1 ) * 6 * vH );
//       }
//       else if ( ( 2 * vH ) < 1 ){
//           g = 255 * ( v2 );
//       }
//       else if ( ( 3 * vH ) < 2 ){
//           g = 255 * ( v1 + ( v2 - v1 ) * ( ( 2.0 / 3.0 ) - vH ) * 6 );
//       }
//       else{
//           g = 255 * ( v1 );
//       }


//       vH = h2 - 0.33333;
//       if ( vH < 0 ){
//           vH += 1;
//       }
//       if( vH > 1 ){
//           vH -= 1;
//       }
//       if ( ( 6 * vH ) < 1 ){
//           b = 255 * ( v1 + ( v2 - v1 ) * 6 * vH );
//           qDebug() <<"1";
//       }
//       else if ( ( 2 * vH ) < 1 ){
//           b = 255 * ( v2 );
//           qDebug() <<"2";

//       }
//       else if ( ( 3 * vH ) < 2 ){
//           b = 255 * ( v1 + ( v2 - v1 ) * ( ( 2.0 / 3.0 ) - vH ) * 6 );
//           qDebug() <<"3";

//       }
//       else{
//           b = 255 * ( v1 );
//           qDebug() <<"4";

//       }
       qDebug() <<"hsl end" << r << g << b;


      r = 255.0 * (Hue_2_RGB( var_1, var_2, (double)h2 + 0.33333 ));
      g = 255.0 * (Hue_2_RGB( var_1, var_2, (double)h2 ));
      b = 255.0 * (Hue_2_RGB( var_1, var_2, (double)h2 - 0.33333 ));

    }
    if(r > 255.0) r = 255.0;
    if(g > 255.0) g = 255.0;
    if(b > 255.0) b = 255.0;
    qDebug() <<"hsl end" << r << g << b;

}

double ColorModels::Hue_2_RGB(double v1, double v2,double vH )
{
   if ( vH < 0.0 ){
       vH += 1.0;
   }
   if( vH > 1.0 ){
       vH -= 1.0;
   }
   if ( ( 6.0 * vH ) < 1.0 ){
       return ( v1 + ( v2 - v1 ) * 6.0 * vH );
                  qDebug() <<"1";

   }
   if ( ( 2.0 * vH ) < 1.0 ){
       return ( v2 );
       qDebug() <<"2";

   }
   if ( ( 3.0 * vH ) < 2.0 ){
       return ( v1 + ( v2 - v1 ) * ( ( 2.0 / 3.0 ) - vH ) * 6.0 );
       qDebug() <<"3";

   }
   qDebug() <<"4";

   return ( v1 );

}

void ColorModels::rgb_hsl()
{
    setDelt();
    double var_R = ( r / 255.0 );
    double var_G = ( g / 255.0 );
    double var_B = ( b / 255.0 );

    l2 = (double)( rgbVec[0] + rgbVec[2])* 0.5;

    if ( delt == 0 )                     //This is a gray, no chroma...
    {
        h2 = 0.0;
        s2 = 0.0;
    }
    else                                    //Chromatic data...
    {
       if ( l2 < 0.5 ) {
           s2 = delt / ( rgbVec[0] + rgbVec[2] );
       }
       else{
           s2 = delt / ( 2.0 - rgbVec[2] - rgbVec[0] );
       }

       double del_R = ( ( ( rgbVec[2] - var_R ) / 6.0 ) + ( delt / 2.0 ) ) / delt;
       double del_G = ( ( ( rgbVec[2] - var_G ) / 6.0 ) + ( delt / 2.0 ) ) / delt;
       double del_B = ( ( ( rgbVec[2] - var_B ) / 6.0 ) + ( delt / 2.0 ) ) / delt;

       if( var_R == rgbVec[2] ) {
           h2 = del_B - del_G;
       }
       else if( var_G == rgbVec[2] ) {
           h2 = ( 1.0 / 3.0 ) + del_R - del_B;
       }
       else if( var_B == rgbVec[2] ) {
           h2 = ( 2.0 / 3.0 ) + del_G - del_R;
       }

       if ( h2 < 0 ) {
            h2 += 1;
       }
       if ( h2 > 1 ) {
            h2 -= 1;
       }
    }

}

void ColorModels::hsl_cmyk()
{
    hsl_rgb();
    rgb_cmyk();
}

void ColorModels::hsl_hsv()
{
    hsl_rgb();
    rgb_hsv();
}

void ColorModels::rgb_xyz()
{
    double var_R = ( getR() / 255.0 );
    double var_G = ( getB() / 255.0 );
    double var_B = ( getG() / 255.0 );

    if ( var_R > 0.04045 ) {
        var_R = pow(( ( var_R + 0.055 ) / 1.055 ), 2.4);
    }
    else{
        var_R = var_R / 12.92;
    }
    if ( var_G > 0.04045 ){
        var_G = pow(( ( var_G + 0.055 ) / 1.055 ) , 2.4);
    }
    else{
            var_G = var_G / 12.92;
        }
    if ( var_B > 0.04045 ) {
        var_B = pow(( ( var_B + 0.055 ) / 1.055 ) , 2.4);
    }
    else{
        var_B = var_B / 12.92;
    }

    var_R = var_R * 100.0;
    var_G = var_G * 100.0;
    var_B = var_B * 100.0;

    x2 = var_R * 0.4124 + var_G * 0.3576 + var_B * 0.1805;
    y2 = var_R * 0.2126 + var_G * 0.7152 + var_B * 0.0722;
    z2 = var_R * 0.0193 + var_G * 0.1192 + var_B * 0.9505;

}

void ColorModels::cmyk_xyz()
{
    cmyk_rgb();
    rgb_xyz();
}

void ColorModels::hsv_xyz()
{
    hsv_rgb();
    rgb_xyz();
}

void ColorModels::hsl_xyz()
{
    hsl_rgb();
    rgb_xyz();
}

void ColorModels::xyz_rgb()
{
    double var_X = x2 / 100.0;
    double var_Y = y2 / 100.0;
    double var_Z = z2 / 100.0;

    double var_R = var_X *  3.2406 + var_Y * -1.5372 + var_Z * -0.4986;
    double var_G = var_X * -0.9689 + var_Y *  1.8758 + var_Z *  0.0415;
    double var_B = var_X *  0.0557 + var_Y * -0.2040 + var_Z *  1.0570;

    if ( var_R > 0.0031308 ) {
        var_R = 1.055 * ( pow(var_R , ( 1.0 / 2.4 )) ) - 0.055;
    }
    else{
        var_R = 12.92 * var_R;
    }
    if ( var_G > 0.0031308 ) {
        var_G = 1.055 * ( pow(var_G , ( 1.0 / 2.4 )) ) - 0.055;
    }
    else{
        var_G = 12.92 * var_G;
    }
    if ( var_B > 0.0031308 ) {
        var_B = 1.055 * ( pow(var_B , ( 1.0 / 2.4 )) ) - 0.055;
    }
    else{
        var_B = 12.92 * var_B;
    }

    r = var_R * 255.0;
    g = var_G * 255.0;
    b = var_B * 255.0;
}

void ColorModels::xyz_cmyk()
{
    xyz_rgb();
    rgb_cmyk();
}

void ColorModels::xyz_hsv()
{
    xyz_rgb();
    rgb_hsv();
}

void ColorModels::xyz_hsl()
{
    xyz_rgb();
    rgb_hsl();
}

double ColorModels::getH2() const
{
    return 360.0 * h2;
}

void ColorModels::setH2(double newH2)
{
    h2 = newH2 / 360.0;
    hsl_rgb();
    hsl_cmyk();
    hsl_hsv();
    hsl_xyz();
}

double ColorModels::getS2() const
{
    return 100.0 * s2;
}

void ColorModels::setS2(double newS2)
{
    s2 = newS2 / 100.0;
    hsl_rgb();
    hsl_cmyk();
    hsl_hsv();
    hsl_xyz();

}

double ColorModels::getL2() const
{
    return 100.0 * l2;

}

void ColorModels::setL2(double newL2)
{
    l2 = newL2 / 100.0;
    hsl_rgb();
    hsl_cmyk();
    hsl_hsv();
    hsl_xyz();

}

double ColorModels::getX2() const
{
    return x2;
}

void ColorModels::setX2(double newX2)
{
    x2 = newX2;
    xyz_rgb();
    xyz_cmyk();
    xyz_hsv();
    xyz_hsl();
}

double ColorModels::getY2() const
{
    return y2;
}

void ColorModels::setY2(double newY2)
{
    y2 = newY2;
    xyz_rgb();
    xyz_cmyk();
    xyz_hsv();
    xyz_hsl();
}

double ColorModels::getZ2() const
{
    return z2;
}

void ColorModels::setZ2(double newZ2)
{
    z2 = newZ2;
    xyz_rgb();
    xyz_cmyk();
    xyz_hsv();
    xyz_hsl();
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

void ColorModels::setR(double _r)
{   
    if(_r < 0 || _r > 255)
    {
        //QMessageBox::information(this,"Ошибка","Диаметр внутренней окружности должен быть меньше внешней");
        return;
    }
    r = _r;

    rgb_cmyk();
    rgb_hsv();
    rgb_hsl();
    rgb_xyz();


}

void ColorModels::setG(double _g)
{
    g = _g;


    rgb_cmyk();
    rgb_hsv();
    rgb_hsl();
    rgb_xyz();

}

void ColorModels::setB(double _b)
{
    b = _b;

    rgb_cmyk();
    rgb_hsv();
    rgb_hsl();
    rgb_xyz();
}

void ColorModels::setRgb(double _r, double _g, double _b)
{
    setR(_r);
    setG(_g);
    setB(_b);
}

double ColorModels::getR()
{
    return (int)r;
}

double ColorModels::getG()
{
    return (int)g;
}

double ColorModels::getB()
{
    return (int)b;
}
