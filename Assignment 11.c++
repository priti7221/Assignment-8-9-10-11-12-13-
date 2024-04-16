#include<iostream>
using namespace std;
const int size=3;
class matrix{
    private:
    
   
    int mat[size][size];

    public:
    matrix(int inputMat[][size]){
        for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
           mat[i][j]=inputMat[i][j];
        }
    }
    }
    void printMatrix() {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << mat[i][j] << " ";
        }
          cout <<endl;
    }
    }
    static matrix addMatrix(matrix& m1,matrix& m2){
        int result[size][size];
        for(int i=0;i<size;++i){
             for(int j=0;j<size;++j){
                result[i][j]=m1.mat[i][j]+m2.mat[i][j];
             }
        }
        return matrix(result);
    }
    
};
int main(){
    
    int mat1[size][size]={{1,2,3},{6,3,6},{2,7,4}};
    int mat2[size][size]={{5,2,7},{2,4,6},{3,7,5}};
    matrix obj1(mat1);
    matrix obj2(mat2);
    matrix obj3=matrix::addMatrix(obj1,obj2);
    std::cout<<"Matrix1"<<endl;
    obj1.printMatrix();
    std::cout<<"Matrix2"<<endl;
    obj2.printMatrix();
    std::cout<<"Matrix3"<<endl;
    obj3.printMatrix();
     return 0;

    
}
