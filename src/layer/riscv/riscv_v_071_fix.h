// Tencent is pleased to support the open source community by making ncnn available.
//
// Copyright (C) 2021 THL A29 Limited, a Tencent company. All rights reserved.
//
// Licensed under the BSD 3-Clause License (the "License"); you may not use this file except
// in compliance with the License. You may obtain a copy of the License at
//
// https://opensource.org/licenses/BSD-3-Clause
//
// Unless required by applicable law or agreed to in writing, software distributed
// under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
// CONDITIONS OF ANY KIND, either express or implied. See the License for the
// specific language governing permissions and limitations under the License.

#ifndef RISCV_V_071_FIX_H
#define RISCV_V_071_FIX_H

#if __riscv_vector
#include <riscv-vector.h>

typedef unsigned int word_type;

typedef e32xm8_t vbool4_t;
typedef e16xm8_t vbool2_t;

typedef float32xm8_t vfloat32m8_t;
typedef float32xm4_t vfloat32m4_t;
typedef float32xm2_t vfloat32m2_t;
typedef float32xm1_t vfloat32m1_t;

typedef float32x4xm2_t vfloat32m2x4_t;
typedef float32x4xm1_t vfloat32m1x4_t;

typedef float16xm8_t vfloat16m8_t;
typedef float16xm4_t vfloat16m4_t;
typedef float16xm2_t vfloat16m2_t;
typedef float16xm1_t vfloat16m1_t;

typedef float16x4xm2_t vfloat16m2x4_t;
typedef float16x4xm1_t vfloat16m1x4_t;

typedef int32xm8_t vint32m8_t;
typedef int32xm4_t vint32m4_t;
typedef int32xm2_t vint32m2_t;
typedef int32xm1_t vint32m1_t;

typedef int32x8xm1_t vint32m1x8_t;
typedef int32x4xm2_t vint32m2x4_t;
typedef int32x4xm1_t vint32m1x4_t;

typedef int16xm8_t vint16m8_t;
typedef int16xm4_t vint16m4_t;
typedef int16xm2_t vint16m2_t;
typedef int16xm1_t vint16m1_t;

typedef int16x8xm1_t vint16m1x8_t;
typedef int16x4xm2_t vint16m2x4_t;
typedef int16x4xm1_t vint16m1x4_t;

typedef uint32xm8_t vuint32m8_t;
typedef uint32xm4_t vuint32m4_t;
typedef uint32xm2_t vuint32m2_t;
typedef uint32xm1_t vuint32m1_t;

typedef uint32x8xm1_t vuint32m1x8_t;
typedef uint32x4xm2_t vuint32m2x4_t;
typedef uint32x4xm1_t vuint32m1x4_t;

typedef uint16xm8_t vuint16m8_t;
typedef uint16xm4_t vuint16m4_t;
typedef uint16xm2_t vuint16m2_t;
typedef uint16xm1_t vuint16m1_t;

typedef uint16x8xm1_t vuint16m1x8_t;
typedef uint16x4xm2_t vuint16m2x4_t;
typedef uint16x4xm1_t vuint16m1x4_t;

#define vsetvl_e32m8(n) vsetvli(n, RVV_E32, RVV_M8)
#define vsetvl_e32m4(n) vsetvli(n, RVV_E32, RVV_M4)
#define vsetvl_e32m2(n) vsetvli(n, RVV_E32, RVV_M2)
#define vsetvl_e32m1(n) vsetvli(n, RVV_E32, RVV_M1)

#define vsetvl_e16m8(n) vsetvli(n, RVV_E16, RVV_M8)
#define vsetvl_e16m4(n) vsetvli(n, RVV_E16, RVV_M4)
#define vsetvl_e16m2(n) vsetvli(n, RVV_E16, RVV_M2)
#define vsetvl_e16m1(n) vsetvli(n, RVV_E16, RVV_M1)

/******************************** float32 ********************************/
#define vle32_v_f32m8 vlev_float32xm8
#define vse32_v_f32m8 vsev_float32xm8

#define vle32_v_f32m4 vlev_float32xm4
#define vse32_v_f32m4 vsev_float32xm4

#define vle32_v_f32m2 vlev_float32xm2
#define vse32_v_f32m2 vsev_float32xm2

#define vle32_v_f32m1 vlev_float32xm1
#define vse32_v_f32m1 vsev_float32xm1

