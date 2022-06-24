#pragma once

#include <iostream>
#include <algorithm>

namespace SPLA {

template<typename Numeric>
CSRMatrix<Numeric>::CSRMatrix() {}

template<typename Numeric>
CSRMatrix<Numeric>::CSRMatrix(const std::size_t nrow, const std::size_t ncol, const std::size_t nvalues)
{
    this->set_rows(nrow);
    this->set_cols(ncol);
    this->set_size(nvalues);
    this->allocate();
}

template<typename Numeric>
CSRMatrix<Numeric>::CSRMatrix(const CSRMatrix& spmat)
{
    this->set_rows(spmat.get_rows());
    this->set_cols(spmat.get_cols());
    this->set_size(spmat.get_size());
    this->allocate();
    for (int i=0; i<this->get_size(); i++){
        (this->data)[i] = spmat[i];
    }
}

template<typename Numeric>
CSRMatrix<Numeric>::~CSRMatrix() {}

}
