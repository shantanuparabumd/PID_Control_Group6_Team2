/**
 * @file PID.cpp
 * @author Bharadwaj Chukkala (bchukkal@umd.edu) | Shantanu Suhas Parab (sparab@umd.edu) {Team 2}
           Anukriti Singh (anukriti@umd.edu) | Sanchit Tanwar (stanwar@umd.edu) {Team 1}
 * @brief This file contains the necessary functionality to compute PID values
 * @version 0.1
 * @date 2022-10-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <algorithm>
#include "../../include/class.hpp"

using std::max;
using std::min;

/**
 * @brief Construct a new PID::PID object
 * 
 * @param Kp_  Proportional Gain term
 * @param Ki_  Integral Gain term
 * @param Kd_  Derivative Gain term
 */
PID::PID(double Kp_, double Ki_, double Kd_) {
}
/**
 * @brief 
 * 
 * @param set_point target value that we desire
 * @param process_variable the present value of flow
 * @param dt time step using which we iterate
 * @return double 
 */
double PID::compute(double set_point, double process_variable, double dt) {
  return 10;
}