#define vlseg4e32_v_f32m2x4 vlseg4ev_float32x4xm2
#define vsseg4e32_v_f32m2x4 vsseg4ev_float32x4xm2

#define vlseg4e32_v_f32m1x4 vlseg4ev_float32x4xm1
#define vsseg4e32_v_f32m1x4 vsseg4ev_float32x4xm1

#define vset_f32m2x4       vseg_element_set_float32x4xm2
#define vget_f32m2x4_f32m2 vseg_element_get_float32x4xm2

#define vfmv_v_f_f32m8 vfmvsf_float32xm8
#define vfmv_v_f_f32m4 vfmvsf_float32xm4

#define vfmax_vv_f32m8 vfmaxvv_float32xm8
#define vfmax_vf_f32m8 vfmaxvf_float32xm8
#define vfmin_vv_f32m8 vfminvv_float32xm8
#define vfmin_vf_f32m8 vfminvf_float32xm8

#define vfadd_vv_f32m8  vfaddvv_float32xm8
#define vfadd_vf_f32m8  vfaddvf_float32xm8
#define vfsub_vv_f32m8  vfsubvv_float32xm8
#define vfsub_vf_f32m8  vfsubvf_float32xm8
#define vfmul_vv_f32m8  vfmulvv_float32xm8
#define vfmul_vf_f32m8  vfmulvf_float32xm8
#define vfdiv_vv_f32m8  vfdivvv_float32xm8
#define vfdiv_vf_f32m8  vfdivvf_float32xm8
#define vfrsub_vv_f32m8 vfrsubvv_float32xm8
#define vfrsub_vf_f32m8 vfrsubvf_float32xm8
#define vfrdiv_vv_f32m8 vfrdivvv_float32xm8
#define vfrdiv_vf_f32m8 vfrdivvf_float32xm8

#define vfadd_vf_f32m8_m(mask, merged, a, b, vl) vfaddvf_mask_float32xm8(merged, a, b, mask, vl)
#define vfsub_vf_f32m8_m(mask, merged, a, b, vl) vfsubvf_mask_float32xm8(merged, a, b, mask, vl)
#define vfmul_vf_f32m8_m(mask, merged, a, b, vl) vfmulvf_mask_float32xm8(merged, a, b, mask, vl)

#define vfneg_v_f32m8(x, vl) vfrsubvf_float32xm8(x, 0.f, vl)

#define vfmacc_vf_f32m8  vfmaccvf_float32xm8
#define vfnmsac_vv_f32m8 vfnmsacvv_float32xm8

#define vmfgt_vv_f32m8_b4 vmfgtvv_e32xm8_float32xm8

#define vfcvt_x_f_v_i32m8 vfcvtxfv_int32xm8_float32xm8
#define vfcvt_f_x_v_f32m8 vfcvtfxv_float32xm8_int32xm8

#define vfwcvt_f_f_v_f32m8 vfwcvtffv_float32xm8_float16xm4
#define vfncvt_f_f_w_f16m4 vfncvtffv_float16xm4_float32xm8

#define vreinterpret_v_i32m8_f32m8(x) reinterpret_cast<vfloat32m8_t>(x)

/******************************** float16 ********************************/
#define vle16_v_f16m8 vlev_float16xm8
#define vse16_v_f16m8 vsev_float16xm8

#define vle16_v_f16m4 vlev_float16xm4
#define vse16_v_f16m4 vsev_float16xm4

#define vle16_v_f16m2 vlev_float16xm2
#define vse16_v_f16m2 vsev_float16xm2

#define vle16_v_f16m1 vlev_float16xm1
#define vse16_v_f16m1 vsev_float16xm1

#define vlseg8e16_v_f16m1x8 vlseg8ev_float16x8xm1
#define vsseg8e16_v_f16m1x8 vsseg8ev_float16x8xm1

#define vlseg4e16_v_f16m2x4 vlseg4ev_float16x4xm2
#define vsseg4e16_v_f16m2x4 vsseg4ev_float16x4xm2

#define vlseg4e16_v_f16m1x4 vlseg4ev_float16x4xm1
#define vsseg4e16_v_f16m1x4 vsseg4ev_float16x4xm1

#define vfmv_v_f_f16m8 vfmvsf_float16xm8
#define vfmv_v_f_f16m4 vfmvsf_float16xm4

