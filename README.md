You're right. When you copy-paste formatted text (like the tables, emojis, and specific markdown styles I used) into a plain text environment like some parts of GitHub (e.g., commit messages or basic descriptions), the formatting can break or look messy.

To make it look "nice" in a standard GitHub **README.md** file, the formatting needs to be **pure Markdown** so GitHub renders it correctly. Here is the output, using only strict Markdown features that will look clean and structured on GitHub.

-----

# 📚 Sorting Algorithms in C Overview

This project contains implementations of a wide variety of sorting algorithms in C. It serves as a reference and test suite for understanding, comparing, and experimenting with different sorting techniques.

## ✨ Implemented Sorting Algorithms

The algorithms implemented are listed below, along with their corresponding source files:

| Algorithm Name | File Name |
| :--- | :--- |
| Bogo Sort | `BogoSort.c` |
| Bubble Sort | `BubbleSort.c` |
| Bucket Sort | `BucketSort.c` |
| Comb Sort | `CombSort.c` |
| Counting Sort | `CountingSort.c` |
| Cycle Sort | `CycleSort.c` |
| Heap Sort | `HeapSort.c` |
| Insertion Sort | `InsertionSort.c` |
| Merge Sort | `MergeSort.c` |
| Pancake Sort | `PancakeSort.c` |
| Quick Sort | `QuickSort.c` |
| Radix Sort | `RadixSort.c` |
| Selection Sort | `SelectionSort.c` |
| Shell Sort | `ShellSort.c` |

## Features

  * Each algorithm is implemented in a separate C file for clarity.
  * Includes both simple and advanced sorting techniques.
  * Can be used as an educational tool or performance benchmark.
  * Some algorithms include debugging or optimization notes.

## 🛠️ Compilation

You can compile any individual algorithm with:

```bash
gcc BubbleSort.c -o BubbleSort -Wall -Wextra -O2
```

Or compile all algorithms into a single test program by including all .c files:

```bash
gcc *.c -o sorting_test -Wall -Wextra -O2
```

## 🖥️ Usage

Run the compiled program:

```bash
./sorting_test
```

You can modify `main.c` (or create your own) to call different sorting functions and test them on custom arrays.

### Example:

```c
#include <stdio.h> 
#include "BubbleSort.c"

int main() { 
    int arr[] = {5, 3, 8, 1, 2}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
```

## 📁 File Structure

The project structure is as follows:

```
/sorting-algorithms-c 
├── BogoSort.c 
├── BubbleSort.c 
├── BucketSort.c 
├── CombSort.c 
├── CountingSort.c 
├── CycleSort.c 
├── HeapSort.c 
├── InsertionSort.c 
├── MergeSort.c 
├── PancakeSort.c 
├── QuickSort.c 
├── RadixSort.c 
├── SelectionSort.c 
├── ShellSort.c 
└── README.md
```

## 📌 Notes

  * Most algorithms are implemented for integer arrays.
  * Some sorting methods (e.g., Bogo Sort, Pancake Sort) are mainly for learning or experimentation.
  * You can add timing and swap/comparison counting for performance analysis.

## 📜 License

MIT License
