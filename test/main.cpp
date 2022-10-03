/**
 * @file test/main.cpp
 * @author Bharadwaj Chukkala (bchukkal@umd.edu) | Shantanu Suhas Parab (sparab@umd.edu) {Team 2}
           Anukriti Singh (anukriti@umd.edu) | Sanchit Tanwar (stanwar@umd.edu) {Team 1}
 * @brief 
 * @version 0.1
 * @date 2022-10-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <gtest/gtest.h>

/**
 * @brief main testing function
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
