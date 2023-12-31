/*
Created by Jippe Heijnen on 31-10-23.

* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/

#include <pybind11/pybind11.h>

namespace py = pybind11;

void init_VEML6075(py::module &);
void init_TMC2209(py::module &);

namespace mcl {

    PYBIND11_MODULE(atp_cplusplus, m) {
        // Optional docstring
        m.doc() = "ATP library";

        init_VEML6075(m);
        init_TMC2209(m);
    }
}