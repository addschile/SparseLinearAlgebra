#pragma once

#include <algorithm>

namespace SPLA {

template<typename Numeric>
CSCMatrix<Numeric>::CSCMatrix(const std::size_t nrow, const std::size_t ncol, const std::size_t nvalues)
    : SparseMatrixBase<Numeric>(nrow, ncol, nvalues)
{
}

template<typename Numeric>
CSCMatrix<Numeric>::CSCMatrix(const CSCMatrix& spmat)
    : SparseMatrixBase<Numeric>(spmat)
{
}

template<typename Numeric>
CSCMatrix<Numeric>::~CSCMatrix() {}

}
