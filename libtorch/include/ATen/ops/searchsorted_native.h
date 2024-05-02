#pragma once

// @generated by torchgen/gen.py from NativeFunction.h

#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>
#include <c10/core/QScheme.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <tuple>
#include <vector>


namespace at {
namespace native {
TORCH_API at::Tensor searchsorted_cpu(const at::Tensor & sorted_sequence, const at::Tensor & self, bool out_int32=false, bool right=false, c10::optional<c10::string_view> side=c10::nullopt, const c10::optional<at::Tensor> & sorter={});
TORCH_API at::Tensor & searchsorted_out_cpu(const at::Tensor & sorted_sequence, const at::Tensor & self, bool out_int32, bool right, c10::optional<c10::string_view> side, const c10::optional<at::Tensor> & sorter, at::Tensor & out);
TORCH_API at::Tensor searchsorted_cuda(const at::Tensor & sorted_sequence, const at::Tensor & self, bool out_int32=false, bool right=false, c10::optional<c10::string_view> side=c10::nullopt, const c10::optional<at::Tensor> & sorter={});
TORCH_API at::Tensor & searchsorted_out_cuda(const at::Tensor & sorted_sequence, const at::Tensor & self, bool out_int32, bool right, c10::optional<c10::string_view> side, const c10::optional<at::Tensor> & sorter, at::Tensor & out);
TORCH_API at::Tensor searchsorted_mps(const at::Tensor & sorted_sequence, const at::Tensor & self, bool out_int32=false, bool right=false, c10::optional<c10::string_view> side=c10::nullopt, const c10::optional<at::Tensor> & sorter={});
TORCH_API at::Tensor & searchsorted_out_mps(const at::Tensor & sorted_sequence, const at::Tensor & self, bool out_int32, bool right, c10::optional<c10::string_view> side, const c10::optional<at::Tensor> & sorter, at::Tensor & out);
TORCH_API at::Tensor searchsorted_cpu(const at::Tensor & sorted_sequence, const at::Scalar & self, bool out_int32=false, bool right=false, c10::optional<c10::string_view> side=c10::nullopt, const c10::optional<at::Tensor> & sorter={});
TORCH_API at::Tensor & searchsorted_out_cpu(const at::Tensor & sorted_sequence, const at::Scalar & self, bool out_int32, bool right, c10::optional<c10::string_view> side, const c10::optional<at::Tensor> & sorter, at::Tensor & out);
TORCH_API at::Tensor searchsorted_cuda(const at::Tensor & sorted_sequence, const at::Scalar & self, bool out_int32=false, bool right=false, c10::optional<c10::string_view> side=c10::nullopt, const c10::optional<at::Tensor> & sorter={});
TORCH_API at::Tensor & searchsorted_out_cuda(const at::Tensor & sorted_sequence, const at::Scalar & self, bool out_int32, bool right, c10::optional<c10::string_view> side, const c10::optional<at::Tensor> & sorter, at::Tensor & out);
TORCH_API at::Tensor searchsorted_mps(const at::Tensor & sorted_sequence, const at::Scalar & self, bool out_int32=false, bool right=false, c10::optional<c10::string_view> side=c10::nullopt, const c10::optional<at::Tensor> & sorter={});
TORCH_API at::Tensor & searchsorted_out_mps(const at::Tensor & sorted_sequence, const at::Scalar & self, bool out_int32, bool right, c10::optional<c10::string_view> side, const c10::optional<at::Tensor> & sorter, at::Tensor & out);
} // namespace native
} // namespace at
