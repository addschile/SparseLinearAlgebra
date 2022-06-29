#include <iostream>
#include <spla/dok/dok_matrix>
#include "gtest/gtest.h"

TEST(TestDOK, TestDOKElementConstruct)
{
    auto spmat = SPLA::DOKMatrix<double>();
    spmat.add_element(8, 10, 1.0);
    auto idx_pair1 = std::pair<size_t, size_t>(8, 10);
    ASSERT_EQ(spmat(8, 10), 1.0);
    ASSERT_EQ(spmat[idx_pair1], 1.0);
    auto idx_pair = std::pair<size_t, size_t>(6, 9);
    spmat.add_element(idx_pair, 2.0);
    ASSERT_EQ(spmat(6, 9), 2.0);
    ASSERT_EQ(spmat[idx_pair], 2.0);
}
