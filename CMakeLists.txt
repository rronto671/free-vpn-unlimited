cmake_minimum_required(VERSION 3.16)
project(free-vpn-unlimited CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(freevpnunlimited
    src/main.cpp
    src/tunnel.cpp
    src/profiles.cpp
    src/watchdog.cpp
    src/cli.cpp
)

target_include_directories(freevpnunlimited PRIVATE include)

if(WIN32)
    target_link_libraries(freevpnunlimited PRIVATE userenv)
endif()
