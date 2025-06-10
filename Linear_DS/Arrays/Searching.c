#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int linearSearch(int *arr, int size, int target) {
    for (int i = 0; i < size; i++) {
        if(arr[i] == target) {
            return i;
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

void testLinearSearch() {
    int size;

    printf("\nEnter size of the array: ");
    scanf("%d", &size);

    int arr[size], key;
    
    for (size_t i = 0; i < size; i++) {
        arr[i] = rand() % 10000;
    }
    
    printArray(arr, size);

    printf("\nEnter key: ");
    scanf("%d", &key);

    int result = linearSearch(arr, size, key);

    if(result != -1) {
        printf("\n%d found at %d index", key, result);
    } else {
        printf("\n%d not found", key);
    }
}

int main() {
    srand(time(0));

    testLinearSearch();
    
    return 0;
}