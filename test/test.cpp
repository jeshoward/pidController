/*
 * @file pidController_test.cpp
 * @author Jessica Howard
 * @copyright GNU public license
 *
 * @brief h file for pidController implementation
 *
 */

#include <gtest/gtest.h>
#include "pidController.h"

using namespace std;

TEST(pidTest, kValsInitializationTest) {
  pidController c;
  c.setKp(3);
  c.setKi(4);
  c.setKd(5);
  EXPECT_EQ(c.getKp(), 3);
  EXPECT_EQ(c.getKi(), 4);
  EXPECT_EQ(c.getKd(), 5);
}

TEST(pidTest, OutputErrorCheck01) {
  pidController c(0.01, 0.001, 0.01, 0.1, 0);
  c.getOutput(2);
  EXPECT_NEAR(c.getState(), 2.0, 0.0001);
}

TEST(pidTest, OutputErrorCheck02) {
  pidController c(0.01, 0.001, 0.01, 0.1, 0);
  c.getOutput(10);
  EXPECT_NEAR(c.getState(), 10.0, 0.0001);
}
