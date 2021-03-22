#include <iostream>
using namespace std;

class Student{
    private:
    int id;
    int age;
    float mark;
    public:
    Student();
    Student(int,int,float);
    void setId(int);
    void show();
    int operator==(const Student&);
    friend ostream& operator<<(ostream&, const Student&);

};