#pragma once
// @generated by torchgen/gen.py from DispatchKeyFunction.h

// NB: The implementing C++ file is RegisterDispatchKey.cpp

// The only #includes we need are for custom classes that have defaults in the C++ API
#include <c10/core/MemoryFormat.h>
#include <c10/core/Scalar.h>
#include <ATen/core/Reduction.h>

// Forward declarations of any types needed in the operator signatures.
// We can't directly include these classes because it will cause circular include dependencies.
// This file is included by TensorBody.h, which defines the Tensor class.
#include <ATen/core/ATen_fwd.h>

namespace at {

namespace mps {

TORCH_API at::Tensor nll_loss2d_backward(const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & target, const c10::optional<at::Tensor> & weight, int64_t reduction, int64_t ignore_index, const at::Tensor & total_weight);
TORCH_API at::Tensor nll_loss2d_backward_symint(const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & target, const c10::optional<at::Tensor> & weight, int64_t reduction, c10::SymInt ignore_index, const at::Tensor & total_weight);
TORCH_API at::Tensor & nll_loss2d_backward_out(at::Tensor & grad_input, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & target, const c10::optional<at::Tensor> & weight, int64_t reduction, int64_t ignore_index, const at::Tensor & total_weight);
TORCH_API at::Tensor & nll_loss2d_backward_outf(const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & target, const c10::optional<at::Tensor> & weight, int64_t reduction, int64_t ignore_index, const at::Tensor & total_weight, at::Tensor & grad_input);
TORCH_API at::Tensor & nll_loss2d_backward_symint_out(at::Tensor & grad_input, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & target, const c10::optional<at::Tensor> & weight, int64_t reduction, c10::SymInt ignore_index, const at::Tensor & total_weight);
TORCH_API at::Tensor & nll_loss2d_backward_symint_outf(const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & target, const c10::optional<at::Tensor> & weight, int64_t reduction, c10::SymInt ignore_index, const at::Tensor & total_weight, at::Tensor & grad_input);

} // namespace mps
} // namespace at
