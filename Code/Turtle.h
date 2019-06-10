/** @file Turtle.h
@author iMawe
@version Revision 1.1
@brief implementacion de la clase Turtle con el uso de OpenGl en C++.
*/

/**
@mainpage
En el siguiente .cpp se demuestra una forma en la que se puede
programar una "turtle" de Python para que esta cumpla las mismas 
funciones que en su IDLE original.

- Haciendo uso de OpenGL
- Incluyendo una librería matematica para poder calcular angulos.

*/

#ifndef TURTLE_H
#define TURTLE_H

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <string>

using namespace std;

#define PI 3.14159265358979323846


struct Coord{
    double x, y;
    int R, G, B;
    float de;
    /** Constructor de la estructura Coord dando valores.
 */
    Coord(){
        x = 0;
        y = 0;
        R = G = 255;
        B = 0;
        de = 0;
    }
};

/**
* @class   Turtle
* @brief   La clase tortuga contiene todos los metodos y funciones de "turtle" de Python
* @detail  Una numeracion general sobre los metodos mas importantes de "turle" 
*/

class Turtle{
    private:
    Coord Turt;
    double x1, y1;
    int h, w;
    public:
/** Constructor con tamano por defecto.
 *  @param w1, h2 coordinan el tamano del plano.
 */
    Turtle(int w1 = 500,int h1 = 500);

/** Funcion para avanzar.
 *  @param di, tamano de la linea recta por avenzar
 */
    void forward(int di);

/** Gira a la derecha los grados que recibe.
 *  @param dg, es la cantidad de grados que gira.
 */
    void right(double dg);

/** Gira a la izquierda los grados que recibe.
 *  @param dg, es la cantidad de grados que gira.
 */
    void left(double dg);

/** Funcion para retroceder.
 *  @param di, tamano de la linea recta por retroceder
 */
    void backward(int di);

/** Funcion que da color a la tortuga.
 *  @param R, G, B inicializan el color de tipo RGB.
 */
    void set_color(int R,int G, int B);

/** la tortuga deja de pintar.
 */
    void penup();

/** la tortuga vuelve a pintar.
 */
    void pendow();

/** mueve la tortuga hace la coordenada (x, y).
 *  @param x, y funcionan como coordenadas.
 */
    void move(double x,double y);

/** mostrar ventana.
 *  @param argc, argv es necesario para la funcion glutInit.
 */
    void display(int argc, char **argv);

/** limpiar ventana.
 */
    void clear(){
        glClear(GL_COLOR_BUFFER_BIT);
    }
};

#endif // TURTLE_H