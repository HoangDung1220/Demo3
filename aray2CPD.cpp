#include <iostream>
using namespace std;
int main(){
    int **a;
    //3 hang 4 cot
    a = new int *[3];
    for (int i=0;i<3;i++){
        *(a+i)=new int [4];
    }

    
    for (int i=0;i<3;i++)
     for (int j=0;j<4;j++)
     {
         cout <<"a["<<i<<" , "<<j<<"] =";cin>>*(*(a+i)+j);
     }

     for (int i=0;i<3;i++)
     {
         for (int j=0;j<4;j++)
     
         cout <<*(*(a+i)+j)<<" ";
         cout<<endl;
     }
     return 0;
}