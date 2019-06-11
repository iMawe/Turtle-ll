#include "FlorFactoryM.h"

void ColorBlueImpl::SetColor(Turtle T){
    T.set_color(0, 0, 255);//Blue
}

void ColorRedImpl::SetColor(Turtle T){
    T.set_color(255, 0, 0);//Red
}

FlorBonita::FlorBonita(int petal, ColorImpl *Implementor){
    petalos = petal;
    drawingImplementor = Implementor;
}
FlorBonita::~FlorBonita(){

}
void FlorBonita::drawn(Turtle T, int x, int y){
    T.move(x, y);
    drawColor(T);
    for(int i = 0; i < petalos + 2; i++){
        T.forward(10);
        T.left(45);
    }
}

void FlorBonita::drawColor(Turtle T) {
    drawingImplementor->SetColor(T);
}


FlorMala::FlorMala(int petal, ColorImpl *Implementor){
    petalos = petal;
    drawingImplementor = Implementor;
}

FlorMala::~FlorMala(){

}
    
void FlorMala::drawn(Turtle T,int x,int y){
    T.move(x, y);
    drawColor(T);
    for(int i = 0; i < petalos + 2; i++){
        T.forward(25);
        T.right(60);
    }
}

void FlorMala::drawColor(Turtle T) {
    drawingImplementor->SetColor(T);
}


FlorNormal::FlorNormal(int petal, ColorImpl *Implementor){
    petalos = petal;
    drawingImplementor = Implementor;
}
FlorNormal::~FlorNormal(){

}
void FlorNormal::drawn(Turtle T,int x,int y){
    T.move(x, y);
    drawColor(T);
    for(int i = 0; i < petalos + 2; i++){
        T.forward(25);
        T.right(60);
    }
}

void FlorNormal::drawColor(Turtle T) {
    drawingImplementor->SetColor(T);
}