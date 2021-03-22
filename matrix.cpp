#include "matrix.h"
matrix::matrix(){

}

matrix::matrix(int row,int col){
    this->data= new int *[this->row]; 
    for (int i=0;i<this->row;i++){
        *(this->data+i) = new int[this->col];
    }
    for (int i=0;i<this->row;i++)
    for (int j=0;j<this->col;j++)
    {
        *(*(this->data+i)+j)=1;
    }
}

matrix::~matrix(){
    delete [] data[0];
    delete [] data;
}

int& matrix::operator()(int row,int col){
    return data[row][col];
}

