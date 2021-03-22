#include <iostream>
#include "Famer.h"
using namespace std;

int main(){
    Person p1(1,"Nga");
    Person p2(2,"My");
    Famer f(0);
    f.add(p1);
    f.add(p2);
    f.add(Person(3,"hieu"));
    f.add(Person(4,"Ngan"));
    for (int i=0;i<4;i++){
        cout<<f[i]<<endl;
    }
    return 0;
}