#include <iostream>
#include <vector>

void print_vec_int(std::vector<int>& a)
{
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        std::cout << a[i] << " \n"[i == size - 1];
    }
}