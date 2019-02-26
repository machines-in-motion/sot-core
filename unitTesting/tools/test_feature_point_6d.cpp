/*
 * Copyright 2010, CNRS/AIST
 * Copyright 2011-2019 LAAS, CNRS
 *
 *
 * See LICENSE file
 *
 */
#include <Eigen/Dense>

int main()
{
  Eigen::MatrixXd Pinv_(3,3);
  Eigen::Matrix3d Rt_;
  Eigen::Vector3d omega_,errordot_th_;
  
  errordot_th_ = -Pinv_ * (Rt_ * omega_);
}

