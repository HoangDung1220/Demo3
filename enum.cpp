#include <iostream>
using namespace std;

 enum Color{
        Red,
        Green,
        Black =9,
        Pink
    };

int main(){
   
    Color c = Pink;
    cout<<c<<endl;
    return 0;

}