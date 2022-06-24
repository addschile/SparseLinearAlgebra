#pragma once

#include <memory>
#include <base/sparse_matrix_base>

namespace SPLA {

template<typename Numeric>
class CSCMatrix : public SparseMatrixBase<Numeric> {
    protected:
        std::unique_ptr<std::size_t []> col_index;
        std::unique_ptr<std::size_t []> row_index;
    public:
        CSCMatrix<Numeric>();
        CSCMatrix<Numeric>(const std::size_t nrows, const std::size_t ncols, const std::size_t nvalues);
        CSCMatrix<Numeric>(const CSCMatrix & spmat);
        ~CSCMatrix<Numeric>();
};

}

#include "csc_matrix.cpp"
