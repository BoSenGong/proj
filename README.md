# proj

1. Install Cmake  (cmake version 3.26.0-rc3)
2. Install Mingw  (gcc version 6.3.0) (MinGW.org GCC-6.3.0-1)
3. Install Boost C++ Libraries (boost version 1.81.0)
4. Change paths and variables in CMakeList.txt
    ```
    project(proj)   //project name : proj

    set(CMAKE_CXX_FLAGS "-g ${CMAKE_CXX_FLAGS}")  //CPP compile option : -g
    set(CMAKE_C_FLAGS "-std=gnu99 ${CMAKE_C_FLAGS}")  //C compile option : -std=gnu99

    set(BOOST_ROOT "C:/Boost/boost_1_81_0") // setup Boost Path
    
    ```
5. Add boost path in .vscode/c_cpp_properties.json 
    ```
    "includePath": [
                "${workspaceFolder}/**",
                "C:/Boost/boost_1_81_0"
            ],
    ```
