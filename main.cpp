#include <graphics.h>
#include <math.h>
#include <vector>
#include <iostream>
using namespace std;
#include "simpleDrawing.cpp"

// Libreria de la imagen
// #include "Liesa.cpp"

// Comentar simpleDrawing.cpp y descomentar Liesa.cpp para ver el dibujo de Liesa

int main(){
	initwindow(640, 480, "Dibujo");

    // Dijubo simple
    simpleDrawing();

    // Dibujo mucho más complicado que no logré finalizar porque no me di cuenta de todos los detalles que
    // tenia la imagen original
    // Liesa();
    getch();
    
    return 0;
}
