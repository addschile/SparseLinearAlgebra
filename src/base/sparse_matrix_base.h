#pragma once

#include <memory>

namespace SPLA {

template<typename Numeric>
class SparseMatrixBase {
    protected:
        std::unique_ptr<Numeric[]> data;
        size_t nrows;
        size_t ncols;
        size_t nvalues;
        void allocate();
    public:
        SparseMatrixBase<Numeric>();
        SparseMatrixBase<Numeric>(const SparseMatrixBase<Numeric> & spmat);
        SparseMatrixBase<Numeric>(const size_t nrow, const size_t ncol, const size_t nvalues);
        ~SparseMatrixBase<Numeric>();
        const size_t get_rows();
        const size_t get_cols();
        const size_t get_size();
        void set_rows(size_t m);
        void set_cols(size_t m);
        void set_size(size_t m);
        Numeric operator [](size_t idx);
};

}

#include "sparse_matrix_base.cpp"
