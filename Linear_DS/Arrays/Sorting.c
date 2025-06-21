#include<assert.h>
#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void display(const int* arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
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

void selectionSort(int* arr, int size) {
    for (int i = 0; i < size-1; i++) {
        int min_idx = i;
        for (int j = i+1; j < size; j++) {
            if (arr[min_idx] > arr[j]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            swap(arr+i, arr+min_idx);
        }
    }
}

void insertionSort(int* arr, int size) {
    for (int i = 1; i < size; i++) {
        int j = i-1;
        int key = arr[i];
        //move all the elements greater than key to one position
        while (j >= 0 && key < arr[j]) {
            arr[j+1] = arr[j];
            j--;
        }
        // find a correct position for key
        arr[j+1] = key;
    }
}

int partition(int arr[], int lower, int upper) {
    int i = (lower - 1);

    int pivot = arr[upper];

    int j;
    for (j = lower; j < upper; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[upper]);

    return (i+1);
}

void quickSort(int arr[], int lower, int upper) {
    if (upper > lower) {
        int partitionIndex = partition(arr, lower, upper);

        quickSort(arr, lower, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, upper);
    }
}

void test() {
    const int size = 100000;
    // const int size = rand() % 500;  //0 to 499
    int *arr = (int *) calloc(size, sizeof(int));

    for (int i = 0; i < size; i++) {
        arr[i] = (rand() % 100) - 50;   //-50 to 49
    }

    // printf("\nBefore sorting: ");
    // display(arr, size);

    printf("\nSorting started!");
    clock_t start = clock();
    
    // bubbleSort(arr, size);
    // selectionSort(arr, size);
    // insertionSort(arr, size);
    quickSort(arr, 0, size-1);
    // merge_sort(arr, 0, size-1);
    
    clock_t end = clock();
    
    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    
    // printf("\nAfter sorting: ");
    // display(arr, size);

    printf("\nAlgorithm took %.4f seconds to sort %d elements.\n", time_taken, size);

    for (int i = 0; i < size-1; i++) {
        assert(arr[i] <= arr[i+1]);
    }
    free(arr);
}

int main() {
    srand(time(NULL));
    
    test();

    return 0;
}

/*
for 1 lac elements:

1. Bubble Sort - 21.4600
2. Selection Sort - 5.6110
3. Insertion Sort - 4.2270
4. Quick Sort - 0.1650
*/