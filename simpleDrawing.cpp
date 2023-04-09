#include <graphics.h>
#include <math.h>
#include <vector>
#include <iostream>
using namespace std;
#define PI 3.14159265
#include "liesa/hair.cpp"
#include "customLibrary.cpp"
#include "liesa/mouth.cpp"

CustomLibrary cl = CustomLibrary();

void tree(float x,float y){
    // canopies
    cl.TrianguloEquilateroRelleno(x,y,30,GREEN);
    cl.TrianguloEquilateroRelleno(x,y-20,30,GREEN);
    cl.TrianguloEquilateroRelleno(x,y-40,30,GREEN);

    // trunk
    cl.RectanguloRelleno(x+10,y,10,25,BROWN);
}

void groud(){
    cl.RectanguloRelleno(0,300,640,180,LIGHTGREEN);
}

void sun(){
    cl.CirculoRelleno(500,275,50,YELLOW);
}

void forestPatch(float x, float y){
    tree(x,y);
    tree(x+50,y);
    tree(x+100,y);
    tree(x+150,y);
    tree(x+80,y+10);
    tree(x+120,y-20);
}

void sky(){
    cl.RectanguloRelleno(0,0,640,300,BLUE);
}

void river(){
    cl.Linea(500,300,300,480,BLUE);
    cl.Linea(520,300,500,480,BLUE);
    for(int i=480;i<300;i++){
        cl.Linea(500,i,520,i,BLUE);
    }
}

void rock(float x, float y){
    cl.RectanguloRelleno(x,y,30,30,LIGHTGRAY);
    cl.RectanguloRelleno(x,y+2,28,28,DARKGRAY);

}

void cloud(float x, float y){
    // cloud made with 3 or 4 circles
    cl.CirculoRelleno(x,y,20,WHITE);
    cl.CirculoRelleno(x+20,y,15,WHITE);
    cl.CirculoRelleno(x-20,y,17,WHITE);
    cl.CirculoRelleno(x+60,y,20,WHITE);
}

void simpleDrawing(){
    sky();
    sun();
    cloud(100,100);
    cloud(300,50);
    cloud(350,20);
    cloud(500,120);
    groud();
    forestPatch(100,300);
    forestPatch(500,400);
    forestPatch(200,350);    
    rock(100,350);
    rock(200,370);
    rock(20,377);

}