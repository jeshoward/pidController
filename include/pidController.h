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
  double kp; ///< proportional parameter
  double ki; ///< integral parameter
  double kd; ///< derivative parameter
  double previousError; ///< error from previous cycle
  double timeStep; ///< time step
  double setPoint; ///< desired point
  double input; ///< current point
  double output; ///< output to bring current to desired point
 public:

  /**
   * @brief generic constructor for controller class
   */
  pidController();

  /**
   * @brief customizable constructor for controller
   * @param Kp proportional parameter
   * @param Ki integral parameter
   * @param Kd derivative parameter
   * @param TimeStep time step interval
   * @param input Start position
   */
  pidController(double, double, double, double, double);

  void setKp(double);

  /**
   * @brief sets the ki value for the controller
   * @param Ki integral parameter
   */
  void setKi(double);

  /**
   * @brief sets the kd value for the controller
   * @param Kd derivative parameter
   */
  void setKd(double);

  /**
   * @brief returns controller kp value
   * @return proportional parameter
   */
  double getKp();

  /**
   * @brief returns the controller ki value
   * @return integral parameter
   */
  double getKi();

  /**
   * @brief returns the controller kd value
   * @return derivative parameter
   */
  double getKd();

  /**
   * @brief returns the current point
   * @return current point
   */
  double getState();

  /**
   * @brief returns the desired point
   * @return desired point
   */
  double getSetPoint();

  /**
   * @brief sets the time interval
   * @param TimeStep time interval
   */
  void setTimeStep(double);

  /**
   * @brief calculates and returns the output value to bring the
   * current point to the desired point
   * @return output
   */
  double getOutput(double);
};

} /* namespace std */

#endif /* PIDCONTROLLER_H_ */
