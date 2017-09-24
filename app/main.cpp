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

using namespace std;

int main() {
  pidController c(0.01, 0.001, 0.01, 0.1, 2.0);
  c.start();
  cout << "Current state is: " << c.getState() << endl;
  cout << "Desired state is: " << c.getSetPoint() << endl;

  return 0;
}
