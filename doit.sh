g++ -o main_test main_test.cpp -fprofile-arcs -ftest-coverage
./main_test 
gcov main_test.cpp 
lcov --capture --directory . --output-file main_coverage.info
genhtml main_coverage.info --output-directory out