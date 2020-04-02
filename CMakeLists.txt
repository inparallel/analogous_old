cmake_minimum_required (VERSION 3.15)
project (Analogous)

set (CMAKE_CXX_STANDARD 20)

# Vendor-installed libs
link_directories (vendor/usr/local/lib)
include_directories (vendor/usr/local/include)

# Local include dirs
include_directories (src/libs)

add_subdirectory (src)
add_subdirectory (tests)

enable_testing ()

