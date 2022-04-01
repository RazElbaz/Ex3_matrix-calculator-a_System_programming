#include <iostream>
#include <vector>
#include "Matrix.hpp"
using namespace std;
namespace zich {
    
    //----------------------------------------
    // Adding operators
    //----------------------------------------
    Matrix operator+(const Matrix &matrix1, const Matrix &matrix2){
        vector<double> ans;
        return Matrix(ans,0,0);
    }
    Matrix operator+=(Matrix &matrix1, const Matrix &matrix2){
        vector<double> ans;
        return Matrix(ans,0,0);
    }
    Matrix operator+(const Matrix &matrix1){
        vector<double> ans;
        return Matrix(ans,0,0);
    }
    
    
    //----------------------------------------
    // Subtraction operator
    //----------------------------------------
    Matrix operator-(const Matrix &matrix1, const Matrix &matrix2){
        vector<double> ans;
        return Matrix(ans,0,0);
    }
    Matrix operator-=(Matrix &matrix1, const Matrix &matrix2){
        vector<double> ans;
        return Matrix(ans,0,0);
    }
    Matrix operator-(const Matrix &matrix1){
        vector<double> ans;
        return Matrix(ans,0,0);
    }
    
    
    //----------------------------------------
    // Comparison operator
    //----------------------------------------
    bool operator>(const Matrix &matrix1, const Matrix &matrix2){
        return true;
    }
    bool operator>=(const Matrix &matrix1, const Matrix &matrix2){
        return true;
    }
    bool operator<(const Matrix &matrix1, const Matrix &matrix2){
        return true;
    }
    bool operator<=(const Matrix &matrix1, const Matrix &matrix2){
        return true;
    }
    bool operator==(const Matrix &matrix1, const Matrix &matrix2){
        return true;
    }
    bool operator!=(const Matrix &matrix1, const Matrix &matrix2){
        return true;
    }
    
    
    //----------------------------------------
    // Increasement operator
    //----------------------------------------
    Matrix operator++(Matrix &matrix){
        vector<double> ans;
        return Matrix( ans,0,0);
    }
    Matrix operator--(Matrix &matrix){
        vector<double> ans;
        return Matrix(ans,0,0);
    }

    //----------------------------------------
    // Scaling doubling
    //----------------------------------------
    Matrix operator*(const double scalar, Matrix &matrix1){
        vector<double> ans;
        return Matrix(ans,0,0);
    }
    Matrix operator*=(Matrix &matrix1,const double scalar){
        vector<double> ans;
        return Matrix(ans,0,0);
    }


    //----------------------------------------
    // Multiplication of two matrices
    //----------------------------------------
    Matrix operator*(const Matrix &matrix1, const Matrix &matrix2){
        vector<double> ans;
        return Matrix(ans,0,0);
    }
    Matrix operator*=(Matrix &matrix1, const Matrix &matrix2){
        vector<double> ans;
        return Matrix(ans,0,0);
    }


    //----------------------------------------
    // friend global IO operators
    //----------------------------------------
    ostream& operator<<(ostream &output, const Matrix &matrix) {
        return output<<"Raz Elbaz";
    }
    istream& operator>>(istream &input, Matrix &matrix) {
        return input;
    }

}
