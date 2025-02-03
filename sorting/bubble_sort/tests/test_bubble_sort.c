/*
test_bubble_sort.c - Unit Tests for the Bubble Sort Algorithm

Description:
- This file contains unit tests for the `bubble_sort` function using the CUnit framework.
- The tests cover various edge cases, including already sorted arrays, reverse-sorted arrays,
  negative numbers, single-element arrays, empty arrays, and arrays with duplicates.

Usage:
- Compile and run the tests:
    `gcc -o test_bubble_sort test_bubble_sort.c bubble_sort.c -lcunit`
    `gcc -o test_bubble_sort test_bubble_sort.c ../src/bubble_sort.c -I/opt/homebrew/Cellar/cunit/2.1-3/include -L/opt/homebrew/Cellar/cunit/2.1-3/lib -lcunit`
    `./test_bubble_sort`

Metadata:
- Author: Kanagaraj N N
- Date: February 1, 2025
- Version: 1.0
- License: MIT
*/

#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "../include/bubble_sort.h"


// Helper function to compare arrays
int arrays_are_equal(int *arr1, int *arr2, int size) {
    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) {
            return 0;
        }
    }
    return 1;
}

// Test cases
void test_already_sorted() {
    int input[] = {1, 2, 3, 4, 5};
    int expected[] = {1, 2, 3, 4, 5};
    int size = sizeof(input) / sizeof(input[0]);

    bubble_sort(input, size);
    CU_ASSERT_TRUE(arrays_are_equal(input, expected, size));
}

void test_reverse_sorted() {
    int input[] = {5, 4, 3, 2, 1};
    int expected[] = {1, 2, 3, 4, 5};
    int size = sizeof(input) / sizeof(input[0]);

    bubble_sort(input, size);
    CU_ASSERT_TRUE(arrays_are_equal(input, expected, size));
}

void test_unsorted() {
    int input[] = {64, 34, 25, 12, 22, 11, 90};
    int expected[] = {11, 12, 22, 25, 34, 64, 90};
    int size = sizeof(input) / sizeof(input[0]);

    bubble_sort(input, size);
    CU_ASSERT_TRUE(arrays_are_equal(input, expected, size));
}

void test_negative_numbers() {
    int input[] = {10, -1, 3, 8, 5, 2, -3, 4};
    int expected[] = {-3, -1, 2, 3, 4, 5, 8, 10};
    int size = sizeof(input) / sizeof(input[0]);

    bubble_sort(input, size);
    CU_ASSERT_TRUE(arrays_are_equal(input, expected, size));
}

void test_single_element() {
    int input[] = {42};
    int expected[] = {42};
    int size = sizeof(input) / sizeof(input[0]);

    bubble_sort(input, size);
    CU_ASSERT_TRUE(arrays_are_equal(input, expected, size));
}

void test_empty_array() {
    int input[] = {};
    int size = 0;

    bubble_sort(input, size);
    CU_ASSERT_TRUE(size == 0);
}

void test_duplicates() {
    int input[] = {4, 2, 2, 8, 3, 3, 1};
    int expected[] = {1, 2, 2, 3, 3, 4, 8};
    int size = sizeof(input) / sizeof(input[0]);

    bubble_sort(input, size);
    CU_ASSERT_TRUE(arrays_are_equal(input, expected, size));
}

// Main function to set up and run the test suite
int main() {
    CU_initialize_registry();

    CU_pSuite suite = CU_add_suite("Bubble Sort Tests", 0, 0);

    CU_add_test(suite, "Test Already Sorted Array", test_already_sorted);
    CU_add_test(suite, "Test Reverse Sorted Array", test_reverse_sorted);
    CU_add_test(suite, "Test Unsorted Random Array", test_unsorted);
    CU_add_test(suite, "Test Array with Negative Numbers", test_negative_numbers);
    CU_add_test(suite, "Test Single Element Array", test_single_element);
    CU_add_test(suite, "Test Empty Array", test_empty_array);
    CU_add_test(suite, "Test Array with Duplicate Values", test_duplicates);

    CU_basic_run_tests();
    CU_cleanup_registry();

    return 0;
}
