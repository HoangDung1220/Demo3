#include <iostream>
using namespace std;
class Person
{
private:
    int age;
    string name;
public:
    Person();
    Person(int,string);
    friend ostream & operator<<(ostream &, const Person);
   // ~Person();
};

