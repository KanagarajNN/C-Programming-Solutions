/**
 * bubble_sort.c - Implementation of the Bubble Sort Algorithm in C
 *
 * Description:
 * - This module implements the Bubble Sort algorithm in C.
 * - Bubble Sort is a simple comparison-based sorting algorithm that repeatedly
 *   iterates through the array, swapping adjacent elements if they are in the
 *   wrong order, effectively "bubbling" the largest element to the end in each pass.
 *
 * Time Complexity:
 * - Worst Case: O(N^2) (When the array is reverse sorted)
 * - Average Case: O(N^2) (For a randomly shuffled array)
 * - Best Case: O(N) (When the array is already sorted)
 *
 * Space Complexity:
 * - O(1) (In-place sorting algorithm)
 *
 * Usage:
 * - Compile: `gcc bubble_sort.c -o bubble_sort`
 * - Run: `./bubble_sort`
 *
 * Metadata:
 * - Author: Kanagaraj N N
 * - Date: February 1, 2025
 * - Version: 1.0
 * - License: MIT (see LICENSE file for details)
 */

#include <stdio.h>

/* Function Prototypes */
void bubble_sort(int arr[], int size);
void swap(int *a, int *b);
void print_array(const int arr[], int size);


/**
 * Function: bubble_sort
 * ---------------------
 * Implements Bubble Sort algorithm to sort an array in ascending order.
 *
 * @param arr  - The array to be sorted
 * @param size - The number of elements in the array
 */
void bubble_sort(int arr[], int size) {
    int swapped;

    for (int pass = 0; pass < size - 1; pass++) {
        swapped = 0; // Optimization: Track if swapping occurred

        for (int i = 0; i < size - pass - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                swap(&arr[i], &arr[i + 1]);
                swapped = 1;
            }
        }

        // If no swapping happened, array is already sorted
        if (!swapped)
            break;
    }
}

/**
 * Function: swap
 * --------------
 * Swaps two integers using pointers.
 *
 * @param a - Pointer to the first integer
 * @param b - Pointer to the second integer
 */
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * Function: print_array
 * ---------------------
 * Prints the elements of an array.
 *
 * @param arr  - The array to be printed
 * @param size - The number of elements in the array
 */
void print_array(const int arr[], int size) {
    if (size == 0) {
        printf("[]\n");
        return;
    }

    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");
}
