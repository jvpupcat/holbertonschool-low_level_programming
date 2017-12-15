# 0x04 C - Pointers, arrays, and strings

<img src="https://docs.oracle.com/javase/tutorial/figures/java/objects-tenElementArray.gif">

## Overview

### Arrays

Arrays are a kind of data structure that can store a fixed-size sequential collection of elements of the same type. An array is used to store a collection of data. Instead of declaring multiple variables with just one data, a programmer can declare an individual variable with a set of data.

All array consist of contiguous memory locations. The lowest address corresponds to the first element and the highest address to the last element. To declare an array in C, a programmer specifies the type of the elements and the number of elements required by an array.

All arrays have 0 as the index of their first element in the array and the last index of an array is the total size of the array minus 1.

### Pointers

Pointers allow some C programming tasks to perform easier than other tasks. We need to use pointers for dynamic memory allocation. So, what is a pointer? A pointer is a variable whose value is the address of another variable - a direct address of the memory location. A pointer must be declared before using it to store any variable address.

### Strings

Strings are one-dimensional array of characters terminated by a null character '\0'. Think of a string as a word or sentence that ends with '\0'. The C compiler automatically places the '\0' at the end of the string when it initializes the array.

## What I should learn from this project

At the end of this project you are expected to be able to explain to anyone, without the help of Google:

- What are pointers and how to use them
- What are arrays and how to use them
- What are the differences between pointers and arrays
- How to use strings and how to manipulate them
- Scope of variables

## Requirements

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
- You are allowed to use _putchar
- You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
- In the following examples, the main.c files are showed as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one showed in the examples
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called holberton.h
- Don’t forget to push your header file

## Project Breakdown

| Task # | Type | Short description
| ---: | --- | --- |
|0| **Mandatory**  |<p>Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.</p> <ul><li>Prototype: void reset_to_98(int *n);</li></ul>|
|1| **Mandatory**  |<p>Write a function that swaps the values of two integers.</p> <ul><li>Prototype: void swap_int(int *a, int *b);</li></ul>|
|2| **Mandatory**  |<p>Write a function that returns the length of a string.</p> <ul><li>Prototype: int _strlen(char *s);</li></ul>|
|3| **Mandatory**  |<p>Write a function that prints a string, followed by a new line, to stdout</p> <ul><li>Prototype: void _puts(char *str);</li></ul>|
|4| **Mandatory**  |<p>Write a function that prints a string, in reverse, followed by a new line.</p> <ul><li>Prototype: void print_rev(char *s);</li></ul>|
|5| **Mandatory**  |<p>Write a function that reverses a string.</p> <ul><li>Prototype: void rev_string(char *s);</li></ul>|
|6| **Mandatory**  |<p>Write a function that prints one char out of 2 of a string, followed by a new line.</p> <ul><li>Prototype: void puts2(char *str);</li><li>The function should print only one character out of two, starting with the first one</li></ul>|
|7| **Mandatory**  |<p>Write a function that prints half of a string, followed by a new line.</p> <ul><li>Prototype: void puts_half(char *str);</li><li>The function should print the second half of the string</li><li>If the number of characters is odd, the function should print the (length_of_the_string - 1) / 2 last characters of the string</li></ul>|
|8| **Mandatory**  |<p>Write a function that prints n elements of an array of integers, followed by a new line.</p> <ul><li>Prototype: void print_array(int *a, int n);</li><li>where n is the number of elements of the array to be printed</li><li>Numbers must be separated by comma, followed by a space</li><li>The numbers should be displayed in the same order as they are stored in the array</li><li>You are allowed to use printf</li></ul>|
|9| **Mandatory**  |<p>Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.</p> <ul><li>Prototype: char *_strcpy(char *dest, char *src);</li><li>Return value: the pointer to dest</li></ul>|
