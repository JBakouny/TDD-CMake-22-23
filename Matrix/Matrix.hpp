#include <vector>

class Matrix {
public:
    Matrix (int ligne, int colonne, const std::vector<double> arr);
    double& operator() (int i, int j);
private:
    std::vector<double> arr;
    int ligne;
    int colonne;
};
