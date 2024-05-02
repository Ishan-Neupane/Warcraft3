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



#include <ATen/ops/cosh_ops.h>

namespace at {


// aten::cosh(Tensor self) -> Tensor
inline at::Tensor cosh(const at::Tensor & self) {
    return at::_ops::cosh::call(self);
}

// aten::cosh_(Tensor(a!) self) -> Tensor(a!)
inline at::Tensor & cosh_(at::Tensor & self) {
    return at::_ops::cosh_::call(self);
}

// aten::cosh.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & cosh_out(at::Tensor & out, const at::Tensor & self) {
    return at::_ops::cosh_out::call(self, out);
}
// aten::cosh.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & cosh_outf(const at::Tensor & self, at::Tensor & out) {
    return at::_ops::cosh_out::call(self, out);
}

}