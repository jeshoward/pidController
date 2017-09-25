/**
 * @file    main.cpp
 * @author  jeshoward
 * @copyright GNU public license
 *
 * @brief main file for implementation of pid controller
 *
 * Class pidController tests the week 4 partner homework implementation for
 * ENPM808X
 *
 * Stub author: Jessica Howard
 * Implementation: Neel Parikh
 *
 */


#include <pidController.h>

// using namespace std;

int main() {
  std::pidController c(0.01, 0.001, 0.01, 0.1, 0.0);
  c.getOutput(5.0);
  std::cout << "State is now: " << c.getState() << std::endl;


  return 0;
}
