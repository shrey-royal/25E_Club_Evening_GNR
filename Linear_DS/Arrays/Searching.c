#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int linearSearch(int *arr, int size, int target) {
    for (int i = 0; i < size; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}

void swap(int* first, int* second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}

void bubbleSort(int* arr, int size) {
    for (int i = 0; i < size-1; i++) {
        bool swapped = false;
        for (int j = 0; j < size-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

int binarySearch(int* arr, int low, int high, int target) {
    if (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        if (arr[mid] > target) {
            return binarySearch(arr, low, mid-1, target);
        } else {
            return binarySearch(arr, mid+1, high, target);
        }
    }
    return -1;
}

void printArray(int *arr, int size) {
    printf("\nArray elements: { ");
    for (int i = 0; i < size; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\b\b }");
}

void test() {
    int size;

    printf("\nEnter size of the array: ");
    scanf("%d", &size);

    int arr[size], key;
    
    for (size_t i = 0; i < size; i++) {
        arr[i] = rand() % 10000;
    }

    bubbleSort(arr, size);
    printArray(arr, size);

    printf("\nEnter key: ");
    scanf("%d", &key);

    // int result = linearSearch(arr, size, key);
    int result = binarySearch(arr, 0, size-1, key);

    if(result != -1) {
        printf("\n%d found at %d index", key, result);
    } else {
        printf("\n%d not found", key);
    }
}

int main() {
    srand(time(0));

    test();
    
    return 0;
}