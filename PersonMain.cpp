#include "Person.h"

int main(){
    Person p(2,"Dung");
    Person p1(3,"Dum");

    operator<<(cout,p);
    cout<<p1<<p;
    return 0;
}