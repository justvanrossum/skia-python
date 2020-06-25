#include "common.h"

void initGrContext_mock(py::module &m) {

py::class_<GrMockTextureInfo>(m, "GrMockTextureInfo")
    .def(py::init<>())
    .def(py::init<GrColorType, SkImage::CompressionType, int>())
    .def("__eq__", &GrMockTextureInfo::operator==, py::is_operator())
    .def("getBackendFormat", &GrMockTextureInfo::getBackendFormat)
    .def("compressionType", &GrMockTextureInfo::compressionType)
    .def("colorType", &GrMockTextureInfo::colorType)
    .def("id", &GrMockTextureInfo::id)
    ;

py::class_<GrMockRenderTargetInfo>(m, "GrMockRenderTargetInfo")
    .def(py::init<>())
    .def(py::init<GrColorType, int>())
    .def("__eq__", &GrMockRenderTargetInfo::operator==, py::is_operator())
    .def("getBackendFormat", &GrMockRenderTargetInfo::getBackendFormat)
    .def("colorType", &GrMockRenderTargetInfo::colorType)
    ;

py::class_<GrMockOptions>(m, "GrMockOptions")
    .def(py::init<>())
    // TODO: Implement me!
    ;

}