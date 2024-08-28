# Trace-Desktop

## Project Overview

**Trace-Desktop** is a desktop application built using C++20, Qt6, and Boost.

## Requirements

- **CMake 3.5+**
- **C++20**
- **Qt6**: Required for UI components and more features.
- **Boost 1.86.0+**: Boost libraries are used in the project for additional utilities.

## Building the Project

### Prerequisites

Ensure you have the following dependencies installed:

- **Qt6**: Install using your package manager or from [Qt's official website](https://www.qt.io/).
- **Boost 1.86.0 or higher**: Install Boost from [Boost's official website](https://www.boost.org/).

### Build Instructions

1. Clone the repository:

   ```bash
    git clone https://github.com/StackTraceSoftware/Trace-Desktop.git
    cd Trace-Desktop
   
2. Create a build directory:
    
    ```bash
    mkdir build
    cd build

3. Run CMake to generate the build files:
    
    ```bash
    cmake ..

4. Build the project:
    
    ```bash
    cmake --build .

### Running the Application

After building the project, you can run the application from the build directory:

    ./Trace-Desktop


### License

This project is licensed under the Apache License 2.0. See the LICENSE file for more details.

### Authors

Nick Menshikov - https://github.com/menshikovnik