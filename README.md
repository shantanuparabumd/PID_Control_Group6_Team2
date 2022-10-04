# PID_Control - Team 2

## Overview

| Group 6| |
|---| --- |
| Team 2 | Team 1 |
| `Bharadwaj Chukkala` (Navigator)| `Anukriti Singh` (Navigator)|
| `Shantanu Suhas Parab` (Driver)| `Sanchit Tanwar` (Driver)|


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
The UML class diagram is as follows :
<img alt="UML" src="./PID Class_pair2.png" width="200" />
*Fig 1 :  UML class diagram*

The activity diagram is as follows : 


<img alt="Activity" src="./TDD activity diagram(1)_pair2.png" width="500" />
*Fig 2 :  Activity diagram*

