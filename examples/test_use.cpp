#include <iostream>
#include <base/sparse_matrix_base>

int main()
{
    auto spmat = SPLA::SparseMatrixBase<double>(8, 10, 6);
    auto nrows = spmat.get_rows();
    auto ncols = spmat.get_cols();
    auto nvalues = spmat.get_size();
    std::cout << "The number of rows is " << nrows << std::endl;
    std::cout << "The number of cols is " << ncols << std::endl;
    std::cout << "The number of values is " << nvalues << std::endl;
    std::cout << "The data is currently:" << std::endl;
    for (size_t i=0; i<nvalues; i++){
        std::cout << spmat[i] << std::endl;
    }
    return 0;
}
