#include "ManagementStudent.h"
int main(){
    Student s;
    Student s1(2,2,2);
    Student s2(3,3,3);
    Student s3(4,4,4);
    ManagementStudent list;
    list.add(s);
    list.add(s1);
    list.add(s2);
    list.add(s3);
   // list.show1();
    operator<<(cout,list);
    //insert
    int k;
    Student sinsert(10,10,10);
    cout<<"Index k: ";cin>>k;
    list.insert(sinsert,k);
    list.show1();

    // indexOf

    Student sIndex(2,2,21);
    cout<<list.indexOf(sIndex)<<endl;

    //remove

    Student sRemove(2,2,2);
    list.remove(sRemove);
    list.show1();

    //removeAt

    int u;
    cout<<"Enter u: ";cin>>u;
    list.removeAt(u);
    list.show1();

   /* int choice;
    switch (choice)
    {
    case 1:

        break;
    
    default:
        break;
    }*/
    
    return 0;
}