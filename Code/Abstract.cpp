#include "Abstract.h"

Tree* Prim::getTree(){
	Tree* Trees;
    Director director;
    Trees = director.getBuilder(20,10,5);
    return Trees;
}

Flower* Prim::getFlor(){
	Turtle T;
	ColorImpl* ImplR = new ColorRedImpl();
	Flower* Flowers = new FlorBonita(6, 1, ImplR);
	Flowers->drawColor(T);
	return Flowers;
}

Snow* Prim::getParti(){
	Snow *aux = new Snow(1);
	return aux;
}

Tree* Seco::getTree(){
	Tree* Trees;
    Director director;
    Trees = director.getBuilder(20,18,16);
    return Trees;
}

Flower* Seco::getFlor(){
	Turtle T;
	ColorImpl* ImplB = new ColorBlueImpl();
	Flower *Flowers = new FlorNormal(6, 2, ImplB);
	Flowers->drawColor(T);
	return Flowers;
}

Snow* Seco::getParti(){
	Snow *aux = new Snow(2);
	return aux;
}
	
