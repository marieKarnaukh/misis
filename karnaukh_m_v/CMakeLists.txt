
cmake_minimum_required (VERSION 3.8)

project ("VectorLib")

include_directories (VectorLibary)

add_subdirectory (VectorLibary)


add_executable (VectorLib.test cat_and_mouse.cpp)

target_link_libraries (VectorLib.test VectorLib)

#if (CMAKE_VERSION VERSION_GREATER 3.12)
#  set_property(TARGET VectorLib PROPERTY CXX_STANDARD 20)
#endif()

