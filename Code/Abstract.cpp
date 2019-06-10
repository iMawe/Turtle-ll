#include "Abstract.h"

Tree* Prim::getTree(){
	Tree* Trees;
    Director director;
    Trees = director.getBuilder(20,10,5);
    return Trees;
}

Flower* Prim::getFlor(){
	Flower *Flowers = new FlorBonita(6);
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
	Flower *Flowers = new FlorNormal(6);
	return Flowers;
}

Snow* Seco::getParti(){
	Snow *aux = new Snow(2);
	return aux;
}
	
