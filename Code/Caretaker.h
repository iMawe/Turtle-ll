#ifndef _CARETAKER_H_
#define _CARETAKER_H_
#include <vector>
#include "memento.h"
#include "linkeddoble.cpp"
using namespace std;

 class caretaker{
 public:
     caretaker(){}
     ~caretaker(){}
     void setmemento(memento* Memento){
          
        if(this->list.size()>=5){
            list.remove_back();

        }
        list.insert_front(Memento); 

    
     }

    memento* getmemento(){
        last_listmementos=list.Begin();
        return last_listmementos;
    }

    memento* retrosede(){
        cout<<"retrosede"<<endl;
        last_listmementos=list.retroceder();
        return last_listmementos;
    }


    memento*  avanzar(){
        cout<<"avanzar"<<endl;
        last_listmementos=list.avanzar();
        return last_listmementos;   
    }


        double_linked_list<memento*> list;
 private:
 	//double_linked_list<memento*> list;
        

    memento *last_listmementos;


 };
 
#endif