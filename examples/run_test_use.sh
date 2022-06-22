echo "Running test_use.cpp"
g++ -std=c++17 -I ../src/ test_use.cpp -o sprun && ./sprun
echo

echo "Running test_csr_use.cpp"
g++ -std=c++17 -I ../src/ test_csr_use.cpp -o sprun && ./sprun
echo

export BOOST=$HOME/programming/boost_1_79_0/
echo "Running test_dok_use.cpp"
g++ -std=c++17 -I ../src/ -I $BOOST test_dok_use.cpp -o sprun && ./sprun
echo
