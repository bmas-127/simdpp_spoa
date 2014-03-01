/*  libsimdpp
    Copyright (C) 2014  Povilas Kanapickas <povilas@radix.lt>
    All rights reserved.

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions are met:

    * Redistributions of source code must retain the above copyright notice,
      this list of conditions and the following disclaimer.

    * Redistributions in binary form must reproduce the above copyright notice,
      this list of conditions and the following disclaimer in the documentation
      and/or other materials provided with the distribution.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
    AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
    IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
    ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
    LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
    CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
    SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
    INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
    CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
    POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef LIBSIMDPP_SIMDPP_DETAIL_INSN_SET_SPLAT_MEM_IMPL_H
#define LIBSIMDPP_SIMDPP_DETAIL_INSN_SET_SPLAT_MEM_IMPL_H

#ifndef LIBSIMDPP_SIMD_H
    #error "This file must be included through simd.h"
#endif

#include <simdpp/types.h>
#include <simdpp/detail/insn/set_splat.h>

namespace simdpp {
#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace SIMDPP_ARCH_NAMESPACE {
#endif

// The definitions of vector type member functions that accept
// expr_vec_set_splat are only needed if set_splat itself is used. Thus we
// only need include them only if set_splat.h is included

// float32
template<unsigned N> template<class VE>
float32<N>::float32(const expr_vec_set_splat<VE>& e)               { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<unsigned N> template<class VE>
float32<N>& float32<N>::operator=(const expr_vec_set_splat<VE>& e) { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
template<class VE> inline
float32<4>::float32(const expr_vec_set_splat<VE>& e)               { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<class VE> inline
float32<4>& float32<4>::operator=(const expr_vec_set_splat<VE>& e) { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
#if SIMDPP_USE_AVX
template<class VE> inline
float32<8>::float32(const expr_vec_set_splat<VE>& e)               { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<class VE> inline
float32<8>& float32<8>::operator=(const expr_vec_set_splat<VE>& e) { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
#endif

// float64
template<unsigned N> template<class VE>
float64<N>::float64(const expr_vec_set_splat<VE>& e)               { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<unsigned N> template<class VE>
float64<N>& float64<N>::operator=(const expr_vec_set_splat<VE>& e) { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
template<class VE> inline
float64<2>::float64(const expr_vec_set_splat<VE>& e)               { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<class VE> inline
float64<2>& float64<2>::operator=(const expr_vec_set_splat<VE>& e) { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
#if SIMDPP_USE_AVX
template<class VE> inline
float64<4>::float64(const expr_vec_set_splat<VE>& e)               { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<class VE> inline
float64<4>& float64<4>::operator=(const expr_vec_set_splat<VE>& e) { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
#endif

// int8

template<unsigned N> template<class VE>
gint8<N>::gint8(const expr_vec_set_splat<VE>& e)                    { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<unsigned N> template<class VE>
gint8<N>& gint8<N>::operator=(const expr_vec_set_splat<VE>& e)      { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
template<class VE> inline
gint8<16>::gint8(const expr_vec_set_splat<VE>& e)                   { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<class VE> inline
gint8<16>& gint8<16>::operator=(const expr_vec_set_splat<VE>& e)    { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
#if SIMDPP_USE_AVX2
template<class VE> inline
gint8<32>::gint8(const expr_vec_set_splat<VE>& e)                   { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<class VE> inline
gint8<32>& gint8<32>::operator=(const expr_vec_set_splat<VE>& e)    { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
#endif

template<unsigned N> template<class VE>
int8<N>::int8(const expr_vec_set_splat<VE>& e)                      { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<unsigned N> template<class VE>
int8<N>& int8<N>::operator=(const expr_vec_set_splat<VE>& e)        { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
template<class VE> inline
int8<16>::int8(const expr_vec_set_splat<VE>& e)                     { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<class VE> inline
int8<16>& int8<16>::operator=(const expr_vec_set_splat<VE>& e)      { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
#if SIMDPP_USE_AVX2
template<class VE> inline
int8<32>::int8(const expr_vec_set_splat<VE>& e)                     { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<class VE> inline
int8<32>& int8<32>::operator=(const expr_vec_set_splat<VE>& e)      { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
#endif

template<unsigned N> template<class VE>
uint8<N>::uint8(const expr_vec_set_splat<VE>& e)                    { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<unsigned N> template<class VE>
uint8<N>& uint8<N>::operator=(const expr_vec_set_splat<VE>& e)      { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
template<class VE> inline
uint8<16>::uint8(const expr_vec_set_splat<VE>& e)                   { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<class VE> inline
uint8<16>& uint8<16>::operator=(const expr_vec_set_splat<VE>& e)    { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
#if SIMDPP_USE_AVX2
template<class VE> inline
uint8<32>::uint8(const expr_vec_set_splat<VE>& e)                   { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<class VE> inline
uint8<32>& uint8<32>::operator=(const expr_vec_set_splat<VE>& e)    { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
#endif

// int16

template<unsigned N> template<class VE>
gint16<N>::gint16(const expr_vec_set_splat<VE>& e)                  { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<unsigned N> template<class VE>
gint16<N>& gint16<N>::operator=(const expr_vec_set_splat<VE>& e)    { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
template<class VE> inline
gint16<8>::gint16(const expr_vec_set_splat<VE>& e)                  { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<class VE> inline
gint16<8>& gint16<8>::operator=(const expr_vec_set_splat<VE>& e)    { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
#if SIMDPP_USE_AVX2
template<class VE> inline
gint16<16>::gint16(const expr_vec_set_splat<VE>& e)                 { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<class VE> inline
gint16<16>& gint16<16>::operator=(const expr_vec_set_splat<VE>& e)  { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
#endif

template<unsigned N> template<class VE>
int16<N>::int16(const expr_vec_set_splat<VE>& e)                    { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<unsigned N> template<class VE>
int16<N>& int16<N>::operator=(const expr_vec_set_splat<VE>& e)      { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
template<class VE> inline
int16<8>::int16(const expr_vec_set_splat<VE>& e)                    { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<class VE> inline
int16<8>& int16<8>::operator=(const expr_vec_set_splat<VE>& e)      { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
#if SIMDPP_USE_AVX2
template<class VE> inline
int16<16>::int16(const expr_vec_set_splat<VE>& e)                   { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<class VE> inline
int16<16>& int16<16>::operator=(const expr_vec_set_splat<VE>& e)    { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
#endif

template<unsigned N> template<class VE>
uint16<N>::uint16(const expr_vec_set_splat<VE>& e)                  { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<unsigned N> template<class VE>
uint16<N>& uint16<N>::operator=(const expr_vec_set_splat<VE>& e)    { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
template<class VE> inline
uint16<8>::uint16(const expr_vec_set_splat<VE>& e)                  { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<class VE> inline
uint16<8>& uint16<8>::operator=(const expr_vec_set_splat<VE>& e)    { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
#if SIMDPP_USE_AVX2
template<class VE> inline
uint16<16>::uint16(const expr_vec_set_splat<VE>& e)                 { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<class VE> inline
uint16<16>& uint16<16>::operator=(const expr_vec_set_splat<VE>& e)  { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
#endif

// int32

template<unsigned N> template<class VE>
gint32<N>::gint32(const expr_vec_set_splat<VE>& e)               { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<unsigned N> template<class VE>
gint32<N>& gint32<N>::operator=(const expr_vec_set_splat<VE>& e) { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
template<class VE> inline
gint32<4>::gint32(const expr_vec_set_splat<VE>& e)               { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<class VE> inline
gint32<4>& gint32<4>::operator=(const expr_vec_set_splat<VE>& e) { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
#if SIMDPP_USE_AVX2
template<class VE> inline
gint32<8>::gint32(const expr_vec_set_splat<VE>& e)               { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<class VE> inline
gint32<8>& gint32<8>::operator=(const expr_vec_set_splat<VE>& e) { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
#endif

template<unsigned N> template<class VE>
int32<N>::int32(const expr_vec_set_splat<VE>& e)               { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<unsigned N> template<class VE>
int32<N>& int32<N>::operator=(const expr_vec_set_splat<VE>& e) { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
template<class VE> inline
int32<4>::int32(const expr_vec_set_splat<VE>& e)               { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<class VE> inline
int32<4>& int32<4>::operator=(const expr_vec_set_splat<VE>& e) { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
#if SIMDPP_USE_AVX2
template<class VE> inline
int32<8>::int32(const expr_vec_set_splat<VE>& e)               { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<class VE> inline
int32<8>& int32<8>::operator=(const expr_vec_set_splat<VE>& e) { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
#endif

template<unsigned N> template<class VE>
uint32<N>::uint32(const expr_vec_set_splat<VE>& e)               { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<unsigned N> template<class VE>
uint32<N>& uint32<N>::operator=(const expr_vec_set_splat<VE>& e) { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
template<class VE> inline
uint32<4>::uint32(const expr_vec_set_splat<VE>& e)               { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<class VE> inline
uint32<4>& uint32<4>::operator=(const expr_vec_set_splat<VE>& e) { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
#if SIMDPP_USE_AVX2
template<class VE> inline
uint32<8>::uint32(const expr_vec_set_splat<VE>& e)               { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<class VE> inline
uint32<8>& uint32<8>::operator=(const expr_vec_set_splat<VE>& e) { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
#endif

// int64

template<unsigned N> template<class VE>
gint64<N>::gint64(const expr_vec_set_splat<VE>& e)               { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<unsigned N> template<class VE>
gint64<N>& gint64<N>::operator=(const expr_vec_set_splat<VE>& e) { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
template<class VE> inline
gint64<2>::gint64(const expr_vec_set_splat<VE>& e)               { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<class VE> inline
gint64<2>& gint64<2>::operator=(const expr_vec_set_splat<VE>& e) { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
#if SIMDPP_USE_AVX2
template<class VE> inline
gint64<4>::gint64(const expr_vec_set_splat<VE>& e)               { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<class VE> inline
gint64<4>& gint64<4>::operator=(const expr_vec_set_splat<VE>& e) { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
#endif

template<unsigned N> template<class VE>
int64<N>::int64(const expr_vec_set_splat<VE>& e)               { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<unsigned N> template<class VE>
int64<N>& int64<N>::operator=(const expr_vec_set_splat<VE>& e) { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
template<class VE> inline
int64<2>::int64(const expr_vec_set_splat<VE>& e)               { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<class VE> inline
int64<2>& int64<2>::operator=(const expr_vec_set_splat<VE>& e) { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
#if SIMDPP_USE_AVX2
template<class VE> inline
int64<4>::int64(const expr_vec_set_splat<VE>& e)               { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<class VE> inline
int64<4>& int64<4>::operator=(const expr_vec_set_splat<VE>& e) { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
#endif

template<unsigned N> template<class VE>
uint64<N>::uint64(const expr_vec_set_splat<VE>& e)               { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<unsigned N> template<class VE>
uint64<N>& uint64<N>::operator=(const expr_vec_set_splat<VE>& e) { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
template<class VE> inline
uint64<2>::uint64(const expr_vec_set_splat<VE>& e)               { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<class VE> inline
uint64<2>& uint64<2>::operator=(const expr_vec_set_splat<VE>& e) { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
#if SIMDPP_USE_AVX2
template<class VE> inline
uint64<4>::uint64(const expr_vec_set_splat<VE>& e)               { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); }
template<class VE> inline
uint64<4>& uint64<4>::operator=(const expr_vec_set_splat<VE>& e) { detail::insn::i_set_splat(*this, static_cast<element_type>(e.a)); return *this; }
#endif


#ifndef DOXYGEN_SHOULD_SKIP_THIS
} // namespace SIMDPP_ARCH_NAMESPACE
#endif
} // namespace simdpp

#endif
