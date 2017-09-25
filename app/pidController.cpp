/*
 * @file pidController.cpp
 * @author Jessica Howard
 * @copyright GNU public license
 *
 * @brief h file for pidController implementation
 *
 */

#include <pidController.h>
#include <cmath>

namespace std {
pidController::pidController() {
  kp = 1;
  ki = 1;
  kd = 1;
  previousError = 0;
  timeStep = 0.1;
  setPoint = 0;
  input = 0;
  output = 0;
}

pidController::pidController(double Kp, double Ki, double Kd, double TimeStep,
                             double Input) {
  kp = Kp;
  ki = Ki;
  kd = Kd;
  previousError = 0;
  timeStep = TimeStep;
  setPoint = 0;
  input = Input;
  output = 0;
}

void pidController::setKp(double Kp) {
  kp = Kp;
}

void pidController::setKi(double Ki) {
  ki = Ki;
}

void pidController::setKd(double Kd) {
  kd = Kd;
}

double pidController::getKp() {
  return kp;
}

double pidController::getKi() {
  return ki;
}

double pidController::getKd() {
  return kd;
}

double pidController::getState() {
  return input;
}

double pidController::getSetPoint() {
  return setPoint;
}

void pidController::setTimeStep(double TimeStep) {
  timeStep = TimeStep;
}

double pidController::getOutput(double SetPoint) {
  /*
   * TODO Neel:
   * Calculate your error (setpoint - input)
   * Reset to 0 variables that will be maintained through the loop
   * (previousError and integral)
   *
   * Start your loop, run while abs(error) > 0.0001
   * Inside the loop:
   *  Calculate your integral
   *    (integral += error * timeStep
   *  Calculate your derivative
   *    (derivative = (error - previousError) / timeStep
   *  Calculate your output
   *    (kp * error + ki * integral + kd * derivative)
   *  Update your input
   *    (input += output)
   *  Reset your error variables
   *    (previousError = error, error = setpoint - input)
   *  End loop
   *
   * Return output
   */

  double error = SetPoint - input;      // Calculate the error
  double integral = 0, derivative = 0;  // Initialize local variables
  while (abs(error) > 0.0001) {         // Check the absolute value of error
    integral += error * timeStep;       // Calculate the integral term
    derivative = (error - previousError) / timeStep;
                                  // Calculate the derivative term
    output = error * kp + integral * ki + derivative * kd;
                                // Calculate the output
    input += output;                                   // Update the input
    previousError = error;                             // Update previous error
    error = SetPoint - input;                          // Update error
  }

  return output;
}
}  // namespace std
