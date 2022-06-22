#pragma once

#include <unordered_map>
#include <boost/functional/hash.hpp>

namespace SPLA {


template<typename Numeric>
using IndexPair = std::pair<Numeric, Numeric> ;

template<typename Numeric>
struct IndexPairHash
{
    size_t operator()(IndexPair<Numeric> const& idx_pair) const
    {
        size_t h1 = std::hash<size_t>{}(idx_pair.first);
        size_t h2 = std::hash<size_t>{}(idx_pair.second);
        boost::hash_combine(h1, h2);
        return h1;
    }
};

template<typename Numeric>
using DOKMap = std::unordered_map<IndexPair<Numeric>, Numeric, IndexPairHash<Numeric>>;

template<typename Numeric>
class DOKMatrix {
    protected:
        std::unique_ptr<DOKMap<Numeric> > data;
        void allocate();
    public:
        DOKMatrix<Numeric>();
        ~DOKMatrix<Numeric>();
        Numeric& operator ()(size_t row_idx, size_t col_idx);
        Numeric& operator [](IndexPair<Numeric>&& idx_pair);
        void add_element(size_t row_idx, size_t col_idx, Numeric value);
        void add_element(IndexPair<Numeric>&& idx_pair, Numeric value);
};

}

#include "dok_matrix.cpp"
