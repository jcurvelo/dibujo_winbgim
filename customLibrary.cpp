#include <graphics.h>
#include <math.h>
#include <vector>
#include <iostream>
using namespace std;
#define PI 3.14159265

// Esta es la clase que contiene la mayoria funciones que se solicitaron,
// algunas no pude hacerlas funcionar.

// Tambien hay varias funciones que no se solicitaron pero las use como apoyo para hacer las funciones
// o prueba de concepto para ver si funcionaban.

// Esta clase es usada para ambos dibujos

class CustomLibrary
{
    float angleOfVector(float x1, float y1, float x2, float y2)
    {
        float angle = atan2(y2 - y1, x2 - x1);
        return angle;
    }
    float lengthOfVector(float x1, float y1, float x2, float y2)
    {
        float length = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        return length;
    }
    float degToRad(float degrees)
    {
        return (degrees * PI) / 180;
    }
    vector<float> LineInAngle(float x, float y, float length, float angle, float color)
    {
        vector<float> destiny;
        float angleInRad = degToRad(angle);
        float x1 = x + cos(angleInRad) * length;
        float y1 = y + sin(angleInRad) * length;

        Linea(x, y, x1, y1, color);
        destiny.push_back(x1);
        destiny.push_back(y1);
        return destiny;
    }

public:
    void Linea(float x1, float y1, float x2, float y2, int color)
    {
        float angle = angleOfVector(x1, y1, x2, y2);
        float length = lengthOfVector(x1, y1, x2, y2);
        for (int i = 0; i < length; i++)
        {
            float x = x1 + cos(angle) * i;
            float y = y1 + sin(angle) * i;
            putpixel(x, y, color);
        }
    }
    void Circulo(float x, float y, float r, int color)
    {
        for (float i = 0; i < 2 * PI; i += 0.01)
        {
            float x1 = x + cos(i) * r;
            float y1 = y + sin(i) * r;
            putpixel(x1, y1, color);
        }
    }
    void CirculoRelleno(float x, float y, float r, int color)
    {
        Circulo(x, y, r, color);
        // fill the circle
        for (float i = 0; i < 2 * PI; i += 0.01)
        {
            float x1 = x + sin(i) * r;
            float y1 = y + cos(i) * r;
            Linea(x, y, x1, y1, color);
        }
    }
    void Rectangulo(float x, float y, float width, float height, int color)
    {
        Linea(x, y, x + width, y, color);
        Linea(x + width, y, x + width, y + height, color);
        Linea(x + width, y + height, x, y + height, color);
        Linea(x, y + height, x, y, color);
    }
    void RectanguloRelleno(float x, float y, float width, float height, int color)
    {
        Rectangulo(x, y, width, height, color);
        for (int i = y; i < y + height; i++)
        {
            Linea(x, i, x + width, i, color);
        }
    }
    void TrianguloEquilatero(float x, float y, float size, float color)
    {
        vector<float> destiny = LineInAngle(x, y, size, -60, color);
        LineInAngle(destiny[0], destiny[1], size, 60, color);
        LineInAngle(x, y, size, 0, color);
    }
    void TrianguloEquilateroRelleno(float x, float y, float size, float color)
    {
        TrianguloEquilatero(x, y, size, color);
        // fill the triangle
        for (int i = size; i > 0; i--)
        {
            TrianguloEquilatero(x, y, i, color);
        }
    }

    void Arco(float x, float y, float r, float startAngle, float endAngle, int color)
    {
        for (float i = degToRad(startAngle); i < degToRad(endAngle); i += 0.01)
        {
            float x1 = x + cos(i) * r;
            float y1 = y + sin(i) * r;
            putpixel(x1, y1, color);
        }
    }

    void Pentagono(float x, float y, float size, float color)
    {
        PoligonoRegular(x, y, size, 5, color);
    }

    void Hexagono(float x, float y, float size, float color)
    {
        PoligonoRegular(x, y, size, 6, color);
    }

    void Heptagono(float x, float y, float size, float color)
    {
        PoligonoRegular(x, y, size, 7, color);
    }

    void Octagono(float x, float y, float size, float color, bool fill = false)
    {
        PoligonoRegular(x, y, size, 8, color);
    }

    void PoligonoRegular(float x, float y, float size, int sides, float color)
    {
        vector<float> temp;
        float degrees = 360 / sides;
        for (int i = 0; i < sides; i++)
        {
            if (i == 0)
            {
                temp = LineInAngle(x, y, size, 0, color);
            }
            else
            {
                temp = LineInAngle(temp[0], temp[1], size, degrees * i, color);
            }
        }
    }

    void freeDraw()
    {
    }
    void drawMatrix(float matrix[5][2]){

        int length = sizeof(matrix) / sizeof(matrix[0]);
        cout << "length" << length << endl;
        for (int i = 0; i < length; i++)
        {
            if(matrix[i][0] == 0 && matrix[i][1] == 0){
                break;;
            }
            cout << matrix[i][0] << " " << matrix[i][1] << endl;
            if (i + 1 < length)
            {
                Linea(matrix[i][0], matrix[i][1], matrix[i + 1][0], matrix[i + 1][1], WHITE);
            }
        }
    }

    void drawVector(vector < vector<float> > vec){
        int length = vec.size();
        for (int i = 0; i < length; i++)
        {
            if (i + 1 < length)
            {
                Linea(vec[i][0], vec[i][1], vec[i + 1][0], vec[i + 1][1], WHITE);
            }
        }
    }

    void PoligonoIrregular(float x1, float y1, float x2, float y2, float x3, float y3 ,float x4, float y4, float color)
    {
        Linea(x1, y1, x2, y2, color);
        Linea(x2, y2, x3, y3, color);
        Linea(x3, y3, x4, y4, color);
        Linea(x4, y4, x1, y1, color);
    }

    void LimpiarArea(float x, float y, float width, float height){
        for (int i = y; i < y + height; i++)
        {
            Linea(x, i, x + width, i, BLACK);
        }
    }

    void LimpiarPantalla(){
        LimpiarArea(0, 0, 640, 480);
    }

};