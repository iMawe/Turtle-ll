#include "ArbolBuilder.h"

void Tronco::drawn(Turtle T,int x, int y){
    T.left(90);
    T.forward(size);
}

void Rama::drawn(Turtle T,int x, int y){
    T.left(45);
    T.forward(size);
}

void Hoja::drawn(Turtle T,int x, int y){
    T.right(90);
    T.forward(size);
}

void Tree::drawn(Turtle T, int x, int y){
    T.move(x, y);
    Hojas->drawn(T, x, y);
    
    Troncos->drawn(T, x, y);

    Ramas->drawn(T, x, y);
}


void NormalTree::setTronco(int size){
    Troncos = new Tronco();
    Troncos->size = size;
}
void NormalTree::setHojas(int size){
    Hojas = new Hoja();
    Hojas->size=  size;
}
void NormalTree::setRamas(int size){
    Ramas = new Rama();
    Ramas->size = size;
}
Tronco* NormalTree::getTronco(){
    return Troncos;
}
Hoja* NormalTree::getHojas(){
    return Hojas;
}
Rama* NormalTree::getRamas(){
    return Ramas;
}


void Director::setBuilder(TreeBuil* newBuilder){
    builder = newBuilder;
}

Tree* Director::getBuilder(int a, int b, int c){
    Tree* Trees = new Tree();
    NormalTree* bt = new NormalTree();
    bt->setRamas(a);
    bt->setTronco(b);
    bt->setHojas(c);
    Trees->Troncos = bt->getTronco();
    Trees->Hojas = bt->getHojas();
    Trees->Ramas = bt->getRamas();


    return Trees;
}

Tree* Director::getTree(){
    Tree* Trees = new Tree();
    
    Trees->Troncos = builder->getTronco();
    Trees->Hojas = builder->getHojas();
    Trees->Ramas = builder->getRamas();

    return Trees;
}

