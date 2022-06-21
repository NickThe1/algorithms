#include <iostream>
#include <cmath>
#include "5/search.h"

void test_search_linear(){
    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << search_linear(arr, n, 40) << std::endl;

    std::cout << search_linear(arr, n, 100);
}

void test_binary_search(){
    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << binary_search(arr, n, 4) << std::endl;
    std::cout << binary_search(arr, n, -2) << std::endl;
}

int main() {


    return 0;
}



