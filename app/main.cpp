/**
 * @file app/main.cpp
 * @author Bharadwaj Chukkala (bchukkal@umd.edu) | Shantanu Suhas Parab (sparab@umd.edu) {Team 2}
           Anukriti Singh (anukriti@umd.edu) | Sanchit Tanwar (stanwar@umd.edu) {Team 1}
 * @brief 
 * @version 0.1
 * @date 2022-10-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <ostream>
#include "../include/class.hpp"

using std::cout;
using std::endl;

/**
 * @brief Main Function to run PID
 * 
 * @return int 
 */
int main() {
// To do pair 1 - Done
  PID pid(0.1, 0.1, 0.1);
  double set_point = 7;
  double process_variable = 18;
  double dt = 0.1;
  double output = 0;
  for (size_t i = 0; i < 100; i++) {
    set_point = pid.compute(process_variable, set_point, dt);
    std::cout << "Updated Flow after " << i * dt <<
     " Seconds is :" << set_point << std::endl;
}
  return 0;
}
