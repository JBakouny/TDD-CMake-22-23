#include<iostream>
#include "Matrix.hpp"
using namespace std;


int main() {

    Matrix m({10, 20, 
            30, 40});
    
    cout << m(0,0) << endl;

    return 0;
}