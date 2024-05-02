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


struct TORCH_API heaviside_out {
  using schema = at::Tensor & (const at::Tensor &, const at::Tensor &, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::heaviside")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "heaviside.out(Tensor self, Tensor values, *, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Tensor & self, const at::Tensor & values, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & values, at::Tensor & out);
};

struct TORCH_API heaviside {
  using schema = at::Tensor (const at::Tensor &, const at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::heaviside")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "heaviside(Tensor self, Tensor values) -> Tensor")
  static at::Tensor call(const at::Tensor & self, const at::Tensor & values);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & values);
};

struct TORCH_API heaviside_ {
  using schema = at::Tensor & (at::Tensor &, const at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::heaviside_")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "heaviside_(Tensor(a!) self, Tensor values) -> Tensor(a!)")
  static at::Tensor & call(at::Tensor & self, const at::Tensor & values);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & values);
};

}} // namespace at::_ops