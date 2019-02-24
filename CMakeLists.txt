cmake_minimum_required(VERSION 3.0.0)
project(minimal_example)

find_package(PythonInterp 2.7 REQUIRED)
find_package(PythonLibs 2.7 REQUIRED)

find_package(pybind11)
find_package(gazebo REQUIRED)

pybind11_add_module(py_contact_sensor MODULE src/py_contact_sensor.cpp)
target_include_directories(py_contact_sensor PRIVATE ${PYTHON_INCLUDE_DIRS} ${GAZEBO_INCLUDE_DIRS} ${pybind11_INCLUDE_DIRS})
target_link_libraries(py_contact_sensor PRIVATE ${PYTHON_LIBRARIES} ${GAZEBO_LIBRARIES} ${pybind11_LIBRARIES})
