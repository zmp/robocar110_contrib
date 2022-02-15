# RoboCar 1/10 Contributions

This repo is a sandbox for RoboCar 1/10 code. Please, fork it and make a pull request to share your ideas.
Later they can be added to the main repo which is [**robocar110_ros**](https://github.com/zmp/robocar110_ros).

Bugfixes and obvious improvements can be submitted directly to the main repo.

## Getting the Code
The repos can be stored in one workspace, so catkin could find dependencies like `rc110_msgs`.

```
mkdir -p ~/ros/src
cd ~/ros/src
git clone git@github.com:zmp/robocar110_ros.git
git clone git@github.com:zmp/robocar110_contrib.git
```

## Template
You can find a template node in `rc110_core/rc110_template`. It can be copied to other directory to develop a new node quickly.

### Build
At first, please, make sure you can build [Core Nodes or Simulation](https://github.com/zmp/robocar110_ros).

Then, try to build the template node or similarly your own node.
```
cd ~/ros/src/robocar110_contrib
rosdep install -iry --from-paths rc110_core/rc110_template
catkin build rc110_template -DCATKIN_ENABLE_TESTING=OFF
```

### Run
```
source $(catkin locate --devel)/setup.bash

rosrun rc110_template rc110_template
# or
roslaunch rc110_template main.launch
```

## Contribution Process
If you are new to github, please check the [**official documentation**](https://docs.github.com/en/get-started/quickstart/contributing-to-projects).
