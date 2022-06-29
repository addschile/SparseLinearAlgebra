#include <iostream>
#include <spla/csc/csc_matrix>
#include "gtest/gtest.h"

namespace {

TEST(TestCSC, TestSizeConstructor)
{
    auto spmat   = SPLA::CSCMatrix<double>(8, 10, 6);
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

TEST(TestCSC, TestCopyConstructor)
{
    auto spmat     = SPLA::CSCMatrix<double>(8, 10, 6);
    auto new_spmat = SPLA::CSCMatrix<double>(spmat);
    auto nrows     = new_spmat.get_rows();
    auto ncols     = new_spmat.get_cols();
    auto nvalues   = new_spmat.get_size();
    ASSERT_EQ(nrows,   8);
    ASSERT_EQ(ncols,  10);
    ASSERT_EQ(nvalues, 6);
    for (std::size_t i=0; i<nvalues; i++){
        ASSERT_EQ(spmat[i], 0);
    }
}

} // namespace
