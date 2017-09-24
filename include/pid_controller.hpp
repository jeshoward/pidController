/**
 * @file    pid_controller.hpp
 * @author  nrparikh
 * @copyright GNU public license
 *
 * @brief Header file for the class PIDController
 *
 * @section DESCRIPTION
 * This is the header file for the PID controller class. The class has
 * variables for each of the term as well  as time interval. It also has
 * methods for setting and retrieving the values of each of the constants. It
 * also has the method to implement PID controller to achieve the desired goal.
 *
 */

#ifndef INCLUDE_PID_CONTROLLER_HPP
#define INCLUDE_PID_CONTROLLER_HPP

#include <iostream>

class PIDController {
 private:
  float k_prop_;         ///< Proportional constant
  float k_integral_;     ///< Integral constant
  float k_derivative_;   ///< Derivative constant
  float time_interval_;  ///< Time step
  float cum_error_;      ///< Cumulative error
  float prev_error_;     ///< Previous error
  float current_point_;  ///< Current point

 public:
  /**
   * @brief Constructor of the class PIDController
   */
  PIDController();
  /**
   * @brief Constructor for the class PIDController
   * @param k_prop: Proportional constant
   * @param k_integral: Integral constant
   * @param k_derivative: Derivative constant
   * @param time_interval: Time step
   * @param curr_point: Current point
   */
  PIDController(float k_prop, float k_integral, float k_derivative,
                float time_interval, float curr_point);
  /**
   * @brief Destructor for the class PIDController
   */
  ~PIDController();
  /**
   * @brief Method to get the proportional constant
   * @return Return proportional constant
   */
  auto getKProp() -> float;
  /**
   * @brief Method to get integral constant
   * @return Return integral constant
   */
  auto getKIntegral() -> float;
  /**
   * @brief Method to get derivative constant
   * @return Return derivative constant
   */
  auto getKDerivative() -> float;
  /**
   * @brief Method to get time step
   * @return Return the time step
   */
  auto getTimeInterval() -> float;
  /**
   * @brief Method to get current point
   * @return Return current point
   */
  auto getCurrentPoint() -> float;
  /**
   * @brief Method to set the proportional constant
   * @param k_prop: Value to be set as proportional constant
   * @return Return nothing
   */
  auto setKProp(float k_prop) -> void;
  /**
   * @brief Method to set the integral constant
   * @param k_integral: Value to be set as integral constant
   * @return Return nothing
   */
  auto setKIntegral(float k_integral) -> void;
  /**
   * @brief Method to set derivative constant
   * @param k_derivative: Value to be set as derivative constant
   * @return Return nothing
   */
  auto setKDerivative(float k_derivative) -> void;
  /**
   * @brief Method to set time step
   * @param time_interval: Value to be set as time interval
   * @return Return nothing
   */
  auto setTimeInterval(float time_interval) -> void;
  /**
   * @brief Method to set current velocity
   * @param curr_point: Value to set as current velocity
   * @return Return nothing
   */
  auto setCurrentPoint(float curr_point) -> void;
  /**
   * @brief Method which implements PID controller to achieve desired point from
   * the current point
   * @param desired_point: Desired point which has to be reached
   * @param current_point: Current point
   * @return Return nothing
   */
  auto controller(float desired_point) -> float;
};
#endif
