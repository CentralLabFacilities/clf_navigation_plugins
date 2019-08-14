/*
 * twirling_cost_function.cpp
 *
 *  Created on: Apr 20, 2016
 *      Author: Morgan Quigley
 */

#include <clf_local_planner/twirling_cost_function.h>

#include <math.h>

namespace clf_local_planner {

double TwirlingCostFunction::scoreTrajectory(Trajectory &traj) {
  return fabs(traj.thetav_);  // add cost for making the robot spin
}

} /* namespace clf_local_planner */
