#include "gtest/gtest.h"
#include<iostream>
#include "Matrix.hpp"
using namespace std;

Matrix m(2,2,{10, 20, 30, 40});

TEST(MatrixTest, OperatorSimpleTest) {
    EXPECT_EQ(m(0,0), 10);
}

TEST(MatrixTest, OperatorColumnTest) {
    EXPECT_EQ(m(0,1), 20);
}

TEST(MatrixTest, OperatorLignTest) {
    EXPECT_EQ(m(1,0), 30);
}

TEST(MatrixTest, OperatorLignAndColumnTest) {
    EXPECT_EQ(m(1,1), 40);
}