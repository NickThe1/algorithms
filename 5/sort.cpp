//
// Created by 1 on 20.06.2022.
//

#include <iostream>

void bubble_sort(int arr[], int size){
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void insertion_sort(int arr[], int size){
    for (int i = 1 ; i < size; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

void selection_sort(int arr[], int size){
    for (int i = 0; i < size; ++i) {
        int local_min = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[local_min]) local_min = j;
            if (local_min != i) std::swap(arr[i], arr[local_min]);
        }
    }
}

void counting_sort(int arr[], int size){
    // The size of count must be at least the (max+1) but
    // we cannot assign declare it as int count(max+1) in C++ as
    // it does not support dynamic memory allocation.
    // So, its size is provided statically.
    int output[10];
    int count[10];
    int max = arr[0];

    // Find the largest element of the array
    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    // Initialize count array with all zeros.
    for (int i = 0; i <= max; ++i) {
        count[i] = 0;
    }

    // Store the count of each element
    for (int i = 0; i < size; i++) {
        count[arr[i]]++;
    }

    // Store the cummulative count of each array
    for (int i = 1; i <= max; i++) {
        count[i] += count[i - 1];
    }

    // Find the index of each element of the original array in count array, and
    // place the elements in output array
    for (int i = size - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // Copy the sorted elements into original array
    for (int i = 0; i < size; i++) {
        arr[i] = output[i];
    }
}