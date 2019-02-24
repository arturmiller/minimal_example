#include <pybind11/pybind11.h>
#include <gazebo/sensors/sensors.hh>


namespace py = pybind11;

PYBIND11_MODULE(py_contact_sensor, m) {
    py::class_<gazebo::sensors::ContactSensor, std::shared_ptr<gazebo::sensors::ContactSensor>>(m, "PyContactSensor");
}

