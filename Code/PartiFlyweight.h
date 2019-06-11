/** @file PartiFlyweight.h
@author iMawe
@version Revision 1.1
@brief implementacion de la clase SnowFly con el uso de OpenGl en C++.
*/

/**
@mainpage
Se demuestra como se implemento el patron de diseño Abstract para poder
crear los objetos ya implementados anteriormente

- Haciendo uso de OpenGL
- Incluyendo las librerias de nuestros objetos para poer realizar estos graficos.
- Patron de diseño Flyweight

*/

#ifndef PARTIFLYWEIGHT_H
#define PARTIFLYWEIGHT_H

#include "Turtle.h"
#include <time.h>      
#include <vector> 

/**
* @class   SnowFly
* @brief   La clase SnowFly contiene las funciones setTam y getTam para poder darle tamano a nuesta nieve
* @detail  Se instancia el dato miembro tam
*/
class SnowFly{
private:
    int tam;
    SnowFly();

public:
    static SnowFly* instance;
    static SnowFly* getInstance(){
        if(instance == 0){
        instance = new SnowFly();
    }
    return instance;
    }

/** La funcion setTam da el tamano.
 *  @param _tam recibe el tamano de los copos
 */
    void setTam(int _tam);

/** La funcion getTam obtiene el tamano.
 */
    int getTam();
};



/**
* @class   Particle
* @brief   La clase Particle contiene las funciones display para poder visualizarlo, set cant y gv
* @detail  Se instancia el dato miembro para cantidad y gv para los pixels que recorre por iteracion
*/
class Particle{
private:
    int tam;
    int x,y;
    SnowFly *particle;

public:
    Particle(int _tam);

    ~Particle();

/** La funcion setTam da el tamano.
 *  @param tam, da el tamano de la particula por crear.
 */
    void setTam(int tam){
        particle->setTam(5);
    }

/** La funcion setXY da a conocer las coordenadas para que se realica ahi la creacion del objeto.
 *  @param _x, _y genera las coordenadas x, y del objeto.
 */
    void setXY(int _x,int _y);

/** La funcion display recibe la tortuga.
 *  @param T, recibe la tortuga para poder dibujar.
 */
    void display(Turtle T);
        
};


/**
* @class   Snow
* @brief   La clase Snow contiene las funciones display para poder visualizarlo, set cant y gv
* @detail  Se instancia el dato miembro para cantidad, gv para los pixels que recorre por iteracion, un vector de particulas para guardar las que son pedidas por el usuario
*/
class Snow{
private:
    int c;
    int gv;
    vector< Particle> S;
    int tam;
public:
/** Constructor.
 *  @param _tam es el tamaño de cada copo de nieve.
 */
    Snow(int _tam = 3);
/** Destructor.
 */
    ~Snow();

/** La funcion display muestra el objeto.
 *  @param T recibe la tortuga para que sea utlizada en la funcion.
 */
    void display(Turtle T);

/** La funcion setC define la cantidad de copos de nieve que habra en el plano.
 *  @param _cant la cantidad de copos de nieve.
 */
    void setC(int _c);

/** La funcion setGv define la cantidad de pixeles en la que  de nieve que habra en el plano.
 *  @param _grave los pixeles de gravedad que tendra.
 */
    void setGv(int _gv);

/** La funcion insert agrega particulas a nuestro vector.
 *  @param tam, tamano de las particulas que se van a generar
 */
    void insert(int tam);
};
/*

int main(int argc, char **argv)

{
    Turtle p(700,500);
    p.display(argc,argv);
    Snow *first=new Snow(5);
    first->display(p);
    
   
    glutMainLoop();
}*/

#endif // PARTIFLYWEIGHT_H