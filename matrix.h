class matrix
{
private:
    int col;
    int row;
    int **data;
public:
    matrix();
    matrix(int,int);
    ~matrix();
    int& operator()(int,int);
};
