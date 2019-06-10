#include "Turtle.h"

Turtle::Turtle(int w1,int h1){
    x1 = Turt.x;
    y1 = Turt.y;
    w = w1;
    h = h1;
}

void Turtle::forward(int di){
    glBegin(GL_LINES);
        glVertex2f(Turt.x, Turt.y);

        Turt.y = Turt.y + (di * sin(Turt.de));
        Turt.x = Turt.x + (di * cos(Turt.de));

        glVertex2f(Turt.x, Turt.y);
    glEnd();
    glFlush();
}

void Turtle::left(double de){
    de = de * (PI / 180);
    Turt.de += de;
}
void Turtle::right(double de){
    de = -de * (PI / 180);
    Turt.de += de;
}

void Turtle::backward(int di){
    right(180);
    forward(di);
    right(180);
}

void Turtle::set_color(int R,int G, int B){
    Turt.R = R;
    Turt.G = G;
    Turt.B = B;
    glColor3f(R, G, B);
}

void Turtle::penup(){
    glColor3f(0, 0, 0);
}

void Turtle::pendow(){
    set_color(Turt.R, Turt.G, Turt.B);
}

void Turtle::move(double x, double y){
    Turt.x = x1 + x;
    Turt.y = y1 + y;
}

void Turtle::display(int argc, char **argv){
    
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowPosition(200, 100);
    
    glutInitWindowSize(w,h);

    glutCreateWindow("window1");
    glClear(GL_COLOR_BUFFER_BIT);
    gluOrtho2D(0, w-1, 0, h-1);
    set_color(Turt.R, Turt.G, Turt.B);
    
}