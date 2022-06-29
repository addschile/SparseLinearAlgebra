#include <iostream>
#include <spla/base/sparse_matrix_base>
#include "gtest/gtest.h"

namespace {

TEST(TestBase, TestSizeConstructor)
{
    auto spmat   = SPLA::SparseMatrixBase<double>(8, 10, 6);
    auto nrows   = spmat.get_rows();
    auto ncols   = spmat.get_cols();
    auto nvalues = spmat.get_size();
    ASSERT_EQ(nrows,   8);
    ASSERT_EQ(ncols,  10);
    ASSERT_EQ(nvalues, 6);
    for (std::size_t i=0; i<nvalues; i++){
        ASSERT_EQ(spmat[i], 0);
    }
}

} // namespace
