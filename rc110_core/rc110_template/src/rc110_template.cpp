/*
 * Copyright (C) 2022 ZMP Inc info@zmp.co.jp
 *
 * Distributed under the MIT License (http://opensource.org/licenses/MIT)
 *
 * Written by Andrei Pak
 */
#include "rc110_template.hpp"

namespace zmp
{
Rc110Template::Rc110Template()
{
    std::ignore = ros::param::param("~parameter_name", 0);
}
}  // namespace zmp
