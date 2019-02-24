In file included from /home/artur/catkin_ws/src/minimal_example/src/py_contact_sensor.cpp:1:0:
/usr/local/include/pybind11/pybind11.h: In instantiation of ‘static void pybind11::class_<type_, options>::init_holder(pybind11::detail::instance*, pybind11::detail::value_and_holder&, const holder_type*, const std::enable_shared_from_this<_Tp1>*) [with T = gazebo::sensors::Sensor; type_ = gazebo::sensors::ContactSensor; options = {}; pybind11::class_<type_, options>::holder_type = std::unique_ptr<gazebo::sensors::ContactSensor, std::default_delete<gazebo::sensors::ContactSensor> >]’:
/usr/local/include/pybind11/pybind11.h:1317:20:   required from ‘static void pybind11::class_<type_, options>::init_instance(pybind11::detail::instance*, const void*) [with type_ = gazebo::sensors::ContactSensor; options = {}]’
/usr/local/include/pybind11/pybind11.h:1053:30:   required from ‘pybind11::class_<type_, options>::class_(pybind11::handle, const char*, const Extra& ...) [with Extra = {}; type_ = gazebo::sensors::ContactSensor; options = {}]’
/home/artur/catkin_ws/src/minimal_example/src/py_contact_sensor.cpp:8:68:   required from here
/usr/local/include/pybind11/pybind11.h:1274:17: error: no matching function for call to ‘std::unique_ptr<gazebo::sensors::ContactSensor, std::default_delete<gazebo::sensors::ContactSensor> >::unique_ptr(std::remove_reference<std::shared_ptr<gazebo::sensors::ContactSensor>&>::type)’
                 new (&v_h.holder<holder_type>()) holder_type(std::move(sh));
                 ^
In file included from /usr/include/c++/5/memory:81:0,
                 from /usr/local/include/pybind11/detail/common.h:145,
                 from /usr/local/include/pybind11/pytypes.h:12,
                 from /usr/local/include/pybind11/cast.h:13,
                 from /usr/local/include/pybind11/attr.h:13,
                 from /usr/local/include/pybind11/pybind11.h:43,
                 from /home/artur/catkin_ws/src/minimal_example/src/py_contact_sensor.cpp:1:
/usr/include/c++/5/bits/unique_ptr.h:228:2: note: candidate: template<class _Up, class> std::unique_ptr<_Tp, _Dp>::unique_ptr(std::auto_ptr<_Up>&&)
  unique_ptr(auto_ptr<_Up>&& __u) noexcept;
  ^
/usr/include/c++/5/bits/unique_ptr.h:228:2: note:   template argument deduction/substitution failed:
In file included from /home/artur/catkin_ws/src/minimal_example/src/py_contact_sensor.cpp:1:0:
/usr/local/include/pybind11/pybind11.h:1274:17: note:   ‘std::remove_reference<std::shared_ptr<gazebo::sensors::ContactSensor>&>::type {aka std::shared_ptr<gazebo::sensors::ContactSensor>}’ is not derived from ‘std::auto_ptr<_Up>’
                 new (&v_h.holder<holder_type>()) holder_type(std::move(sh));
                 ^
In file included from /usr/include/c++/5/memory:81:0,
                 from /usr/local/include/pybind11/detail/common.h:145,
                 from /usr/local/include/pybind11/pytypes.h:12,
                 from /usr/local/include/pybind11/cast.h:13,
                 from /usr/local/include/pybind11/attr.h:13,
                 from /usr/local/include/pybind11/pybind11.h:43,
                 from /home/artur/catkin_ws/src/minimal_example/src/py_contact_sensor.cpp:1:
/usr/include/c++/5/bits/unique_ptr.h:220:2: note: candidate: template<class _Up, class _Ep, class> std::unique_ptr<_Tp, _Dp>::unique_ptr(std::unique_ptr<_Up, _Ep>&&)
  unique_ptr(unique_ptr<_Up, _Ep>&& __u) noexcept
  ^
/usr/include/c++/5/bits/unique_ptr.h:220:2: note:   template argument deduction/substitution failed:
In file included from /home/artur/catkin_ws/src/minimal_example/src/py_contact_sensor.cpp:1:0:
/usr/local/include/pybind11/pybind11.h:1274:17: note:   ‘std::remove_reference<std::shared_ptr<gazebo::sensors::ContactSensor>&>::type {aka std::shared_ptr<gazebo::sensors::ContactSensor>}’ is not derived from ‘std::unique_ptr<_Tp, _Dp>’
                 new (&v_h.holder<holder_type>()) holder_type(std::move(sh));
                 ^
In file included from /usr/include/c++/5/memory:81:0,
                 from /usr/local/include/pybind11/detail/common.h:145,
                 from /usr/local/include/pybind11/pytypes.h:12,
                 from /usr/local/include/pybind11/cast.h:13,
                 from /usr/local/include/pybind11/attr.h:13,
                 from /usr/local/include/pybind11/pybind11.h:43,
                 from /home/artur/catkin_ws/src/minimal_example/src/py_contact_sensor.cpp:1:
