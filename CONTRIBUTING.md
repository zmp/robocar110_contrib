# Contribution Guidelines

## General Guidelines
Code submission process is described in the [**official documentation**](https://docs.github.com/en/get-started/quickstart/contributing-to-projects).

This repository is under [**MIT License**](LICENSE), so the code you upload is going to have the same license. For more information, see the [**article**](https://docs.github.com/en/github/site-policy/github-terms-of-service#6-contributions-under-repository-license).

Please, don't upload content that infringes any proprietary right of any party, including patent, trademark, trade secret, copyright, right of publicity, or other right. More details [**here**](https://docs.github.com/en/github/site-policy/github-acceptable-use-policies).

## Structure
This repository shares the directory structure from [**robocar110_ros**](https://github.com/zmp/robocar110_ros).
```
- group1
    - package1_1
    - package1_2
- group2
    - package2_1
...etc
```
Group names should start with `rc110_` prefix. It is preferable to create a group with the same name as in **robocar110_ros**.

Package names generally follow the same pattern, except for packages that are not related to RoboCar 1/10.

To create a new package, copy `rc110_core/rc110_template` directory somewhere and correct the files inside according to your needs.
