#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;


namespace zich{

    class Matrix{
    private:
        int Size;
        vector<double> matrix;

    public:
        Matrix(vector<double> MatrixVector, int Rows, int Columns){

        }

        friend Matrix operator+(const Matrix &matrix1, const Matrix &matrix2);
        friend Matrix operator+=(Matrix &matrix1, const Matrix &matrix2);
        friend Matrix operator+(const Matrix &matrix1);

        friend Matrix operator-(const Matrix &matrix1, const Matrix &matrix2);
        friend Matrix operator-=(Matrix &matrix1, const Matrix &matrix2);
        friend Matrix operator-(const Matrix &matrix1);

        friend bool operator>(const Matrix &matrix1, const Matrix &matrix2);
        friend bool operator>=(const Matrix &matrix1, const Matrix &matrix2);
        friend bool operator<(const Matrix &matrix1, const Matrix &matrix2);
        friend bool operator<=(const Matrix &matrix1, const Matrix &matrix2);
        friend bool operator==(const Matrix &matrix1, const Matrix &matrix2);
        friend bool operator!=(const Matrix &matrix1, const Matrix &matrix2);

        friend Matrix operator++(Matrix &matrix);
        friend Matrix operator--(Matrix &matrix);

        friend Matrix operator*(const double scalar, Matrix &matrix1);
        friend Matrix operator*=(Matrix &matrix1, const double scalar);

        friend Matrix operator*(const Matrix &matrix1, const Matrix &matrix2);
        friend Matrix operator*=( Matrix &matrix1, const Matrix &matrix2);

        friend ostream& operator<< (ostream& output, const Matrix &matrix);
        friend istream& operator>> (istream& input, Matrix &matrix);
        };
    }
