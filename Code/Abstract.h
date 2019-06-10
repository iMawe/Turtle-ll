/** @file Abstract.h
@author iMawe
@version Revision 1.1
@brief implementacion de la clase AbstractFact con el uso de OpenGl en C++.
*/

/**
@mainpage
Se demuestra como se implemento el patron de diseño Abstract para poder
crear los objetos ya implementados anteriormente

- Haciendo uso de OpenGL
- Incluyendo las librerias de nuestros objetos para poer realizar estos graficos.
- Patrones de diseño (Abstract Factory, Flyweight, Factory Method, Builder)

*/

#ifndef ABSTRACT_H
#define ABSTRACT_H

#include"PartiFlyweight.h"
#include "ArbolBuilder.h"
#include "FlorFactoryM.h"


/**
* @class   AbstractFact
* @brief   La clase AbstractFact contiene funciones virtual-pura
* @detail  Se realiza con funciones virtual-pura para que estas sean reutilizadas por nuestras fabricas
*/
class AbstractFact{
public:

/** Funcion virtual para poder generar nuestro arbol..
 */
	virtual Tree* getTree() = 0;

/** Funcion virtual para poder generar nuestra flor.
 */
	virtual Flower* getFlor() = 0;

/** Funcion virtual para poder generar nuestra nieve.
 */
	virtual Snow* getParti() = 0;
	
};

/**
* @class   Prim
* @brief   La clase Prim es la clase AbstractFact concreta
* @detail  Se instancian punteros a cada uno de nuestros objetos
*/
class Prim:public AbstractFact{
public:

/** Funcion para poder obetener nuestro arbol tipo Prim.
 */
	Tree* getTree();

/** Funcion para poder obetener nuestra flor tipo Prim.
 */
	Flower* getFlor();

/** Funcion para poder obetener nuestra nieve tipo Prim.
 */
	Snow* getParti();
};

/**
* @class   Seco
* @brief   La clase Seco es la clase AbstractFact concreta
* @detail  Se instancian punteros a cada uno de nuestros objetos pero esta vez de otro tipo
*/
class Seco:public AbstractFact{
public:

/** Funcion para poder obetener nuestro arbol tipo Seco.
 */
	Tree* getTree();

/** Funcion para poder obetener nuestra flor tipo Seco.
 */
	Flower* getFlor();

/** Funcion para poder obetener nuestra nieve tipo Seco.
 */
	Snow* getParti();
};

/*
int main(int argc, char **argv){
	Turtle T(700,500);
    T.display(argc,argv);

	AbstractFact* aux = new Seco();
	Tree* t = aux->getTree();
	Flower* f = aux->getFlor();
	Snow* n = aux->getParti();

	f->drawn(T,300,100);
	t->drawn(T,100,100);

	AbstractFact* aux1 = new Prim();
	Tree* t1 = aux1->getTree();
	Flower* f1 = aux1->getFlor();
	Snow* n1 = aux1->getParti();

	f1->drawn(T,300,100);
	t1->drawn(T,100,100);
	
	glFlush();
	glutMainLoop();

	return 0;
}*/

#endif // ABSTRACT_H