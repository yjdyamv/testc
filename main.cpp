#include "hello.hpp"
#include <vector>

int main(int, char**)
{
    std::vector<int> c = { 23, 45, 56, 3412 };
    print_vec_int(c);
    std::vector<int> d = { 23, 45, 56, 3412 };
    print_vec_int(d);
}
