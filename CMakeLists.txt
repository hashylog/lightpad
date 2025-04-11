cmake_minimum_required(VERSION 3.15)
project(lightpad VERSION 1.0.0)

# C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# wxWidgets options
set(wxBUILD_SHARED OFF CACHE BOOL "Build wx libraries as shared libs")
set(wxBUILD_PRECOMP OFF CACHE BOOL "Use precompiled headers")
set(wxBUILD_SAMPLES OFF CACHE BOOL "Build only important samples")
set(wxBUILD_DEMOS OFF CACHE BOOL "Build demo")
set(wxBUILD_TESTS OFF CACHE BOOL "Build tests")
set(wxBUILD_EXAMPLES OFF CACHE BOOL "Build examples")
set(wxBUILD_INSTALL OFF CACHE BOOL "Install wxWidgets")

# Add wxWidgets
add_subdirectory(vendor/wxWidgets)

# Your executable
add_executable(lightpad
    src/main.cpp
)

# Link with wxWidgets
target_link_libraries(lightpad PRIVATE wx::core wx::base wx::stc)