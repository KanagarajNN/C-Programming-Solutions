![C CI](https://github.com/kanagarajnn/c-programming-solutions/actions/workflows/c-ci.yml/badge.svg)
# Bubble Sort Algorithm in C

## Description
- This repository contains an implementation of the **Bubble Sort Algorithm** in **C**, along with comprehensive unit tests using the **CUnit** testing framework.
- **Bubble Sort** is a simple comparison-based sorting algorithm that repeatedly iterates through the array, swaps adjacent elements if they are in the wrong order, and moves the largest element to the end in each iteration.

## Features
- **Pure C Implementation**  
  - Uses standard C constructs without external dependencies.
- **Optimized Implementation**  
  - Includes an optimization to stop early if no swaps occur in an iteration.
- **Modular Code Structure**  
  - Functions are separated into `.c` and `.h` files for better maintainability.
- **Unit Tests Included**  
  - Covers edge cases such as sorted arrays, reverse-sorted arrays, negative numbers, empty lists, single-element arrays, and duplicate values.
- **CI/CD Integrated**  
  - Tests are automated using GitHub Actions workflow.

## Time Complexity
- **Worst Case (Reverse sorted array):** O(N²)  
- **Average Case (Random order):** O(N²)  
- **Best Case (Already sorted array):** O(N)

## Space Complexity
- **O(1)** (In-place sorting algorithm)

## Installation & Usage

### 1. Clone the repository
```sh
$ git clone https://github.com/kanagarajnn/c-programming-solutions.git
$ cd c-programming-solutions/sorting/bubble_sort
```

### 2. Compile and Run Bubble Sort
```sh
$ gcc src/bubble_sort.c -o bubble_sort
$ ./bubble_sort
```

### 3. Import and Use in Another C Program
You can include bubble_sort.h in another project:
```sh
#include "bubble_sort.h"

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, n);
    
    // Function to print the sorted array
    print_array(arr, n);

    return 0;
}
```

## Running Unit Tests
Unit tests are included to validate the correctness of the implementation.

### 1. Compile and Run Tests
```sh
$ gcc -o test_bubble_sort tests/test_bubble_sort.c src/bubble_sort.c -lcunit
$ gcc -o test_bubble_sort tests/test_bubble_sort.c src/bubble_sort.c -I/opt/homebrew/Cellar/cunit/2.1-3/include -L/opt/homebrew/Cellar/cunit/2.1-3/lib -lcunit
$ ./test_bubble_sort
```

### 2. Run a Specific Test Case (Optional)
You can modify test_bubble_sort.c to run a specific test case instead of the full suite.


## Continuous Integration (CI) with GitHub Actions
This project is configured with GitHub Actions for automated testing.

## CI/CD Workflow Details:
- Runs tests automatically on every push and pull request to the main branch.
- Uses GCC and CUnit on an Ubuntu runner.
- Ensures code correctness before merging.

## How to Check CI/CD Status:
- Push your changes:
```sh
$ git push origin main
```
- Navigate to your GitHub repository → Actions tab.
- Check the workflow CUnit CI to view test results.

## License
This project is licensed under the MIT License. See the LICENSE file for details.

## Metadata
- Author: Kanagaraj N N
- Email: n.n.kanagaraj.upm@gmail.com
- GitHub: https://github.com/kanagarajnn


