/**
 * @file    pid_controller.cpp
 * @author  nrparikh
 * @copyright GNU public license
 *
 * @brief Source file for the class PIDController
 *
 * @section DESCRIPTION
 * This is the header file for the PID controller class. The class has
 * variables for each of the term as well  as time interval. It also has
 * methods for setting and retrieving the values of each of the constants. It
 * also has the method to implement PID controller to achieve the desired goal.
 *
 */

#include "pid_controller.hpp"

PIDController::PIDController() {
  k_prop_ = 0;
  k_integral_ = 0;
  k_derivative_ = 0;
  time_interval_ = 1;
  current_point_ = 1;
  cum_error_ = 0;
  prev_error_ = 0;
}

PIDController::PIDController(float k_prop, float k_integral, float k_derivative,
                             float time_interval, float curr_point) {
  k_prop_ = k_prop;
  k_integral_ = k_integral;
  k_derivative_ = k_derivative;
  time_interval_ = time_interval;
  current_point_ = curr_point;
  cum_error_ = 0;
  prev_error_ = 0;
}

PIDController::~PIDController() {
}

auto PIDController::getKProp() -> float {
  return k_prop_;
}

auto PIDController::getKIntegral() -> float {
  return k_integral_;
}

auto PIDController::getKDerivative() -> float {
  return k_derivative_;
}

auto PIDController::getTimeInterval() -> float {
  return time_interval_;
}

auto PIDController::getCurrentPoint() -> float {
  return current_point_;
}

auto PIDController::setKProp(float k_prop) -> void {
  k_prop_ = k_prop;
}

auto PIDController::setKIntegral(float k_integral) -> void {
  k_integral_ = k_integral;
}

auto PIDController::setKDerivative(float k_derivative) -> void {
  k_derivative_ = k_derivative;
}

auto PIDController::setTimeInterval(float time_interval) -> void {
  time_interval_ = time_interval;
}

auto PIDController::setCurrentPoint(float curr_point) -> void {
  current_point_ = curr_point;
}

auto PIDController::controller(float desired_point) -> float {
  // TODO(jeshoward): Use PID control method to reach desired point
  // Check: Use loop while squared error is greater than 0.0001; break when
  // achieved. Return error for test cases. Clip the control signal to +10 and 
  // -10. Please make sure that control signal is clipped otherwise the test
  // cases will fail.

  // Calculate error
  // LOOP: Check if squared error is greater than 0.0001
  // Calculate the control signal
  // Check if the control signal is greater than 10: If yes, control signal=10
  // Check if the control signal is smaller than -10: If yes, control signal=-10
  // Update current_point_ as current_point_+=control signal
  // Calculate the error again 
  // ENDLOOP
}
