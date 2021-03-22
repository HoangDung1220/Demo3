#include <iostream>
using namespace std;
int main(){
    int n;
    int a[n];
    cin>>n;
    for (int i=0;i<n;i++){
        cout<<"a["<<i<<"]= ";cin>>a[i];
    }
    cout<<"Hello world!";
    char x;
    int y;
    cout<<"Enter y: ";cin>>y;
    x=y;
    cout<<"y= "<<y<<"x= "<<x<<endl;
    return 0;
}