#include <iostream>
using namespace std;
void input (int a[],int n){
    for (int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"] =";cin>>*(a+i);
    }
}

void swap(int &x,int &y){
    int t=x;
    x=y;
    y=t;
}

void swap1(int *x,int *y){
    int t=*x;
    *x=*y;
    *y=t;
}

bool incesden(int i,int j){
    return (i>j);
}

bool desceden(int i,int j){
    return (i<j);
}

void sort(int a[],int n,bool check(int,int)){
    for (int i=0;i<n-1;i++)
     for (int j=i+1;j<n;j++)
     if (check(a[i],a[j])){
         swap1(&a[i],&a[j]);
     }
}

void ouput(int a[],int n){
    for (int i=0;i<n;i++){
        cout<<*(a+i)<<" ";
    }
}

int main(){
    int n;
    int a[100];
    cout<<"Enter n: ";cin>>n;
    input(a,n);
    sort (a,n,incesden);
    ouput(a,n);

    int m=10,nn=9;
    void (*swapp)(int *,int *)=swap1;
    (*swapp)(&m,&nn);
    cout<<m<<" "<<nn;
    return 0;
}



