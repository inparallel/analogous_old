#include "GdbWrapper.hpp"

#include <iostream>

#include <boost/algorithm/string/join.hpp>

analogous::gdb::GdbWrapper:: GdbWrapper(const std::vector<std::string>& args) {
  std::vector<std::string> gdb_and_args {"gdb", "--i=mi3"};
  gdb_and_args.insert(gdb_and_args.end(), args.begin(), args.end());

  const std::string command = boost::algorithm::join(gdb_and_args, " ");
  gdb = boost::process::child(command, boost::process::std_out > gdb_out,
      boost::process::std_err > gdb_err, boost::process::std_in < gdb_in);

  std::string line;
  while (gdb.running() && std::getline(gdb_out, line) && !line.empty())
    std::cout << line << std::endl;

  gdb.wait();
}