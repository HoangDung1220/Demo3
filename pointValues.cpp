#include <iostream>
using namespace std;

int &func(){
    static int x=10;
    return x;
}

int *func1(){
    static int x=20;
    return &x;
}

int func0(){
    int x=10;
    return x;
}
int main(){
  //  int *p = &func();
    /*int m=490;
  //  int m = func0();
    int *p = func1();
    *p=100;
    int q=func();
    func()=m;
    cout<<func()<<endl;
    cout<<&m<<endl;
   /* func()=1001;
    q=50;
   // func0()=10005;
    cout<<func0()<<endl;
     cout<<func()++<<endl;
      cout<<*func1()<<endl;
      cout<<func()++<<endl;
    int *p1 = func1();
   // cout<<p<<endl;
    cout<<*p1<<endl;
    cout<<"Finish"<<endl;
   // cout<<p<<endl;
   int x=10;
   int &a=x;
   a=11;
   cout<<x;*/
   int b=5;
   int c=5;
   int a=2;
   int d=0;
 
  cout<<++b + ++b +  ++b + ++b;
    return 0;

}