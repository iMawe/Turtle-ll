#include "FlorFactoryM.h"

FlorBonita::FlorBonita(int petal){
    petalos = petal;
}
FlorBonita::~FlorBonita(){

}
void FlorBonita::drawn(Turtle T,int x,int y){
    T.move(x, y);
    for(int i = 0; i < petalos + 2; i++){
        T.forward(10);
        T.left(45);
    }
}


FlorMala::FlorMala(int petal){
    petalos = petal;
}
FlorMala::~FlorMala(){

}
    
void FlorMala::drawn(Turtle T,int x,int y){
    T.move(x, y);
    for(int i = 0; i < petalos + 2; i++){
        T.forward(25);
        T.right(60);
    }
}


FlorNormal::FlorNormal(int petal){
    petalos = petal;
}
FlorNormal::~FlorNormal(){

}
void FlorNormal::drawn(Turtle T,int x,int y){
    T.move(x, y);
    for(int i = 0; i < petalos + 2; i++){
        T.forward(25);
        T.right(60);
    }
}
