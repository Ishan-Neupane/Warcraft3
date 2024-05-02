#pragma once

// @generated by torchgen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>



#include <ATen/ops/triu_indices_ops.h>

namespace at {


// aten::triu_indices(int row, int col, int offset=0, *, ScalarType? dtype=long, Layout? layout=None, Device? device=None, bool? pin_memory=None) -> Tensor
inline at::Tensor triu_indices(int64_t row, int64_t col, int64_t offset=0, at::TensorOptions options=at::kLong) {
    return at::_ops::triu_indices::call(row, col, offset, c10::optTypeMetaToScalarType(options.dtype_opt()), options.layout_opt(), options.device_opt(), options.pinned_memory_opt());
}
// aten::triu_indices(int row, int col, int offset=0, *, ScalarType? dtype=long, Layout? layout=None, Device? device=None, bool? pin_memory=None) -> Tensor
inline at::Tensor triu_indices(int64_t row, int64_t col, int64_t offset, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
    return at::_ops::triu_indices::call(row, col, offset, dtype, layout, device, pin_memory);
}

// aten::triu_indices.out(int row, int col, int offset=0, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & triu_indices_out(at::Tensor & out, int64_t row, int64_t col, int64_t offset=0) {
    return at::_ops::triu_indices_out::call(row, col, offset, out);
}
// aten::triu_indices.out(int row, int col, int offset=0, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & triu_indices_outf(int64_t row, int64_t col, int64_t offset, at::Tensor & out) {
    return at::_ops::triu_indices_out::call(row, col, offset, out);
}

}
