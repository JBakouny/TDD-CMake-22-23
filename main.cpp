#include "gtest/gtest.h"
#include<iostream>
#include "Matrix.hpp"
using namespace std;

TEST(MatrixTest, OperatorSimpleTest) {
    Matrix m({10, 20, 
            30, 40});
            
    EXPECT_EQ(m(0,0), 10);
}

TEST(MatrixTest, OperatorColumnTest) {
    Matrix m({10, 20, 
            30, 40});
            
    EXPECT_EQ(m(0,1), 20);
}

TEST(MatrixTest, OperatorLignTest) {
    Matrix m({10, 20, 
            30, 40});
            
    EXPECT_EQ(m(1,0), 30);
}

TEST(MatrixTest, OperatorLignAndColumnTest) {
    Matrix m({10, 20, 
            30, 40});
            
    EXPECT_EQ(m(1,1), 40);
}