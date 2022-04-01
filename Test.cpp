#include <map>
#include <vector>
#include <string>
#include "Matrix.hpp"
#include "doctest.h"
using namespace zich;
using namespace std;

TEST_CASE("Addition / subtraction of two matrices is defined only on matrices of hundreds of nXm size series"){
    std::vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    std::vector<double> same_identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    std::vector<double> arr = {3, 0};
    std::vector<double> same_arr = {3, 0};
    Matrix matrix1{identity, 3, 3};
    Matrix matrix2{same_identity, 3, 3};
    Matrix matrix3{arr, 1, 1};
    Matrix matrix4{same_arr, 1, 1};

    CHECK_THROWS(matrix1+matrix3);
    CHECK_THROWS(matrix1+matrix4);
    CHECK_THROWS(matrix2+matrix3);
    CHECK_THROWS(matrix2+matrix4);

    CHECK_THROWS(matrix1+=matrix3);
    CHECK_THROWS(matrix1+=matrix4);
    CHECK_THROWS(matrix2+=matrix3);
    CHECK_THROWS(matrix2+=matrix4);

    CHECK_THROWS(matrix1-matrix3);
    CHECK_THROWS(matrix1-matrix4);
    CHECK_THROWS(matrix2-matrix3);
    CHECK_THROWS(matrix2-matrix4);

    CHECK_THROWS(matrix1-=matrix3);
    CHECK_THROWS(matrix1-=matrix4);
    CHECK_THROWS(matrix2-=matrix3);
    CHECK_THROWS(matrix2-=matrix4);
}

TEST_CASE("The condition for multiplying matrices is: The number of columns of A = the number of rows of B"){
    std::vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    std::vector<double> same_identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    std::vector<double> arr = {3, 0};
    std::vector<double> same_arr = {3, 0};

    Matrix matrix1{identity, 3, 3};
    Matrix matrix2{same_identity, 3, 3};
    Matrix matrix3{arr, 1, 1};
    Matrix matrix4{same_arr, 1, 1};

    CHECK_THROWS(matrix1*matrix3);
    CHECK_THROWS(matrix1*matrix4);
    CHECK_THROWS(matrix2*matrix3);
    CHECK_THROWS(matrix2*matrix4);

    CHECK_THROWS(matrix1*=matrix3);
    CHECK_THROWS(matrix1*=matrix4);
    CHECK_THROWS(matrix2*=matrix3);
    CHECK_THROWS(matrix2*=matrix4);
}

TEST_CASE("Checking comparisons") {
    std::vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    std::vector<double> same_identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    std::vector<double> arr = {3, 0};
    std::vector<double> same_arr = {3, 0};

    Matrix matrix1{identity, 3, 3};
    Matrix matrix2{same_identity, 3, 3};
    Matrix matrix3{arr, 1, 1};
    Matrix matrix4{same_arr, 1, 1};

    CHECK_EQ(matrix1==matrix2, true);
    CHECK_EQ(matrix3==matrix3, true);
    CHECK_EQ(matrix1==matrix3, false);
    CHECK_EQ(matrix1==matrix4, false);
    CHECK_EQ(matrix2==matrix3, false);
    CHECK_EQ(matrix2==matrix4, false);

    CHECK_EQ(matrix1!=matrix2, false);
    CHECK_EQ(matrix3!=matrix3, false);
    CHECK_EQ(matrix1!=matrix3, true);
    CHECK_EQ(matrix1!=matrix4, true);
    CHECK_EQ(matrix2!=matrix3, true);
    CHECK_EQ(matrix2!=matrix4, true);
}