#define vfmax_vv_f16m8 vfmaxvv_float16xm8
#define vfmax_vf_f16m8 vfmaxvf_float16xm8
#define vfmin_vv_f16m8 vfminvv_float16xm8
#define vfmin_vf_f16m8 vfminvf_float16xm8

#define vfadd_vv_f16m8  vfaddvv_float16xm8
#define vfadd_vf_f16m8  vfaddvf_float16xm8
#define vfsub_vv_f16m8  vfsubvv_float16xm8
#define vfsub_vf_f16m8  vfsubvf_float16xm8
#define vfmul_vv_f16m8  vfmulvv_float16xm8
#define vfmul_vf_f16m8  vfmulvf_float16xm8
#define vfdiv_vv_f16m8  vfdivvv_float16xm8
#define vfdiv_vf_f16m8  vfdivvf_float16xm8
#define vfrsub_vv_f16m8 vfrsubvv_float16xm8
#define vfrsub_vf_f16m8 vfrsubvf_float16xm8
#define vfrdiv_vv_f16m8 vfrdivvv_float16xm8
#define vfrdiv_vf_f16m8 vfrdivvf_float16xm8

#define vfadd_vf_f16m8_m(mask, merged, a, b, vl) vfaddvf_mask_float16xm8(merged, a, b, mask, vl)
#define vfsub_vf_f16m8_m(mask, merged, a, b, vl) vfsubvf_mask_float16xm8(merged, a, b, mask, vl)
#define vfmul_vf_f16m8_m(mask, merged, a, b, vl) vfmulvf_mask_float16xm8(merged, a, b, mask, vl)

#define vfneg_v_f16m8(x, vl) vfrsubvf_float16xm8(x, 0.f, vl)

#define vfmacc_vf_f16m8  vfmaccvf_float16xm8
#define vfnmsac_vv_f16m8 vfnmsacvv_float16xm8

#define vmfgt_vv_f16m8_b2 vmfgtvv_e16xm8_float16xm8

#define vfcvt_x_f_v_i16m8 vfcvtxfv_int16xm8_float16xm8
#define vfcvt_f_x_v_f16m8 vfcvtfxv_float16xm8_int16xm8

#define vreinterpret_v_i16m8_f16m8(x) reinterpret_cast<vfloat16m8_t>(x)

/******************************** int32 ********************************/
#define vadd_vx_i32m8 vaddvx_int32xm8
#define vsll_vx_i32m8 vsllvx_int32xm8

/******************************** int16 ********************************/
#define vadd_vx_i16m8 vaddvx_int16xm8
#define vsll_vx_i16m8 vsllvx_int16xm8

/******************************** uint16 ********************************/
#define vle16_v_u16m8 vlev_uint16xm8
#define vse16_v_u16m8 vsev_uint16xm8

#define vle16_v_u16m4 vlev_uint16xm4
#define vse16_v_u16m4 vsev_uint16xm4

#define vle16_v_u16m2 vlev_uint16xm2
#define vse16_v_u16m2 vsev_uint16xm2

#define vle16_v_u16m1 vlev_uint16xm1
#define vse16_v_u16m1 vsev_uint16xm1

#define vlseg8e16_v_u16m1x8 vlseg8ev_uint16x8xm1
#define vsseg8e16_v_u16m1x8 vsseg8ev_uint16x8xm1

#define vlseg4e16_v_u16m2x4 vlseg4ev_uint16x4xm2
#define vsseg4e16_v_u16m2x4 vsseg4ev_uint16x4xm2

#define vlseg4e16_v_u16m1x4 vlseg4ev_uint16x4xm1
#define vsseg4e16_v_u16m1x4 vsseg4ev_uint16x4xm1

#define vset_u16m2x4       vseg_element_set_uint16x4xm2
#define vget_u16m2x4_u16m2 vseg_element_get_uint16x4xm2

#define vset_u16m1x8       vseg_element_set_uint16x8xm1
#define vget_u16m1x8_u16m1 vseg_element_get_uint16x8xm1

#define vset_u16m1x4       vseg_element_set_uint16x4xm1
#define vget_u16m1x4_u16m1 vseg_element_get_uint16x4xm1

#endif // __riscv_vector

#endif // RISCV_V_071_FIX_H