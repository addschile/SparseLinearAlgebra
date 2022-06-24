#include <iostream>
#include <spla/csr/csr_matrix>

int main()
{
    auto spmat   = SPLA::CSRMatrix<double>(8, 10, 6);
    auto nrows   = spmat.get_rows();
    auto ncols   = spmat.get_cols();
    auto nvalues = spmat.get_size();
    std::cout << "The number of rows is "   << nrows   << std::endl;
    std::cout << "The number of cols is "   << ncols   << std::endl;
    std::cout << "The number of values is " << nvalues << std::endl;
    std::cout << "The data is currently:"              << std::endl;
    for (size_t i=0; i<nvalues; i++){
        std::cout << spmat[i] << std::endl;
        spmat[i] = i;
    }

    std::cout << "Copying the matrix" << std::endl;
    auto new_spmat   = SPLA::CSRMatrix<double>(spmat);
    auto new_nrows   = new_spmat.get_rows();
    auto new_ncols   = new_spmat.get_cols();
    auto new_nvalues = new_spmat.get_size();
    std::cout << "The number of rows is "   << new_nrows   << std::endl;
    std::cout << "The number of cols is "   << new_ncols   << std::endl;
    std::cout << "The number of values is " << new_nvalues << std::endl;
    std::cout << "The data is currently:"                  << std::endl;
    for (size_t i=0; i<nvalues; i++){
        std::cout << new_spmat[i] << std::endl;
    }

    return 0;
}
