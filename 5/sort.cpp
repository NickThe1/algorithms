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