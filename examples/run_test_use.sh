export CXX=g++

echo "Running test_use.cpp"
$CXX -std=c++17 -I ../ test_use.cpp -o sprun && ./sprun
echo

echo "Running test_csr_use.cpp"
$CXX -std=c++17 -I ../ test_csr_use.cpp -o sprun && ./sprun
echo

export BOOST=$HOME/programming/boost_1_79_0/
echo "Running test_dok_use.cpp"
$CXX -std=c++17 -I ../ -I $BOOST test_dok_use.cpp -o sprun && ./sprun
echo
