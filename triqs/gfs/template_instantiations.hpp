/*******************************************************************************
 *
 * TRIQS: a Toolbox for Research in Interacting Quantum Systems
 *
 * Copyright (C) 2019 The Simons Foundation
 *    author : N. Wentzell, O. Parcollet
 *
 * TRIQS is free software: you can redistribute it and/or modify it under the
 * terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later
 * version.
 *
 * TRIQS is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * TRIQS. If not, see <http://www.gnu.org/licenses/>.
 *
 ******************************************************************************/

#pragma once

#ifndef EXTERN
#define EXTERN extern
#endif

#define INSTANTIATE(X)                                                                                                                                           \
    EXTERN template class triqs::gfs::gf<X, triqs::gfs::scalar_valued>;                                                                                          \
    EXTERN template class triqs::gfs::gf<X, triqs::gfs::matrix_valued>;                                                                                          \
    EXTERN template class triqs::gfs::gf<X, triqs::gfs::tensor_valued<3>>;                                                                                       \
    EXTERN template class triqs::gfs::gf<X, triqs::gfs::tensor_valued<4>>;                                                                                       \
																				 \
    EXTERN template class triqs::gfs::gf_view<X, triqs::gfs::scalar_valued>;                                                                                     \
    EXTERN template class triqs::gfs::gf_view<X, triqs::gfs::matrix_valued>;                                                                                     \
    EXTERN template class triqs::gfs::gf_view<X, triqs::gfs::tensor_valued<3>>;                                                                                  \
    EXTERN template class triqs::gfs::gf_view<X, triqs::gfs::tensor_valued<4>>;                                                                                  \
                                                                                                                                                                 \
    EXTERN template class triqs::gfs::gf_const_view<X, triqs::gfs::scalar_valued>;                                                                               \
    EXTERN template class triqs::gfs::gf_const_view<X, triqs::gfs::matrix_valued>;                                                                               \
    EXTERN template class triqs::gfs::gf_const_view<X, triqs::gfs::tensor_valued<3>>;                                                                            \
    EXTERN template class triqs::gfs::gf_const_view<X, triqs::gfs::tensor_valued<4>>;                                                                            \
																				 \
    //EXTERN template class triqs::gfs::block_gf<X, triqs::gfs::scalar_valued>;                                                                                    \
    //EXTERN template class triqs::gfs::block_gf<X, triqs::gfs::matrix_valued>;                                                                                    \
    //EXTERN template class triqs::gfs::block_gf<X, triqs::gfs::tensor_valued<3>>;                                                                                 \
    //EXTERN template class triqs::gfs::block_gf<X, triqs::gfs::tensor_valued<4>>;                                                                                 \
																				 //\
    //EXTERN template class triqs::gfs::block2_gf<X, triqs::gfs::scalar_valued>;                                                                                   \
    //EXTERN template class triqs::gfs::block2_gf<X, triqs::gfs::matrix_valued>;                                                                                   \
    //EXTERN template class triqs::gfs::block2_gf<X, triqs::gfs::tensor_valued<3>>;                                                                                \
    //EXTERN template class triqs::gfs::block2_gf<X, triqs::gfs::tensor_valued<4>>;                                                                                \
																				 //\
    //EXTERN template class triqs::gfs::block_gf_view<X, triqs::gfs::scalar_valued>;                                                                               \
    //EXTERN template class triqs::gfs::block_gf_view<X, triqs::gfs::matrix_valued>;                                                                               \
    //EXTERN template class triqs::gfs::block_gf_view<X, triqs::gfs::tensor_valued<3>>;                                                                            \
    //EXTERN template class triqs::gfs::block_gf_view<X, triqs::gfs::tensor_valued<4>>;                                                                            \
																				 //\
    //EXTERN template class triqs::gfs::block2_gf_view<X, triqs::gfs::scalar_valued>;                                                                              \
    //EXTERN template class triqs::gfs::block2_gf_view<X, triqs::gfs::matrix_valued>;                                                                              \
    //EXTERN template class triqs::gfs::block2_gf_view<X, triqs::gfs::tensor_valued<3>>;                                                                           \
    //EXTERN template class triqs::gfs::block2_gf_view<X, triqs::gfs::tensor_valued<4>>;                                                                           \
																				 //\
    //EXTERN template class triqs::gfs::block_gf_const_view<X, triqs::gfs::scalar_valued>;                                                                         \
    //EXTERN template class triqs::gfs::block_gf_const_view<X, triqs::gfs::matrix_valued>;                                                                         \
    //EXTERN template class triqs::gfs::block_gf_const_view<X, triqs::gfs::tensor_valued<3>>;                                                                      \
    //EXTERN template class triqs::gfs::block_gf_const_view<X, triqs::gfs::tensor_valued<4>>;                                                                      \
																				 //\
    //EXTERN template class triqs::gfs::block2_gf_const_view<X, triqs::gfs::scalar_valued>;                                                                        \
    //EXTERN template class triqs::gfs::block2_gf_const_view<X, triqs::gfs::matrix_valued>;                                                                        \
    //EXTERN template class triqs::gfs::block2_gf_const_view<X, triqs::gfs::tensor_valued<3>>;                                                                     \
    //EXTERN template class triqs::gfs::block2_gf_const_view<X, triqs::gfs::tensor_valued<4>>;                                                                     \
 
INSTANTIATE(triqs::gfs::imfreq)
INSTANTIATE(triqs::gfs::refreq)
INSTANTIATE(triqs::gfs::imtime)
INSTANTIATE(triqs::gfs::retime)
INSTANTIATE(triqs::gfs::cyclic_lattice)
INSTANTIATE(triqs::gfs::brillouin_zone)

#define INSTANTIATE2(T)	\
    EXTERN template triqs::gfs::gf<triqs::gfs::brillouin_zone, T> triqs::gfs::make_gf_from_fourier(triqs::gfs::gf_const_view<triqs::gfs::cyclic_lattice, T> gin); \
    EXTERN template triqs::gfs::gf<triqs::gfs::cyclic_lattice, T> triqs::gfs::make_gf_from_fourier(triqs::gfs::gf_const_view<triqs::gfs::brillouin_zone, T> gin); \
  \
    EXTERN template triqs::gfs::gf<triqs::gfs::imfreq, T> triqs::gfs::make_gf_from_fourier(triqs::gfs::gf_const_view<triqs::gfs::imtime, T> gin, int n_tau = -1); \
    EXTERN template triqs::gfs::gf<triqs::gfs::imtime, T> triqs::gfs::make_gf_from_fourier(triqs::gfs::gf_const_view<triqs::gfs::imfreq, T> gin, int n_iw = -1); \
  \
    EXTERN template triqs::gfs::gf<triqs::gfs::refreq, T> triqs::gfs::make_gf_from_fourier(triqs::gfs::gf_const_view<triqs::gfs::retime, T> gin, bool shift_half_bin = false); \
    EXTERN template triqs::gfs::gf<triqs::gfs::retime, T> triqs::gfs::make_gf_from_fourier(triqs::gfs::gf_const_view<triqs::gfs::refreq, T> gin, bool shift_half_bin = false);						 \

//INSTANTIATE2(triqs::gfs::scalar_valued)
//INSTANTIATE2(triqs::gfs::matrix_valued)
//INSTANTIATE2(triqs::gfs::tensor_valued<3>)
//INSTANTIATE2(triqs::gfs::tensor_valued<4>)
