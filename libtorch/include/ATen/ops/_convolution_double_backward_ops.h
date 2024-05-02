#pragma once

// @generated by torchgen/gen.py from Operator.h

#include <tuple>
#include <vector>

// Forward declarations of any types needed in the operator signatures.
// We can't directly include these classes because it will cause circular include dependencies.
// This file is included by TensorBody.h, which defines the Tensor class.
#include <ATen/core/ATen_fwd.h>

namespace at {
namespace _ops {


struct TORCH_API _convolution_double_backward {
  using schema = ::std::tuple<at::Tensor,at::Tensor,at::Tensor> (const c10::optional<at::Tensor> &, const c10::optional<at::Tensor> &, const c10::optional<at::Tensor> &, const at::Tensor &, const at::Tensor &, const at::Tensor &, c10::SymIntArrayRef, c10::SymIntArrayRef, c10::SymIntArrayRef, bool, c10::SymIntArrayRef, c10::SymInt, ::std::array<bool,3>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_convolution_double_backward")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_convolution_double_backward(Tensor? ggI, Tensor? ggW, Tensor? ggb, Tensor gO, Tensor weight, Tensor self, SymInt[] stride, SymInt[] padding, SymInt[] dilation, bool transposed, SymInt[] output_padding, SymInt groups, bool[3] output_mask) -> (Tensor, Tensor, Tensor)")
  static ::std::tuple<at::Tensor,at::Tensor,at::Tensor> call(const c10::optional<at::Tensor> & ggI, const c10::optional<at::Tensor> & ggW, const c10::optional<at::Tensor> & ggb, const at::Tensor & gO, const at::Tensor & weight, const at::Tensor & self, c10::SymIntArrayRef stride, c10::SymIntArrayRef padding, c10::SymIntArrayRef dilation, bool transposed, c10::SymIntArrayRef output_padding, c10::SymInt groups, ::std::array<bool,3> output_mask);
  static ::std::tuple<at::Tensor,at::Tensor,at::Tensor> redispatch(c10::DispatchKeySet dispatchKeySet, const c10::optional<at::Tensor> & ggI, const c10::optional<at::Tensor> & ggW, const c10::optional<at::Tensor> & ggb, const at::Tensor & gO, const at::Tensor & weight, const at::Tensor & self, c10::SymIntArrayRef stride, c10::SymIntArrayRef padding, c10::SymIntArrayRef dilation, bool transposed, c10::SymIntArrayRef output_padding, c10::SymInt groups, ::std::array<bool,3> output_mask);
};

}} // namespace at::_ops
