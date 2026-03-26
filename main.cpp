#include <iostream>
#include <vector>

#include "hello.hpp"

int main(int, char**)
{
    std::vector<int> c = {23, 45, 56, 34};
    print_vec_int(c);
    std::vector<int> d = {23, 45, 56, 34};
    print_vec_int(d);
    return 0;
}
