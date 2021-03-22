#include "ManagementStudent.h"

ManagementStudent::ManagementStudent(){
    this->size=0;
}

ostream & operator<<(ostream & o, const ManagementStudent& s){
    for (int i=0;i<s.size;i++){
        o<<*(s.data+i)<<endl;
    }
    return o;
}

void ManagementStudent::add(const Student& s){
    if (this->size==0){
        this->data = new Student[this->size+1];
        this->data[size]= s;
    } else
    {

        Student *a = new Student[this->size];
        for (int i=0;i<this->size;i++){      
            a[i]=this->data[i];
            }
            this->data= new Student[this->size+1];
            for (int i=0;i<this->size;i++){
                this->data[i]=a[i];
            }
        

            this->data[size]=s;
        
        }
        this->size++;
}

void ManagementStudent::show1(){
    for (int i=0;i<this->size;i++){
      this->data[i].show();
    }
}

void ManagementStudent::insert(const Student& s,int k){
    if (k<0 && k>=this->size){
        cout<<"K outside "<<endl;
    }
    else
    {   cout<<"hello"<<endl;
        this->size++;
        for (int i=this->size-1;i>k;i--){
            this->data[i]=this->data[i-1];
        }
        this->data[k]=s;
    }    
}

int ManagementStudent::indexOf(const Student& s){
    for (int i=0;i<this->size;i++){
        if (this->data[i].operator==(s)==1) return i;
    }
    return -1;
}

void ManagementStudent::remove(const Student & s){
    int kq=-1;
    for (int i=0;i<this->size;i++){
        if (this->data[i].operator==(s)==1) kq=i; 
    }
    if (kq!=-1){
        this->size--;
        for (int i=kq;i<this->size;i++)
        this->data[i]=this->data[i+1];
    } else{
        cout<<"K outside"<<endl;
    }
}

void ManagementStudent::removeAt(int k){
    if (k>=0 && k<this->size){
    this->size--;
    for (int i=k;i<this->size;i++){
        this->data[i]=this->data[i+1];
    }
    } else{
        cout<<"k outside"<<endl;
    }
}

void ManagementStudent::update(const int& k){


}