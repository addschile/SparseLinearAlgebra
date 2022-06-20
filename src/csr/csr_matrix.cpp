#pragma once

#include <algorithm>

namespace SPLA {

template<typename Numeric>
CSRMatrix<Numeric>::CSRMatrix() {}

//template<typename Numeric>
//CSRMatrix<Numeric>::CSRMatrix(const CSRMatrix<Numeric> & spmat)
//{
//    this->set_rows(spmat.get_rows());
//    this->set_cols(spmat.get_cols());
//    this->set_size(spmat.get_size());
//    auto spmat_data = spmat.get_data();
//    std::copy(spmat_data, spmat_data + nvalues, data);
//}

template<typename Numeric>
CSRMatrix<Numeric>::CSRMatrix(const size_t nrow, const size_t ncol, const size_t nvalues)
{
    this->set_rows(nrow);
    this->set_cols(ncol);
    this->set_size(nvalues);
    this->allocate();
}

template<typename Numeric>
CSRMatrix<Numeric>::~CSRMatrix() {}

}
