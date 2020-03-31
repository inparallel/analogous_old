include_directories(${Analogous_SOURCE_DIR}/src/libs
        ${Analogous_SOURCE_DIR}/extern)

add_executable(GdbWrapperTest GdbWrapperTest.cpp MainTest.cpp)