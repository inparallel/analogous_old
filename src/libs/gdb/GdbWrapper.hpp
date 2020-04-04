#pragma once

#include <vector>
#include <string>
#include <memory>

#include <boost/process.hpp>
#include <boost/process/pipe.hpp>

namespace analogous::gdb {
class GdbWrapper {
  boost::process::child gdb;
  boost::process::opstream gdb_in;
  boost::process::ipstream gdb_out;
  boost::process::ipstream gdb_err;

 public:
  GdbWrapper(const std::vector<std::string>& args);

  GdbWrapper(const GdbWrapper& rhs) = delete;
  GdbWrapper& operator=(const GdbWrapper& rhs) = delete;
};
}
