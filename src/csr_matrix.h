#pragma once

#include "sparse_matrix_base.h"

typedef unsigned int UINT;

namespace SPLA {

template<typename Numeric>
class CSRMatrix : protected SparseMatrixBase<Numeric> {
    protected:
    public:
        CSRMatrix<Numeric>();
        CSRMatrix<Numeric>(const SparseMatrixBase<Numeric> & spmat);
        CSRMatrix<Numeric>(const CSRMatrix & spmat);
        ~CSRMatrix<Numeric>();
};

}
