#include <iostream>
#include <dok/dok_matrix>

int main()
{
    auto spmat = SPLA::DOKMatrix<double>();
    spmat.add_element(8, 10, 1.0);
    std::cout << "I just added an element at (8,10) " << spmat(8, 10) << std::endl;

    auto idx_pair = std::pair<size_t, size_t>(6, 9);
    spmat.add_element(idx_pair, 2.0);
    std::cout << "I added another element at (6,9) " << spmat[idx_pair];
    std::cout << " and it used a std::pair!" << std::endl;
    return 0;
}
