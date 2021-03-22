//#include <iostream>
#include "Student.h"
//using namespace std;
int main(){
    Student s1;
    Student s2(2,18,4);
    s1.show();
    operator<<(cout,s2);
    return 0;
}