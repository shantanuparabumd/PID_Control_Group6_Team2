# PID_Control_Group6_Team2

## Overview
### Task
- For Acme Robotics and we need to create a PID controller implementation for a new mobile robot product development!
- Simulate Pair Programming and Test Driven Development
- Use Git Version control to coordinate 
### Group 6 
| Team 2 | Team 1 |
|---| --- |
| `Bharadwaj Chukkala` (Navigator)| `Anukriti Singh` (Navigator)|
| `Shantanu Suhas Parab` (Driver)| `Sanchit Tanwar` (Driver)|

### Part 1 
- The Teams created their tentative UML Class Diagram for implementing the code.
- In the next step both teams created a class and defined a compute function for PID.
- Both Teams created the test cases for essentially how the PID is supposed to work.
- CMakeLists were created appropriately as seen in the content tree below.
- All this was done using git version control and detailed commits were written for each P-request

### Part 2
- The Teams switched the roles of driver and navigator and then forked the other team's repository.
- Team 2 implemented the PID compute function for Team 1 and vice versa,
- Both the teams programmed the code such that multiple test cases pass without fail and merged their changes to main branch.
- cpplinting and checking was done for both the packages
- The code has been standardly documented using Doxygen

### Extra Credit
- Continuous Integration and Testing were performed using one free trail of Travis CI 

- Press this [LINK](https://app.travis-ci.com/github/sanchit2843/PID_Control) to see the Travis CI Build


## Contents

<pre>├── <font color="#3465A4"><b>app</b></font>
│   ├── CMakeLists.txt
│   ├── main.cpp
│   └── <font color="#3465A4"><b>src</b></font>
│       ├── CMakeLists.txt
│       └── PID.cpp
├── <font color="#3465A4"><b>build</b></font>
├── <font color="#3465A4"><b>cmake</b></font>
│   └── CodeCoverage.cmake
├── CMakeLists.txt
├── <font color="#3465A4"><b>include</b></font>
│   └── class.hpp
├── readme.md
├── <font color="#3465A4"><b>test</b></font>
│   ├── CMakeLists.txt
│   ├── main.cpp
│   └── test.cpp
└── <font color="#3465A4"><b>vendor</b></font>
    └── <font color="#3465A4"><b>googletest</b></font>
</pre>

## Instructions to run the code
- Clone the Repository
### Building the package
```
mkdir build
cd build
cmake ..
make
```
### Running the package
```
./app/shell-app
```
### Testing the package
```
./test/cpp-test
```
### View code coverage
```
sudo apt-get install lcov [install lcov]
cd build
firefox coverage/index.html` [install firefox]
```  
### Run cppcheck and cpplint
Run cppcheck: Results are stored in `./results/cpp_check.pdf`
```
sh run_cppcheck.sh
```

Run cpplint: Results are stored in `./results/cpplint.pdf`
```
sh run_cpplint.sh
```
### The UML class diagrams

<img alt="UML" src="./PID Class_pair2.png" width="400" />

*Fig 1 :  UML class diagram*



<img alt="Activity" src="./TDD activity diagram(1)_pair2.png" width="500" />

*Fig 2 :  Activity diagram*

