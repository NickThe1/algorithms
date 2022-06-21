#include <iostream>
#include "5/search.h"
#include "5/sort.h"

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

void print_array(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

void  test_bubble_sort(){
    int arr[] = { 5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, n);
    print_array(arr, n);
}

void test_insertion_sort(){
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    insertion_sort(arr, n);
    print_array(arr, n);
}

int main() {
    test_insertion_sort();
    return 0;
}



