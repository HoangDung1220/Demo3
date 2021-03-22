#include <iostream>
using namespace std;

int main(){
    char st[20] ={'n','g','o','n','g','u','y','e','n'};
    char st1[200];
    st1[0]='d';
    st1[1]='u';
    st1[2]='n';
    st1[3]='g';
    st1[4]='\0';
    cout<<st1<<endl;
    cout<<st<<endl;
    char st2[100];
    cout<<"Enter name: ";
    cin.getline(st2,50);
    cout<<st2<<endl;
    string st3;
    cout<<"Enter name: ";
    cin>>st3;
    cout<<st3<<endl;

    return 0;

}