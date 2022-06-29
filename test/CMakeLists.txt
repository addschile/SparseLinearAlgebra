cmake_minimum_required(VERSION 3.14)
project(test)

set(CMAKE_CXX_STANDARD 20)
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

include_directories(
    "/Users/addisonschile/programming/SparseLinearAlgebra"
    "/Users/addisonschile/programming/boost_1_79_0"
)

enable_testing()

add_executable(
  base
  test_base.cpp
)
target_link_libraries(
  base
  gtest_main
)

add_executable(
  csr
  test_csr.cpp
)
target_link_libraries(
  csr
  gtest_main
)

add_executable(
  csc
  test_csc.cpp
)
target_link_libraries(
  csc
  gtest_main
)

add_executable(
  dok
  test_dok.cpp
)
target_link_libraries(
  dok
  gtest_main
)

include(GoogleTest)
gtest_discover_tests(base)
gtest_discover_tests(csr)
gtest_discover_tests(csc)
gtest_discover_tests(dok)
