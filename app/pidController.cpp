/*
 * @file pidController.cpp
 * @author Jessica Howard
 * @copyright GNU public license
 *
 * @brief h file for pidController implementation
 *
 */

#include <pidController.h>

namespace std {
pidController::pidController() {
  kp = 1;
  ki = 1;
  kd = 1;
  previousError = 0;
  timeStep = 1;
  setPoint = 1;
  input = 0;
  output = 0;
  running = false;
}

pidController::pidController(double Kp, double Ki, double Kd, int TimeStep, double SetPoint) {

  kp = Kp;
  ki = Ki;
  kd = Kd;
  previousError = 0;
  timeStep = TimeStep;
  setPoint = SetPoint;
  input = 0;
  output = -1;
  running = false;
}

void pidController::start() {

}

void pidController::stop() {

}

void pidController::setKp(double Kp) {

}

void pidController::setKi(double Ki) {

}

void pidController::setKd(double Kd) {

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

void setTimeStep(int TimeStep) {

}

double getOutput(double SetPoint) {
  return 0;
}

}
