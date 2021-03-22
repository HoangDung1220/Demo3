#include "Person.h"
class Famer{
    private:
    int size;
    Person *data;
    public:
   
    Famer(int);
    Person operator[](int);
    void add(const Person &);

};