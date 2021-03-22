#include "Person.h"

Person::Person(){

}

Person::Person(int age, string name){
    this->age=age;
    this->name=name;
}

ostream& operator<<(ostream & o, const Person p){
    o<<p.age<<" "<<p.name<<endl;
    return o;

}