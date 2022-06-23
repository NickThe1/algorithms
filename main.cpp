#include <iostream>
#include "5/search.h"
#include "5/sort.h"
#include "7/data_structure.h"

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

void test_selection_sort(){
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr, n);
    print_array(arr, n);
}

void test_counting_sort(){
    // use 0 to 10 elements only
    int arr[] = {4, 30, 2, 8, 3, 3, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    counting_sort(arr, n);
    print_array(arr, n);
}

void test_radix_sort(){
    int arr[] = { 170, 45, 75, 90, 802, 24, 2, 66 };
    int n = sizeof(arr) / sizeof(arr[0]);
    radix_sort(arr, n);
    print_array(arr, n);
}

void test_merge_sort(){
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    auto n = sizeof(arr) / sizeof(arr[0]);
    merge_sort(arr, 0, n - 1);
    print_array(arr, n);
}

void test_quick_sort(){
    int arr[] = {-10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quick_sort(arr, 0, n - 1);
    print_array(arr, n);
}

void test_heap_sort(){
    int arr[] = {-10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    heap_sort(arr, n);
    print_array(arr, n);
}

int main() {
    test_heap_sort();
    return 0;
}



