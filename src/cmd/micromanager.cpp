#include <iostream>
#include "gdb/GdbWrapper.hpp"

int main(int argc, char** argv) {
  analogous::gdb::GdbWrapper wrapper({"/usr/bin/dos2unix"});
  std::cout << "Hello, World!" << std::endl;
}
