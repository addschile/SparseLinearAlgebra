#pragma once

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
CSRMatrix<Numeric>::~CSRMatrix() {}

}
