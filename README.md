# PID_Control - Team 2

## Overview

| Group | |
|---| --- |
| Team 2 | Team 1 |
| `Bharadwaj Chukkala` | `Anukriti Singh` |
| `Shantanu Suhas Parab` | `Sanchit Tanwar` |


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

