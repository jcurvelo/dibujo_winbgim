#include <graphics.h>
#include <math.h>
#include <vector>
#include <iostream>
using namespace std;
#define PI 3.14159265
#include "customLibrary.cpp"


#include "liesa/details.cpp" 
#include "liesa/fs1.cpp" 
#include "liesa/fs2.cpp" 
#include "liesa/fs3.cpp" 
#include "liesa/Hair.cpp" 
#include "liesa/hand1.cpp" 
#include "liesa/hand2.cpp" 
#include "liesa/hand3.cpp" 
#include "liesa/hand4.cpp" 
#include "liesa/hand5.cpp" 
#include "liesa/hand6.cpp" 
#include "liesa/hb_1.cpp" 
#include "liesa/hb_2.cpp" 
#include "liesa/hb_3.cpp" 
#include "liesa/hb_4.cpp" 
#include "liesa/hb_5.cpp" 
#include "liesa/hb_6.cpp" 
#include "liesa/hb_7.cpp" 
#include "liesa/hb_8.cpp" 
#include "liesa/hb_9.cpp" 
#include "liesa/lance1.cpp" 
#include "liesa/lance2.cpp" 
#include "liesa/lance3.cpp" 
#include "liesa/lance4.cpp" 
#include "liesa/lance5.cpp" 
#include "liesa/lance6.cpp" 
#include "liesa/l_eye.cpp" 
#include "liesa/l_eyebrow.cpp" 
#include "liesa/l_eyelid.cpp" 
#include "liesa/m_p1.cpp" 
#include "liesa/m_p2.cpp" 
#include "liesa/m_p3.cpp" 
#include "liesa/m_p4.cpp" 
#include "liesa/staff1.cpp" 
#include "liesa/staff2.cpp" 
#include "liesa/staff3.cpp" 
#include "liesa/staff4.cpp" 
#include "liesa/staff5.cpp" 
#include "liesa/staff6.cpp"


// No está terminado porque llevaba demasiados detalles y no medi correctamente la
// cantidad de tiempo que me tomaría hacerlo, por lo que aun es un WIP


CustomLibrary cl = CustomLibrary();

void hair(){
    for (int i = 0; i < HairLength; i++)
    {
        putpixel(Hair[i][0], Hair[i][1], WHITE);
    }
}

void detail(){
    for (int i = 0; i < detailsLength; i++)
    {
        putpixel(details[i][0], details[i][1], WHITE);
    }
}

void faceWithPixel(){
    for (int i = 0; i < fs1Length; i++){
        putpixel(fs1[i][0], fs1[i][1], WHITE);
    }

    for (int i = 0; i < fs2Length; i++){
        putpixel(fs2[i][0], fs2[i][1], WHITE);
    }

    for (int i = 0; i < fs3Length; i++){
        putpixel(fs3[i][0], fs3[i][1], WHITE);
    }
}

void leftEyeWithPixel(){
    for (int i = 0; i < l_eyeLength; i++){
        putpixel(l_eye[i][0], l_eye[i][1], WHITE);
    }

    for (int i = 0; i < l_eyebrowLength; i++){
        putpixel(l_eyebrow[i][0], l_eyebrow[i][1], WHITE);
    }

    for (int i = 0; i < l_eyelidLength; i++){
        putpixel(l_eyelid[i][0], l_eyelid[i][1], WHITE);
    }
}

void mouthWithPixel(){
    for (int i = 0; i < m_p1Length; i++){
        putpixel(m_p1[i][0], m_p1[i][1], WHITE);
    }

    for (int i = 0; i < m_p2Length; i++){
        putpixel(m_p2[i][0], m_p2[i][1], WHITE);
    }

    for (int i = 0; i < m_p3Length; i++){
        putpixel(m_p3[i][0], m_p3[i][1], WHITE);
    }

    for (int i = 0; i < m_p4Length; i++){
        putpixel(m_p4[i][0], m_p4[i][1], WHITE);
    }
}

void lance(){
    for (int i = 0; i < lance1Length; i++){
        putpixel(lance1[i][0], lance1[i][1], WHITE);
    }
    for (int i = 0; i < lance2Length; i++){
        putpixel(lance2[i][0], lance2[i][1], WHITE);
    }
    for (int i = 0; i < lance3Length; i++){
        putpixel(lance3[i][0], lance3[i][1], WHITE);
    }
    for (int i = 0; i < lance4Length; i++){
        putpixel(lance4[i][0], lance4[i][1], WHITE);
    }
    for (int i = 0; i < lance5Length; i++){
        putpixel(lance5[i][0], lance5[i][1], WHITE);
    }
    for (int i = 0; i < lance6Length; i++){
        putpixel(lance6[i][0], lance6[i][1], WHITE);
    }
}

