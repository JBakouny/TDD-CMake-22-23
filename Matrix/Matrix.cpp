#include "Matrix.hpp"
using std::vector;

Matrix::Matrix (int ligne, int colonne, const vector<double> arr) : ligne(ligne), colonne(colonne), arr(arr) {}

double& Matrix::operator() (int i, int j)  {
        return arr[i * colonne + j];
}