#include "PartiFlyweight.h"

SnowFly* SnowFly::instance = 0;

SnowFly::SnowFly(){
    tam = 10;
}

void SnowFly::setTam(int _tam){
    tam = _tam;
}

int SnowFly::getTam(){
    return tam;
}


Particle::Particle(int _tam){
        particle=SnowFly::getInstance();
        particle->setTam(_tam);
        tam = _tam;
    }

Particle::~Particle(){

}

void Particle::display(Turtle T){
    T.move(x,y);
    for(int i = 0; i < 6; i++){
        T.forward(particle->getTam());
        T.right(120);
        T.forward(particle->getTam());
        T.left(60);
    }
}

void Particle::setXY(int _x,int _y){
    x = _x;
    y = _y;
}

Snow::Snow(int _tam){
    c = 15;
    gv = 1;
}

Snow::~Snow(){}


void Snow::setC(int _c){
    c = _c;
}
void Snow::setGv(int _gv){
    gv = _gv;
}

void Snow::display(Turtle T){
    T.set_color(255,255,255);
    for(int i = 0; i < S.size(); i++){
        int x_ = rand() % 800 + (0);
        int y_ = rand() % 700 + (-100);
        S[i].setXY(x_, y_);
        S[i].display(T);
    }
    glutPostRedisplay();
}

void Snow::insert(int tam){
    Particle aux = Particle(5);
    S.push_back(aux);
}