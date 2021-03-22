#include "Famer.h"

Famer::Famer(int size){
    this->size=size;
}

Person Famer::operator[](int i){
    return data[i];
}
void Famer::add(const Person& s){
    if (this->size==0){
        this->data = new Person[this->size+1];
        this->data[size]= s;
    } else
    {

        Person *a = new Person[this->size];
        for (int i=0;i<this->size;i++){      
            a[i]=this->data[i];
            }
            this->data= new Person[this->size+1];
            for (int i=0;i<this->size;i++){
                this->data[i]=a[i];
            }
        

            this->data[size]=s;
        
        }
        this->size++;
}