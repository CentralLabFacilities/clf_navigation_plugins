/*
 * footprint_helper_test.cpp
 *
 *  Created on: May 2, 2012
 *      Author: tkruse
 */

#include <gtest/gtest.h>

#include <vector>

#include <clf_local_planner/simple_trajectory_generator.h>

namespace clf_local_planner {

class TrajectoryGeneratorTest : public testing::Test {
public:
	SimpleTrajectoryGenerator tg;

  TrajectoryGeneratorTest() {
  }

  virtual void TestBody(){}
};
  
}
