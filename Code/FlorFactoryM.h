/** @file FlorFactoryM.h
@author iMawe
@version Revision 1.1
@brief implementacion de la clase Flower con el uso de OpenGl en C++.
*/

/**
@mainpage
Se demuestra como se implemento el patron de diseño Builder para poder
dar inumerables combinaciones a nuestro arbol al momento de ser
dibujado

- Haciendo uso de OpenGL
- Incluyendo la libreria Turtle para poer realizar estos graficos.
- Patron de diseño Factory Method

*/

#ifndef FLORFACTORYM_H
#define FLORFACTORYM_H

#include "Turtle.h"

/**
* @class   Flower
* @brief   La clase Flower contiene la funcion drawn para poder visualizarlo
* @detail  Se instancia el dato miembro 
*/
class Flower{
protected:
    int petalos;

public:
/** Funcion para drawn.
 *  @param T, nos permite hacer uso de la tortuga y x, y coordinan el tamano del tronco
 */
    virtual void drawn(Turtle T,int x,int y) = 0;
};

/**
* @class   FlorBonita
* @brief   La clase FlorBonita contiene la funcion drawn para poder visualizarlo, hereda de la clase Flower
* @detail  Se tiene constructor y destructor
*/
class FlorBonita:public Flower{
public:
/** Constructor.
 *  @param petal es la cantidad de petalos que tiene la flor.
 */
    FlorBonita(int petal);
/** Destructor
 */
    ~FlorBonita();
/** La funcion drawn recibe la tortuga y el tamano.
 *  @param T, nos permite hacer uso de la tortuga y x, y coordinan el tamano del tronco.
 */
    void drawn(Turtle T,int x,int y);
    
};

/**
* @class   FlorMala
* @brief   La clase FlorMala contiene tla funcion drawn para poder visualizarlo, hereda de la clase Flower
* @detail  Se instancia el dato miembro 
*/
class FlorMala :public Flower{
public:
/** Constructor.
 *  @param petal es la cantidad de petalos que tiene la flor.
 */
    FlorMala(int petal);
/** Destructor
 */
    ~FlorMala();
/** La funcion drawn recibe la tortuga y el tamano.
 *  @param T, nos permite hacer uso de la tortuga y x, y coordinan el tamano del tronco.
 */
    void drawn(Turtle T,int x,int y);
    
};

/**
* @class   FlorNormal
* @brief   La clase FlorNormal contiene tla funcion drawn para poder visualizarlo, hereda de la clase Flower
* @detail  Se instancia el dato miembro 
*/
class FlorNormal:public Flower{
public:
/** Constructor.
 *  @param petal es la cantidad de petalos que tiene la flor.
 */
    FlorNormal(int petal);
/** Destructor
 */
    ~FlorNormal();
/** La funcion drawn recibe la tortuga y el tamano.
 *  @param T, nos permite hacer uso de la tortuga y x, y coordinan el tamano del tronco.
 */
    void drawn(Turtle p,int x,int y);
    
};

/*
int main(int argc, char **argv){
    Turtle T(500,500);
    T.display(argc,argv);
    FlorBonita b(6);
    FlorNormal r(6);
    FlorMala f(6);
    b.drawn(p,100,100);
    r.drawn(p,200,100);
    f.drawn(p,300,100);
    while(1);
    glutMainLoop();
    
    return 0;
}*/


#endif // FLORFACTORYM_H