cmake_minimum_required(VERSION 3.0.0)
project(Cmakelist VERSION 0.1.0)

include(CTest)
enable_testing()

add_library(mymath src/Duration.cpp)
target_include_directories(mymath PUBLIC include)

# define executable named main for experimenting and debugging code
add_executable(main src/main.cpp)
target_link_libraries(main mymath)

# tests are added by declaring a target, in this case 'tests'. additional tests
# can be added by expanding the test cases in 'src/tests.cpp' or an additional
# target via 'add_executable'

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
