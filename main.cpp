#include "hello.hpp"
#include <fmt/base.h>
#include <fmt/os.h>
#include <iostream>
#include <vector>

int main(int, char**)
{
    std::cout << "Hello, from testc!\n";
    int a = 3;
    int b = 45;
    a = 34;
    for (int i = 0; i < 5; i++) {
        fmt::println("{}", i);
    }
    std::vector<int> c = { 23, 45, 56, 3412 };
    print_vec_int(c);
    std::vector<int> d = { 23, 45, 56, 3412 };
    print_vec_int(d);
}
