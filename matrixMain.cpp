#include "matrix.h"
#include <iostream>
using namespace std;
int main(){
    matrix m(3,4);
    for (int i=0;i<3;i++){
        for (int j=0;j<4;j++)
        cout<<m(i,j)<<" ";
        cout<<endl;
    }
return 0;
}