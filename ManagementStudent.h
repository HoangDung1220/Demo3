#include <iostream>
#include "Student.h"
using namespace std;
class ManagementStudent{
    private :
    int size;
    Student *data;
    public:
    ManagementStudent();
    void add(const Student &);
    void show1();
    void insert(const Student&, int k);
    int indexOf(const Student&);
    void remove(const Student&);
    void removeAt(int );
    void update(const int& );
   friend ostream& operator<<(ostream& , const ManagementStudent & );
    
};