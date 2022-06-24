#pragma once

#include <memory>
#include <spla/base/sparse_matrix_base>

namespace SPLA {

template<typename Numeric>
class CSRMatrix : public SparseMatrixBase<Numeric> {
    protected:
        std::unique_ptr<std::size_t []> col_index;
        std::unique_ptr<std::size_t []> row_index;
    public:
        CSRMatrix<Numeric>();
        CSRMatrix<Numeric>(const std::size_t nrows, const std::size_t ncols, const std::size_t nvalues);
        CSRMatrix<Numeric>(const CSRMatrix& spmat);
        ~CSRMatrix<Numeric>();
};

}

#include "csr_matrix.cpp"
