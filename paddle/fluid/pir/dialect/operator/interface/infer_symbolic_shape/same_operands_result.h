// Copyright (c) 2023 PaddlePaddle Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include "paddle/pir/include/dialect/shape/utils/shape_analysis.h"

namespace paddle::dialect {
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Abs)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Abs_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Acos)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Acos_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Acosh)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Acosh_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Angle)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Argsort)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Asin)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Asin_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Asinh)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Asinh_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Assign)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Assign_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Atan)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Atan_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Atanh)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Atanh_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Bernoulli)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(BitwiseNot)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(BitwiseNot_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Cast)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Cast_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Ceil)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Ceil_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Conj)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Cos)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Cos_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Cosh)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Cosh_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Digamma)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Digamma_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Dirichlet)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Equal)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Equal_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Erf)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Erf_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Erfinv)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Erfinv_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Exp)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Exp_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Expm1)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Expm1_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Exponential_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Fetch)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Flip)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Floor)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Floor_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Imag)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Increment)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Increment_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Isinf)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(IsinfSr)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Isnan)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(IsnanSr)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Lgamma)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Lgamma_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Log1p)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Log1p_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Log)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Log_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(LogicalNot)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(LogicalNot_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Logit)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Logit_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Pow)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Pow_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Print)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(PutAlongAxis)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(PutAlongAxis_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Real)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Relu)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Relu_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Roll)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Round)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Round_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Rsqrt)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Rsqrt_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Scale)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(ScaleSr)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(ScaleSr_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Scale_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(ScatterNdAdd)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Scatter)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Scatter_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Sign)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Sin)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Sin_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Sinh)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Sinh_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Softmax)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Softmax_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Tan)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Tan_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Tanh)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Tanh_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Tril)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Tril_)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Trunc)
OP_DECLARE_INFER_SYMBOLIC_SHAPE(Trunc_)

}  // namespace paddle::dialect

namespace cinn::dialect {
using paddle::dialect::ScaleOpInferSymbolicShape;
}