/usr/include/c++/5/bits/unique_ptr.h:205:7: note: candidate: std::unique_ptr<_Tp, _Dp>::unique_ptr(std::unique_ptr<_Tp, _Dp>&&) [with _Tp = gazebo::sensors::ContactSensor; _Dp = std::default_delete<gazebo::sensors::ContactSensor>]
       unique_ptr(unique_ptr&& __u) noexcept
       ^
/usr/include/c++/5/bits/unique_ptr.h:205:7: note:   no known conversion for argument 1 from ‘std::remove_reference<std::shared_ptr<gazebo::sensors::ContactSensor>&>::type {aka std::shared_ptr<gazebo::sensors::ContactSensor>}’ to ‘std::unique_ptr<gazebo::sensors::ContactSensor, std::default_delete<gazebo::sensors::ContactSensor> >&&’
/usr/include/c++/5/bits/unique_ptr.h:200:17: note: candidate: constexpr std::unique_ptr<_Tp, _Dp>::unique_ptr(std::nullptr_t) [with _Tp = gazebo::sensors::ContactSensor; _Dp = std::default_delete<gazebo::sensors::ContactSensor>; std::nullptr_t = std::nullptr_t]
       constexpr unique_ptr(nullptr_t) noexcept : unique_ptr() { }
                 ^
/usr/include/c++/5/bits/unique_ptr.h:200:17: note:   no known conversion for argument 1 from ‘std::remove_reference<std::shared_ptr<gazebo::sensors::ContactSensor>&>::type {aka std::shared_ptr<gazebo::sensors::ContactSensor>}’ to ‘std::nullptr_t’
/usr/include/c++/5/bits/unique_ptr.h:193:7: note: candidate: std::unique_ptr<_Tp, _Dp>::unique_ptr(std::unique_ptr<_Tp, _Dp>::pointer, typename std::remove_reference<_To>::type&&) [with _Tp = gazebo::sensors::ContactSensor; _Dp = std::default_delete<gazebo::sensors::ContactSensor>; std::unique_ptr<_Tp, _Dp>::pointer = gazebo::sensors::ContactSensor*; typename std::remove_reference<_To>::type = std::default_delete<gazebo::sensors::ContactSensor>]
       unique_ptr(pointer __p,
       ^
/usr/include/c++/5/bits/unique_ptr.h:193:7: note:   candidate expects 2 arguments, 1 provided
/usr/include/c++/5/bits/unique_ptr.h:181:7: note: candidate: std::unique_ptr<_Tp, _Dp>::unique_ptr(std::unique_ptr<_Tp, _Dp>::pointer, typename std::conditional<std::is_reference<_Dp>::value, _Dp, const _Dp&>::type) [with _Tp = gazebo::sensors::ContactSensor; _Dp = std::default_delete<gazebo::sensors::ContactSensor>; std::unique_ptr<_Tp, _Dp>::pointer = gazebo::sensors::ContactSensor*; typename std::conditional<std::is_reference<_Dp>::value, _Dp, const _Dp&>::type = const std::default_delete<gazebo::sensors::ContactSensor>&]
       unique_ptr(pointer __p,
       ^
/usr/include/c++/5/bits/unique_ptr.h:181:7: note:   candidate expects 2 arguments, 1 provided
/usr/include/c++/5/bits/unique_ptr.h:169:7: note: candidate: std::unique_ptr<_Tp, _Dp>::unique_ptr(std::unique_ptr<_Tp, _Dp>::pointer) [with _Tp = gazebo::sensors::ContactSensor; _Dp = std::default_delete<gazebo::sensors::ContactSensor>; std::unique_ptr<_Tp, _Dp>::pointer = gazebo::sensors::ContactSensor*]
       unique_ptr(pointer __p) noexcept
       ^
/usr/include/c++/5/bits/unique_ptr.h:169:7: note:   no known conversion for argument 1 from ‘std::remove_reference<std::shared_ptr<gazebo::sensors::ContactSensor>&>::type {aka std::shared_ptr<gazebo::sensors::ContactSensor>}’ to ‘std::unique_ptr<gazebo::sensors::ContactSensor, std::default_delete<gazebo::sensors::ContactSensor> >::pointer {aka gazebo::sensors::ContactSensor*}’
/usr/include/c++/5/bits/unique_ptr.h:157:17: note: candidate: constexpr std::unique_ptr<_Tp, _Dp>::unique_ptr() [with _Tp = gazebo::sensors::ContactSensor; _Dp = std::default_delete<gazebo::sensors::ContactSensor>]
       constexpr unique_ptr() noexcept
                 ^
/usr/include/c++/5/bits/unique_ptr.h:157:17: note:   candidate expects 0 arguments, 1 provided
make[2]: *** [CMakeFiles/py_contact_sensor.dir/src/py_contact_sensor.cpp.o] Error 1
make[1]: *** [CMakeFiles/py_contact_sensor.dir/all] Error 2
make: *** [all] Error 2
