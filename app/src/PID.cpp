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
    integral = 0;  // integral used to calculate the integral gain of PID
    prev_error = 0;  // initializing previous error to loop it through and through
    dt = 0.01;  // time step used to calculate the derivative gain of PID
    max_flow = 100;  // lower bound for the overall flow
    min_flow = 0;  // upper bound for the overall flow

    // Initializing variables
    Kp = Kp_;
    Ki = Ki_;
    Kd = Kd_;
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
  // proportional gain
  double error = set_point - process_variable;
  double p_gain = Kp * error;

  // integral gain
  integral = integral + (error * dt);
  double i_gain = Ki * integral;

  // derivative gain
  double d_gain = Kd * (error-prev_error)/dt;

  // tentative output value of PID
  double pid_output = p_gain + i_gain + d_gain;

  // A logic to minimize error iteratively
  prev_error = error;

  pid_output = max(min_flow, min(max_flow, pid_output));
  return pid_output;
}

