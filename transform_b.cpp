// Algorithms - Transform - Binary Operation
// transform_b.cpp
// source: https://ict.senecacollege.ca/~oop345/pages/content/algor.html

// OutputIterator transform(InputIterator f, InputIterator l, InputIterator g, OutputIterator o, Fn b)
// apply the binary operation b to all of the elements within range[f, l) and corresponding element
// starting at g and store the result starting at o

// plus - result of x + y

// This program adds each element in vector a to the corresponding element
// in vector b, stores the results in vector cand displays the contents of
// vector c.

#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>

int main() {
    std::vector<int> a = { 1, 2, 4, 5, 7, 8, 10, 13, 17, 21, 43 };
    std::vector<int> b = { 2, 1, 0, 1, 2, 3, 16, 23, 21, 17, 32 };
    std::vector<int> c(11);
    std::transform(a.begin(), a.end(), b.begin(), c.begin(),
        std::plus<int>());
    for (auto e : c)
        std::cout << e << std::endl;
}