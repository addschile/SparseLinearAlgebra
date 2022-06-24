#pragma once

#include <memory>

namespace SPLA {

template<typename Numeric>
class SparseMatrixBase {
    protected:
        std::unique_ptr<Numeric[]> data;
        std::size_t nrows;
        std::size_t ncols;
        std::size_t nvalues;
        void allocate();
    public:
        SparseMatrixBase<Numeric>();
        SparseMatrixBase<Numeric>(const SparseMatrixBase<Numeric> & spmat);
        SparseMatrixBase<Numeric>(const std::size_t nrow, const std::size_t ncol, const std::size_t nvalues);
        ~SparseMatrixBase<Numeric>();
        std::size_t get_rows() const;
        std::size_t get_cols() const;
        std::size_t get_size() const;
        void set_rows(std::size_t m);
        void set_cols(std::size_t m);
        void set_size(std::size_t m);
        Numeric& operator [](std::size_t idx);
};

}

#include "sparse_matrix_base.cpp"
