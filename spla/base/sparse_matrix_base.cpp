#pragma once

#include <algorithm>

namespace SPLA {

template<typename Numeric>
SparseMatrixBase<Numeric>::SparseMatrixBase() {}

template<typename Numeric>
SparseMatrixBase<Numeric>::SparseMatrixBase(const std::size_t nrow, const std::size_t ncol, const std::size_t nvalues)
{
    this->set_rows(nrow);
    this->set_cols(ncol);
    this->set_size(nvalues);
    this->allocate();
}

template<typename Numeric>
SparseMatrixBase<Numeric>::SparseMatrixBase(const SparseMatrixBase<Numeric> & spmat)
    : SparseMatrixBase<Numeric>(spmat.get_rows(), spmat.get_cols(), spmat.get_size())
{
    for (int i=0; i<this->get_size(); i++){
        (this->data)[i] = spmat[i];
    }
}

template<typename Numeric>
SparseMatrixBase<Numeric>::~SparseMatrixBase() {}

template<typename Numeric>
std::size_t SparseMatrixBase<Numeric>::get_rows() const
{
    return nrows;
}

template<typename Numeric>
std::size_t SparseMatrixBase<Numeric>::get_cols() const
{
    return ncols;
}

template<typename Numeric>
std::size_t SparseMatrixBase<Numeric>::get_size() const
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
Numeric& SparseMatrixBase<Numeric>::operator [](std::size_t idx)
{
    return (this->data)[idx];
}

template<typename Numeric>
Numeric& SparseMatrixBase<Numeric>::operator [](std::size_t idx) const
{
    return (this->data)[idx];
}

}
