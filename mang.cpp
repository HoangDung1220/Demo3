#include <iostream>
using namespace std;

void input(int **a,int row,int col){
    for (int i=0;i<row;i++)
    for (int j=0;j<col;j++){
        cout<<"a[ "<<i<<" "<<j<<"] = ";cin>>*(*(a+i)+j);
    }
}

void output(int **a,int row,int col){
    for (int i=0;i<row;i++){
    for (int j=0;j<col;j++)
        cout<<*(*(a+i)+j)<<" ";
        cout<<endl;
    }
}

int main(){
    int **a;
    int col=2,row=3;

    a = new int *[row];
    for (int i=0;i<row;i++){
        *(a+i)= new int [col];
    }
    input(a,row,col);
    output(a,row,col);
    cout<<endl<<*(*(a+2));
    int (*b)[4];

    for (int i=0;i<4;i++){
        
    }
    return 0;

}