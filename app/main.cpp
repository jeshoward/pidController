/**
 * @file    main.cpp
 * @author  nrparikh
 * @copyright GNU public license
 *
 * @brief Main file to test the implementation of PID controller
 *
 */

#include "pid_controller.hpp"

int main() {
  PIDController controller(0.01, 0.001, 0.01, 0.1, 0);
  std::cout << "The state achieved is:" << controller.controller(5.0)
            << std::endl;
  return 0;
}
