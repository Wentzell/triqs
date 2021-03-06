# Copy h5 files to binary dir
FILE(GLOB all_h5_files RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.h5)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/${all_h5_files} DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

# Test the test!
add_python_test(test_example)

# Many-body operators
add_python_test(operator_python_test)
add_python_test(operator_python2)

# Some basic HDF5 Stuff
add_python_test(hdf5_bool)
add_python_test(hdf5_io)

# Greens functions
add_python_test(gf_imfreq)
add_python_test(gf_block)
add_python_test(gf_init)
add_python_test(gf_density)
add_python_test(gf_base_op)
add_python_test(gf_fourier)
add_python_test(gf_slicing)
add_python_test(g_tau_mul_py)

# a simple dos on square lattice
add_python_test(dos)

# Pade approximation
add_python_test(pade)

# Bug fix #112
add_python_test(gf_inplace_112)

# Bug fix #134
add_python_test(gf_transpose)

# Issue #517
add_python_test(hdf5_meshBZ)

add_python_test(issue460)
add_python_test(issue437)
add_python_test(issue649)
add_python_test(bug_tight_binding)
add_python_test(bug_bcast_mesh)

# Issues with the high frequency moments
add_python_test(tail_issues)

# Add evaluator for g
add_python_test(gf_eval)

# U_matrix
add_python_test(U_mat)

#block matrix
add_python_test(block_matrix)

add_python_test(gf_tensor_valued)

# Histograms
add_python_test(histograms)
add_python_test(histogram_bcast)
add_python_test(brillouin_zone)
