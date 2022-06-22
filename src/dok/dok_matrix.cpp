#pragma once

namespace SPLA {

template<typename Numeric>
DOKMatrix<Numeric>::DOKMatrix() {}

template<typename Numeric>
DOKMatrix<Numeric>::~DOKMatrix() {}

template<typename Numeric>
Numeric& DOKMatrix<Numeric>::operator ()(size_t row_idx, size_t col_idx)
{
    // TODO should this error?
    if (!(this->data)){
        this->allocate();
    }
    return (*this)[std::pair<size_t, size_t>(row_idx, col_idx)];
}

template<typename Numeric>
Numeric& DOKMatrix<Numeric>::operator [](IndexPair<Numeric>&& idx_pair)
{
    // TODO should this error?
    if (!(this->data)){
        this->allocate();
    }
    return (*(this->data))[idx_pair];
}

template<typename Numeric>
void DOKMatrix<Numeric>::add_element(size_t row_idx, size_t col_idx, Numeric value)
{
    if (!(this->data)){
        this->allocate();
    }
    (this->data)->emplace(std::pair<size_t, size_t>(row_idx, col_idx), value);
}

template<typename Numeric>
void DOKMatrix<Numeric>::add_element(IndexPair<Numeric>&& idx_pair, Numeric value)
{
    if (!(this->data)){
        this->allocate();
    }
    (this->data)->emplace(idx_pair, value);
}

template<typename Numeric>
void DOKMatrix<Numeric>::allocate()
{
    data = std::make_unique<DOKMap<Numeric> >();
}

}
