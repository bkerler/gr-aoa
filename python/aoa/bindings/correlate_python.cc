/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(correlate.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(5e1da63ef67c64fbcff53fb4cdd201ec)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/aoa/correlate.h>
// pydoc.h is automatically generated in the build directory
#include <correlate_pydoc.h>

void bind_correlate(py::module& m)
{

    using correlate    = ::gr::aoa::correlate;


    py::class_<correlate, gr::sync_decimator,
        std::shared_ptr<correlate>>(m, "correlate", D(correlate))

        .def(py::init(&correlate::make),
           py::arg("inputs"),
           py::arg("snapshot_size"),
           py::arg("overlap_size"),
           py::arg("avg_method"),
           D(correlate,make)
        )
        



        ;




}








