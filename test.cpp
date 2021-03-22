#include <iostream>
using namespace std;
void func(int x=1){
    cout<<x+1;
}

int main(){
    func(5);
    return 0;
}