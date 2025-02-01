// Language: C
// Solution 1: Bubble Sort Algorithm 
// Time: Worst - O(N^2), Avg - O(N^2), Best - O(N)
// Space: O(1)

#include <stdio.h>

void swap_elements(int i, int j, int array[]) {
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

void bubbleSort(int array[], int size) {
    int is_sorted = 0;
    int counter = 0;

    while (!is_sorted) {
        is_sorted = 1;
        for (int i = 0; i < size - counter - 1; i++) {
            if (array[i] > array[i + 1]) {
                swap_elements(i, i + 1, array);
                is_sorted = 0;
            }
        }
        counter++;
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(array) / sizeof(array[0]);
    
    printf("Original array: ");
    printArray(array, size);
    
    bubbleSort(array, size);
    
    printf("Sorted array: ");
    printArray(array, size);
    return 0;
}
