#include <pybind11/pybind11.h>

// core_spline
namespace splinepy::py::init {

namespace py = pybind11;

// CORE
void init_core_spline(py::module_&);

// Reader
void init_reader(py::module_&);

// Exporter
void init_exporter(py::module_&);

} // namespace splinepy::py::init

namespace py = pybind11;

PYBIND11_MODULE(splinepy_core, m) {

  splinepy::py::init::init_core_spline(m);
  splinepy::py::init::init_reader(m);
  splinepy::py::init::init_exporter(m);
}
