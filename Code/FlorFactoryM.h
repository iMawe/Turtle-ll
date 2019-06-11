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
* @brief   La clase Flower es abstracta, contiene la funcion drawn para poder cambiar de color
* @detail  Se instancia el dato miembro 
*/
class ColorImpl{
public:

/** Funcion SetColor.
 *  @param T, nos permite hacer uso de la tortuga para realizar el cambio de color, es una funcion virtual igualada a 0
 */
    virtual void SetColor(Turtle T) = 0;
};

/**
* @class   ColorBlueImpl
* @brief   La clase ColorBlueImpl contiene la funcion drawn para poder cambiar de color
* @detail  Se instancia el dato miembro 
*/
class ColorBlueImpl: public ColorImpl{
public:

/** Funcion SetColor.
 *  @param T, nos permite hacer uso de la tortuga para realizar el cambio de color
 */
    void SetColor(Turtle T);
};

/**
* @class   ColorRedImpl
* @brief   La clase ColorRedImpl contiene la funcion drawn para poder cambiar de color
* @detail  Se instancia el dato miembro 
*/
class ColorRedImpl: public ColorImpl{
public:

/** Funcion SetColor.
 *  @param T, nos permite hacer uso de la tortuga para realizar el cambio de color
 */
    void SetColor(Turtle T);
};


/**
* @class   Flower
* @brief   La clase Flower es abstracta, contiene la funcion drawn para poder visualizarlo
* @detail  Se instancia el dato miembro petalos
*/
class Flower{
protected:
    int petalos;

public:
/** Funcion para drawn.
 *  @param T, nos permite hacer uso de la tortuga y (x, y) coordinan la coordenada de la flor
 */
    virtual void drawn(Turtle T,int x,int y) = 0;

/** Funcion drawnColor.
 *  @param T, nos permite hacer uso de la tortuga
 */
    virtual void drawColor(Turtle T) = 0; // low-level

};

/**
* @class   FlorBonita
* @brief   La clase FlorBonita contiene la funcion drawn para poder visualizarlo, hereda de la clase Flower
* @detail  Se instancia el dato miembro, se crea un puntero a la clase ColorImpl para que se pueda escoger el color 
*/
class FlorBonita:public Flower{
public:
/** Constructor.
 *  @param petal, Implementor es la cantidad de petalos que tiene la flor y un puntero a ColorImpl.
 */
    FlorBonita(int petal, ColorImpl *Implementor);
/** Destructor
 */
    ~FlorBonita();
/** La funcion drawn recibe la tortuga y el tamano.
 *  @param T, nos permite hacer uso de la tortuga y x, y coordinan la ubicacion de la flor.
 */
    void drawn(Turtle T,int x,int y);

/** Funcion drawnColor.
 *  @param T, nos permite hacer uso de la tortuga
 */
    void drawColor(Turtle T);

private:
    ColorImpl *drawingImplementor;
};


/**
* @class   FlorMala
* @brief   La clase FlorMala contiene tla funcion drawn para poder visualizarlo, hereda de la clase Flower
* @detail  Se instancia el dato miembro, se crea un puntero a la clase ColorImpl para que se pueda escoger el color 
*/
class FlorMala :public Flower{
public:
/** Constructor.
 *  @param petal, Implementor es la cantidad de petalos que tiene la flor y un puntero a ColorImpl.
 */
    FlorMala(int petal, ColorImpl *Implementor);
/** Destructor
 */
    ~FlorMala();
/** La funcion drawn recibe la tortuga y el tamano.
 *  @param T, nos permite hacer uso de la tortuga y x, y coordinan la ubicacion de la flor.
 */
    void drawn(Turtle T,int x,int y);

/** Funcion drawnColor.
 *  @param T, nos permite hacer uso de la tortuga
 */
    void drawColor(Turtle T);

private:
    ColorImpl *drawingImplementor;
    
};

/**
* @class   FlorNormal
* @brief   La clase FlorNormal contiene tla funcion drawn para poder visualizarlo, hereda de la clase Flower
* @detail  Se instancia el dato miembro, se crea un puntero a la clase ColorImpl para que se pueda escoger el color 
*/
class FlorNormal:public Flower{
public:
/** Constructor.
 *  @param petal, Implementor es la cantidad de petalos que tiene la flor y un puntero a ColorImpl.
 */
    FlorNormal(int petal, ColorImpl *Implementor);
/** Destructor
 */
    ~FlorNormal();
/** La funcion drawn recibe la tortuga y el tamano.
 *  @param T, nos permite hacer uso de la tortuga y x, y coordinan la ubicacion de la flor.
 */
    void drawn(Turtle T,int x,int y);

/** Funcion drawnColor.
 *  @param T, nos permite hacer uso de la tortuga
 */
    void drawColor(Turtle T);

private:
    ColorImpl *drawingImplementor;
    
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