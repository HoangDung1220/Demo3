#include "Student.h"
//#include <iostream>
//using namespace std;

Student::Student(){
this->id=1;
this->age=1;
this->mark=1;
}

Student::Student(int id,int age,float mark)
:id(id),age(age),mark(mark)
{

}

void Student::show(){
    cout<<"ID= "<<id<<" AGE= "<<age<<" MARK= "<<mark<<endl;
}

ostream& operator<<(ostream& o,const Student & s){
    o<<s.id<<" "<<s.age<<" "<<s.mark<<endl;
    return o;
}

int Student::operator==(const Student& s){
    return (this->id==s.id) && (this->age==s.age) && (this->mark==s.mark);
}
