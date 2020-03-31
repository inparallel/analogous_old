add_library(AnaGdbLib libs/gdb/GdbWrapper.cpp libs/gdb/GdbWrapper.hpp)

include_directories(libs)

add_executable(orchestrator cmd/orchestrator.cpp)
add_executable(micromanager cmd/micromanager.cpp)
add_executable(play cmd/play.cpp)

target_link_libraries (micromanager AnaGdbLib)