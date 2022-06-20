#pragma once

#include <memory>
#include <base/sparse_matrix_base>

namespace SPLA {

template<typename Numeric>
class CSRMatrix : public SparseMatrixBase<Numeric> {
    protected:
        std::unique_ptr<size_t []> col_index;
        std::unique_ptr<size_t []> row_index;
    public:
        CSRMatrix<Numeric>();
        CSRMatrix<Numeric>(const size_t nrows, const size_t ncols, const size_t nvalues);
        CSRMatrix<Numeric>(const CSRMatrix & spmat);
        ~CSRMatrix<Numeric>();
};

}

#include "csr_matrix.cpp"
