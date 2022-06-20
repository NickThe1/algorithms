//
// Created by 1 on 20.06.2022.
//
#include <iostream>
#include "search.h"

// return index of searching element
int search_linear(const int arr[], int size, int element_to_search){
    for (int i = 0; i < size; ++i){
        if (arr[i] == element_to_search) return i;
    }
    return -1;
}

int binary_search(const int arr[], int size, int element_to_search){
    int left = 0;
    int right = size - 1;

    while (left <= right){
        int middle = left + (right - left) / 2;

        if (arr[middle] == element_to_search) return middle;

        if (arr[middle] < element_to_search) left = middle + 1;
        else right = middle - 1;
    }

    return -1;
}