# Sorting Algorithms & Big O

<img src="http://i0.wp.com/www.enrique7mc.com/wp-content/uploads/2016/10/sorting.png?fit=700%2C350">

## Overview

Sorting algorithms are algorithms that puts elements of a list into a certain order. Efficient sortin is important for optimizing the use of other algorithms such as search and merge algorithms, which require input data to be in sorted lists. Formally, the output must satisfy two conditions:

* The output is in nondecreasing order.
* The output is a permutation of the input.

The data is often take be in a array, which allows random access, rather than a list, which allows sequential access. There are different types of sorting algorithms and they are classified by the following:

* Computational complexity
* Computational complexity
* Memory

## Types of Sorting Algorithms

* Bubble sort is sometimes called a sinking sort. It is a simple sorting algorithm that repeatedly steps through the list to be sorted, compares each pair of adjacent items and swaps them if they are in the wrong order.

* Insertion sort is an algorithm that builds the final sorted array one item at a time. It is less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort. However, insertion sort provides several advantages. It is efficient for small data sets, simple to implement, more efficient than selection sort or bubble sort, adaptive, and stable.

* Selection sort is called an in-place comparison sort. It's noted for its simplicity and it has performance advantages over more complicated algorithms in certain situations.

* Quicksort, aka partition-exchange sort, is an efficient sorting algorithm. It serves as a systematic method for placing the elements of an array in order. When implemented well, it can be about 2 or 3 times faster than its main competitors - merge sort and heapsort. It is a comparison sort, meaning that it can sort items of any type for which a "less-than" relation is defined. However, it is not a stable sort, meaning that the relative order of equal sort items is not preserved.

## What you should learn from this project

At the end of this project you are expected to be able to explain to anyone, without the help of Google:

* At least four different sorting algorithms
* What is the Big O notation, and how to evaluate the time complexity of an algorithm
* How to select the best sorting algorithm for a given input
* What is a stable sorting algorithm

## Requirements

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- All your files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, ... is totally forbidden.
- In the following examples, the main.c files are showed as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one showed in the examples
- The prototypes of all your functions should be included in your header file called sort.h
- Don't forget to push your header file
- All your header files should be include guarded
- A list/array does not need to be sorted if its size is less than 2.
- For this project you are given the following print_array, and print_list functions:

```
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
```

```
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
```

- Our files print_array.c and print_list.c (containing the print_array and print_list functions) will be compiled with your functions during the correction.
- Please declare the prototype of the functions print_array and print_list in your sort.h header file
- Please use the following data structure for doubly linked list:

```
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```

For almost all sorting algorithms you will have to work on, you will be asked to write a file containing the big O notation of the time complexity of the algorithm. Please use this format:

O(1)
O(n)
O(n!)
n square -> O(n^2)
log(n) -> O(log(n))
n * log(n) -> O(nlog(n))
...
Please use the "short" notation (don't use constants). Example: O(nk) or O(wn) should be written O(n). All your answers files must have an empty line at the end.

## Mandatory Tasks

