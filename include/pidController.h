/*
 * @file pidController.h
 * @author Jessica Howard
 * @copyright GNU public license
 *
 * @brief h file for pidController implementation
 *
 */

#ifndef PIDCONTROLLER_H_
#define PIDCONTROLLER_H_

#include <iostream>

namespace std {

class pidController {
 private:
  double kp;
  double ki;
  double kd;
  double previousError;
  int timeStep;
  double setPoint;
  double input;
  double output;
  bool running;
 public:
  pidController();
  pidController(double, double, double, int, double);
  void start();
  void stop();
  void setKp(double);
  void setKi(double);
  void setKd(double);
  double getKp();
  double getKi();
  double getKd();
  double getState();
  double getSetPoint();
  void setTimeStep(int);
  double getOutput(double);
};

} /* namespace std */

#endif /* PIDCONTROLLER_H_ */
