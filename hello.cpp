#include <iostream>
#include <vector>

void print_vec_int(std::vector<int>& a)
{
    int size = a.size();
    for (int i = 0; i < size; i++) {
        if (i == 0) {
            std::cout << a[i];
        } else {
            std::cout << " " << a[i];
        }
    }
}