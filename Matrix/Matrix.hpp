#include <vector>

class Matrix {
public:
    Matrix (const std::vector<double> arr);
    double& operator() (int i, int j);
private:
    std::vector<double> arr;
};
