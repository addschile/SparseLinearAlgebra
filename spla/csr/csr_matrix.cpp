#pragma once

#include <iostream>
#include <algorithm>

namespace SPLA {

template<typename Numeric>
CSRMatrix<Numeric>::CSRMatrix(const std::size_t nrow, const std::size_t ncol, const std::size_t nvalues)
    : SparseMatrixBase<Numeric>(nrow, ncol, nvalues)
{
}

template<typename Numeric>
CSRMatrix<Numeric>::CSRMatrix(const CSRMatrix& spmat)
    : SparseMatrixBase<Numeric>(spmat)
{
}

template<typename Numeric>
CSRMatrix<Numeric>::~CSRMatrix() {}

}