void headbandWithPixel(){
    for (int i = 0; i < hb_1Length; i++){
        putpixel(hb_1[i][0], hb_1[i][1], WHITE);
    }

    for (int i = 0; i < hb_2Length; i++){
        putpixel(hb_2[i][0], hb_2[i][1], WHITE);
    }

    for (int i = 0; i < hb_3Length; i++){
        putpixel(hb_3[i][0], hb_3[i][1], WHITE);
    }

    for (int i = 0; i < hb_4Length; i++){
        putpixel(hb_4[i][0], hb_4[i][1], WHITE);
    }

    for (int i = 0; i < hb_5Length; i++){
        putpixel(hb_5[i][0], hb_5[i][1], WHITE);
    }

    for (int i = 0; i < hb_6Length; i++){
        putpixel(hb_6[i][0], hb_6[i][1], WHITE);
    }

    for (int i = 0; i < hb_7Length; i++){
        putpixel(hb_7[i][0], hb_7[i][1], WHITE);
    }

    for (int i = 0; i < hb_8Length; i++){
        putpixel(hb_8[i][0], hb_8[i][1], WHITE);
    }

    for (int i = 0; i < hb_9Length; i++){
        putpixel(hb_9[i][0], hb_9[i][1], WHITE);
    }
}

void staff(){
    for (int i = 0; i < staff1Length; i++){
        putpixel(staff1[i][0], staff1[i][1], WHITE);
    }
    for (int i = 0; i < staff2Length; i++){
        putpixel(staff2[i][0], staff2[i][1], WHITE);
    }
    for (int i = 0; i < staff3Length; i++){
        putpixel(staff3[i][0], staff3[i][1], WHITE);
    }
    for (int i = 0; i < staff4Length; i++){
        putpixel(staff4[i][0], staff4[i][1], WHITE);
    }
    for (int i = 0; i < staff5Length; i++){
        putpixel(staff5[i][0], staff5[i][1], WHITE);
    }
    for (int i = 0; i < staff6Length; i++){
        putpixel(staff6[i][0], staff6[i][1], WHITE);
    }
}

void hand(){
    for (int i = 0; i < hand1Length; i++){
        putpixel(hand1[i][0], hand1[i][1], WHITE);
    }
    for (int i = 0; i < hand2Length; i++){
        putpixel(hand2[i][0], hand2[i][1], WHITE);
    }
    for (int i = 0; i < hand3Length; i++){
        putpixel(hand3[i][0], hand3[i][1], WHITE);
    }
    for (int i = 0; i < hand4Length; i++){
        putpixel(hand4[i][0], hand4[i][1], WHITE);
    }
    for (int i = 0; i < hand5Length; i++){
        putpixel(hand5[i][0], hand5[i][1], WHITE);
    }
    for (int i = 0; i < hand6Length; i++){
        putpixel(hand6[i][0], hand6[i][1], WHITE);
    }
}

void drawMatrix(float matrix[5000][2]){

    cout << "rows: " << sizeof(matrix) / sizeof(matrix[0]) << endl;

    // int length = sizeof(Face1) / sizeof(Face1[0]);
    // cout << "length" << length << endl;
    // for (int i = 0; i < length; i++)
    // {
    //     if(Face1[i][0] == 0 && Face1[i][1] == 0){
    //         break;
    //     }
    //     cout << Face1[i][0] << " " << Face1[i][1] << endl;
    //     if (i + 1 < length)
    //     {
    //         cl.Linea(Face1[i][0], Face1[i][1], Face1[i + 1][0], Face1[i + 1][1], WHITE);
    //     }
    // }
}
void face(){
    for (int i = 0; i < fs1Length; i++){
        if(fs1[i][0] == 0 && fs1[i][1] == 0){
            break;
        }
        if (i + 1 < fs1Length)
        {
            cl.Linea(fs1[i][0], fs1[i][1], fs1[i + 1][0], fs1[i + 1][1], WHITE);
        }
    }

    for (int i = 0; i < fs2Length; i++){
        if(fs2[i][0] == 0 && fs2[i][1] == 0){
            break;
        }
        if (i + 1 < fs2Length)
        {
            cl.Linea(fs2[i][0], fs2[i][1], fs2[i + 1][0], fs2[i + 1][1], WHITE);
        }
    }

    for (int i = 0; i < fs3Length; i++){
        if(fs3[i][0] == 0 && fs3[i][1] == 0){
            break;
        }
        if (i + 1 < fs3Length)
        {
            cl.Linea(fs3[i][0], fs3[i][1], fs3[i + 1][0], fs3[i + 1][1], WHITE);
        }
    }
};

void leftEye(){
    for (int i = 0; i < l_eyeLength; i++){
        if(l_eye[i][0] == 0 && l_eye[i][1] == 0){
            break;
        }
        if (i + 1 < l_eyeLength)
        {
            cl.Linea(l_eye[i][0], l_eye[i][1], l_eye[i + 1][0], l_eye[i + 1][1], WHITE);
        }
    }
    for (int i = 0; i < l_eyebrowLength; i++){
        if(l_eyebrow[i][0] == 0 && l_eyebrow[i][1] == 0){
            break;
        }
        if (i + 1 < l_eyebrowLength)
        {
            cl.Linea(l_eyebrow[i][0], l_eyebrow[i][1], l_eyebrow[i + 1][0], l_eyebrow[i + 1][1], WHITE);
        }
    }
    for (int i = 0; i < l_eyelidLength; i++){
        if(l_eyelid[i][0] == 0 && l_eyelid[i][1] == 0){
            break;
        }
        if (i + 1 < l_eyelidLength)
        {
            cl.Linea(l_eyelid[i][0], l_eyelid[i][1], l_eyelid[i + 1][0], l_eyelid[i + 1][1], WHITE);
        }
    }
};

