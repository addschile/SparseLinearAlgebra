#pragma once

#include <algorithm>

namespace SPLA {

template<typename Numeric>
SparseMatrixBase<Numeric>::SparseMatrixBase() {}

template<typename Numeric>
SparseMatrixBase<Numeric>::SparseMatrixBase(const SparseMatrixBase<Numeric> & spmat)
{
    std::size_t nrow = spmat.get_rows();
    std::size_t ncol = spmat.get_cols();
    std::size_t nvalues = spmat.get_size();
    auto spmat_data = spmat.get_data();
    std::copy(spmat_data, spmat_data + nvalues, data);

}

template<typename Numeric>
SparseMatrixBase<Numeric>::SparseMatrixBase(const std::size_t nrow, const std::size_t ncol, const std::size_t nvalues)
{
    this->set_rows(nrow);
    this->set_cols(ncol);
    this->set_size(nvalues);
    this->allocate();
}

template<typename Numeric>
SparseMatrixBase<Numeric>::~SparseMatrixBase() {}

template<typename Numeric>
const std::size_t SparseMatrixBase<Numeric>::get_rows()
{
    return nrows;
}

template<typename Numeric>
const std::size_t SparseMatrixBase<Numeric>::get_cols()
{
    return ncols;
}

template<typename Numeric>
const std::size_t SparseMatrixBase<Numeric>::get_size()
{
    return nvalues;
}

template<typename Numeric>
void SparseMatrixBase<Numeric>::set_rows(std::size_t m)
{
    nrows = m;
}

template<typename Numeric>
void SparseMatrixBase<Numeric>::set_cols(std::size_t m)
{
    ncols = m;
}

template<typename Numeric>
void SparseMatrixBase<Numeric>::set_size(std::size_t m)
{
    nvalues = m;
}

template<typename Numeric>
void SparseMatrixBase<Numeric>::allocate()
{
    data = std::make_unique<Numeric[]>(nvalues);
}

template<typename Numeric>
Numeric SparseMatrixBase<Numeric>::operator [](std::size_t idx)
{
    return (this->data)[idx];
}

}
