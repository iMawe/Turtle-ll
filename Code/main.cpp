#include "Abstract.h"
Turtle T;

void teclado(unsigned char key, int x, int y){
	AbstractFact* aux = new Prim();
	Tree* t1 = aux->getTree();
	Flower* f1 = aux->getFlor();
	Snow* n1 = aux->getParti();

	AbstractFact* aux1 = new Seco();
	Tree* t = aux1->getTree();
	Flower* f = aux1->getFlor();
	Snow* n = aux1->getParti();

	for(int i = 0; i < 10; i++)
  	  	n1->insert(1);
	switch (key){
		case 27:             // ESCAPE key
		exit (0);
		break;
	case 't':
		t1->drawn(T,300,100);
		break;
	case 'f':
		f1->drawn(T,100,100);
		break;
	case 'n':
		n1->display(T);
		break;
	case 'g':
		f->drawn(T, 150, 150);
		break;
	case 'c':
		T.clear();
		break;
	}
}

void Pantalla(){

}

int main(int argc, char **argv){
	T = Turtle(700,500);
    T.display(argc,argv);
    glutKeyboardFunc(*teclado);
    glutDisplayFunc(Pantalla);

	glutMainLoop();
	return 0;
}
/*
int main(int argc, char **argv){
	Turtle T(700,500);
    T.display(argc,argv);

	AbstractFact* aux1 = new Prim();
	Tree* t1 = aux1->getTree();
	Flower* f1 = aux1->getFlor();
	Snow* n1 = aux1->getParti();

	f1->drawn(T,300,100);
	t1->drawn(T,100,100);
	n1->display(T);
	
	AbstractFact* aux = new Seco();
	Tree* t = aux->getTree();
	Flower* f = aux->getFlor();
	Snow* n = aux->getParti();

	f->drawn(T,300,100);
	t->drawn(T,100,100);
	n->display(T);

	glFlush();
	glutMainLoop();

	return 0;
}*/

/*
doxygen -g sample_text.conf

doxygen sample_text.conf

cd html

google-chrome index.html


g++ main.cpp Turtle.cpp PartiFlyweight.cpp ArbolBuilder.cpp FlorFactoryM.cpp Abstract.cpp -o gl -lGL -lGLU -lglut

*/