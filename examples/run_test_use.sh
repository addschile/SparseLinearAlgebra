echo "Running test_use.cpp"
g++ -std=c++17 -I ../src/ test_use.cpp -o sprun && ./sprun
echo
echo "Running test_csr_use.cpp"
g++ -std=c++17 -I ../src/ test_csr_use.cpp -o sprun && ./sprun
