/**
 * @file class.hpp
 * @author Bharadwaj Chukkala (bchukkal@umd.edu) | Shantanu Suhas Parab (sparab@umd.edu) {Team 2}
           Anukriti Singh (anukriti@umd.edu) | Sanchit Tanwar (stanwar@umd.edu) {Team 1}
 * @brief Header file containing the PID class definition
 * @version 0.1
 * @date 2022-10-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef PID_CLASS
#define PID_CLASS

#pragma once

#include <iostream>
#include <ostream>

/**
 * @brief PID Class to compute outpurt to reach a setpoint 
 * 
 */
class PID {
 public:
    /**
     * @brief Construct a new PID object
     * 
     * @param Kp_ Proporttional Gain
     * @param Ki_ Integral Gain
     * @param Kd_ Derivative Gain
     */
    PID(double Kp_, double Ki_, double Kd_);
    /**
     * @brief 
     * 
     * @param set_point target value that we desire
     * @param process_variable the present value of flow
     * @param dt time step using which we iterate
     * @return double 
     */
    double compute(double set_point, double process_variable, double dt);

 private:
    double Kp, Kd, Ki;
    double prev_error;  // initilaizing a previous error
    double max_flow;  // lower bound for the overall flow
    double min_flow;  // upper bound for the overall flow
    double integral;  // integral to calculate integral gain
    double dt;  // time step for calculating derivative gain
};

#endif  // PID_CLASS
