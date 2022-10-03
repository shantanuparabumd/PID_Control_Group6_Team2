/**
 * @file test.cpp
 * @author Bharadwaj Chukkala (bchukkal@umd.edu) | Shantanu Suhas Parab (sparab@umd.edu) {Team 2}
           Anukriti Singh (anukriti@umd.edu) | Sanchit Tanwar (stanwar@umd.edu) {Team 1}
 * @brief Test cases are written for checking PID fucntionality
 * @version 0.1
 * @date 2022-10-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <gtest/gtest.h>
#include "../include/class.hpp"

// Test Case 1
TEST(PID, attempt_1) {
    PID pid(0.1, 0.1, 0.1);
    EXPECT_EQ(5.55, pid.compute(10, 5, 0.1));
}

// Test Case 2
TEST(PID, attempt_2) {
    PID pid(0.1, 0.01, 0.07);
    EXPECT_EQ(4.005, pid.compute(10, 5, 0.1));
}

// Test Case 3
TEST(PID, attempt_3) {
  PID pid(0.1, 0.1, 0.1);
  EXPECT_EQ(12.21, pid.compute(18, 7, 0.1));
}