void mouth(){
    for (int i = 0; i < m_p1Length; i++){
        if(m_p1[i][0] == 0 && m_p1[i][1] == 0){
            break;
        }
        if (i + 1 < m_p1Length)
        {
            cl.Linea(m_p1[i][0], m_p1[i][1], m_p1[i + 1][0], m_p1[i + 1][1], WHITE);
        }
    }

    for (int i = 0; i < m_p2Length; i++){
        if(m_p2[i][0] == 0 && m_p2[i][1] == 0){
            break;
        }
        if (i + 1 < m_p2Length)
        {
            cl.Linea(m_p2[i][0], m_p2[i][1], m_p2[i + 1][0], m_p2[i + 1][1], WHITE);
        }
    }

    for (int i = 0; i < m_p3Length; i++){
        if(m_p3[i][0] == 0 && m_p3[i][1] == 0){
            break;
        }
        if (i + 1 < m_p3Length)
        {
            cl.Linea(m_p3[i][0], m_p3[i][1], m_p3[i + 1][0], m_p3[i + 1][1], WHITE);
        }
    }
}

void headband(){
    for (int i=0; i<hb_1Length; i++){
        if(hb_1[i][0] == 0 && hb_1[i][1] == 0){
            break;
        }
        if (i + 1 < hb_1Length)
        {
            cl.Linea(hb_1[i][0], hb_1[i][1], hb_1[i + 1][0], hb_1[i + 1][1], WHITE);
        }
    }

    for (int i=0; i<hb_2Length; i++){
        if(hb_2[i][0] == 0 && hb_2[i][1] == 0){
            break;
        }
        if (i + 1 < hb_2Length)
        {
            cl.Linea(hb_2[i][0], hb_2[i][1], hb_2[i + 1][0], hb_2[i + 1][1], WHITE);
        }
    }

    for (int i=0; i<hb_3Length; i++){
        if(hb_3[i][0] == 0 && hb_3[i][1] == 0){
            break;
        }
        if (i + 1 < hb_3Length)
        {
            cl.Linea(hb_3[i][0], hb_3[i][1], hb_3[i + 1][0], hb_3[i + 1][1], WHITE);
        }
    }

    for (int i=0; i<hb_4Length; i++){
        if(hb_4[i][0] == 0 && hb_4[i][1] == 0){
            break;
        }
        if (i + 1 < hb_4Length)
        {
            cl.Linea(hb_4[i][0], hb_4[i][1], hb_4[i + 1][0], hb_4[i + 1][1], WHITE);
        }
    }

    for (int i=0; i<hb_5Length; i++){
        if(hb_5[i][0] == 0 && hb_5[i][1] == 0){
            break;
        }
        if (i + 1 < hb_5Length)
        {
            cl.Linea(hb_5[i][0], hb_5[i][1], hb_5[i + 1][0], hb_5[i + 1][1], WHITE);
        }
    }

    for (int i=0; i<hb_6Length; i++){
        if(hb_6[i][0] == 0 && hb_6[i][1] == 0){
            break;
        }
        if (i + 1 < hb_6Length)
        {
            cl.Linea(hb_6[i][0], hb_6[i][1], hb_6[i + 1][0], hb_6[i + 1][1], WHITE);
        }
    }

    for (int i=0; i<hb_7Length; i++){
        if(hb_7[i][0] == 0 && hb_7[i][1] == 0){
            break;
        }
        if (i + 1 < hb_7Length)
        {
            cl.Linea(hb_7[i][0], hb_7[i][1], hb_7[i + 1][0], hb_7[i + 1][1], WHITE);
        }
    }

    for (int i=0; i<hb_8Length; i++){
        if(hb_8[i][0] == 0 && hb_8[i][1] == 0){
            break;
        }
        if (i + 1 < hb_8Length)
        {
            cl.Linea(hb_8[i][0], hb_8[i][1], hb_8[i + 1][0], hb_8[i + 1][1], WHITE);
        }
    }

    for (int i=0; i<hb_9Length; i++){
        if(hb_9[i][0] == 0 && hb_9[i][1] == 0){
            break;
        }
        if (i + 1 < hb_9Length)
        {
            cl.Linea(hb_9[i][0], hb_9[i][1], hb_9[i + 1][0], hb_9[i + 1][1], WHITE);
        }
    }
}

void Liesa(){
    hair();
    headbandWithPixel();
    faceWithPixel();
    leftEyeWithPixel();
    mouthWithPixel();
    lance();
    staff();
    detail();
}