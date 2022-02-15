/*
 * Copyright (C) 2022 ZMP Inc info@zmp.co.jp
 *
 * Distributed under the MIT License (http://opensource.org/licenses/MIT)
 *
 * Written by Andrei Pak
 */
#pragma once

#include <ros/ros.h>

namespace zmp
{
/**
 * Description.
 */
class Rc110Template
{
public:
    Rc110Template();

private:
    ros::NodeHandle handle;
};
}  // namespace zmp
