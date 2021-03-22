#include <iostream>
using namespace std;
int main(){
    
    char st[]= "Dung";
    char *stt;
   
    char *p = st;
    p++;
    cout<<st<<endl;
    cout<<*p<<endl;
  
    cout<<&("Ngo Hoang Dung")<<endl;
    return 0;
}