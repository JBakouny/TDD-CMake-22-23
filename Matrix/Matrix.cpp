#include "Matrix.hpp"
using std::vector;

Matrix::Matrix (const vector<double> arr) : arr(arr) {}

double& Matrix::operator() (int i, int j)  {
        return arr[i];
}