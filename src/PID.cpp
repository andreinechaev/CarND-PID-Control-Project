#include "PID.h"

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    p_error_ = i_error_ = d_error_ = prev_cte_ = 0.0;

    Kp_ = Kp;
    Ki_ = Ki;
    Kd_ = Kd;
}

void PID::UpdateError(double cte) {
    p_error_ = cte;
    i_error_ = i_error_ + cte;
    d_error_ = cte - prev_cte_;
    prev_cte_ = cte;
}

double PID::TotalError() {
    double steer = -Kp_ * p_error_ - Kd_ * d_error_ - Ki_ * i_error_;
    if (steer < -1.0) steer = -1.0;
    if (steer > 1.0) steer = 1.0;
    return steer;
}

