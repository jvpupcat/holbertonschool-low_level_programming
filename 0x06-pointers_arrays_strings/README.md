# 0x06 C - Even more pointers, arrays and strings

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

## What you should learn from this project

At the end of this project you are expected to be able to explain to anyone, without the help of Google:

- What are pointers to pointers and how to use them
- What are multidimensional arrays and how to use them
- What are the most common C standard library functions to manipulate strings

## Requirements

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
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
|0| **Mandatory**  |<p>Write a function that fills memory with a constant byte.</p> <ul><li>Prototype: char *_memset(char *s, char b, unsigned int n);</li><li>The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b</li><li>Returns a pointer to the memory area s</li></ul>|
|1| **Mandatory**  |<p>Write a function that copies memory area.</p> <ul><li>Prototype: char *_memcpy(char *dest, char *src, unsigned int n);</li><li>The _memcpy() function copies n bytes from memory area src to memory area dest</li><li>Returns a pointer to dest</li></ul>|
|2| **Mandatory**  |<p>Write a function that locates a character in a string.</p> <ul><li>Prototype: char *_strchr(char *s, char c);</li><li>Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found</li></ul>|
|3| **Mandatory**  |<p>Write a function that gets the length of a prefix substring.</p> <ul><li>Prototype: unsigned int _strspn(char *s, char *accept);</li><li>Returns the number of bytes in the initial segment of s which consist only of bytes from accept</li></ul>|
|4| **Mandatory**  |<p>Write a function that searches a string for any of a set of bytes.</p> <ul><li>Prototype: char *_strpbrk(char *s, char *accept);</li><li>The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept</li><li>Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found</li></ul>|
|5| **Mandatory**  |<p>Write a function that locates a substring.</p> <ul><li>Prototype: char *_strstr(char *haystack, char *needle);</li><li>The _strstr() function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared</li><li>Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.</li></ul>|
|6| **Mandatory**  |<p>Write a function that prints the chessboard.</p> <ul><li>Prototype: void print_chessboard(char (*a)[8]);</li></ul>|
|7| **Mandatory**  |<p>Write a function that prints the sum of the two diagonals of a square matrix of integers.</p> <ul><li>Prototype: void print_diagsums(int *a, int size);</li><li>You are allowed to use the standard library</li><li>Note that in the following example we are casting an int[][] into an int*. This is not something you should do. The goal here is to make sure you understand how an array of array is stored in memory.</li></ul>|
|8| **Mandatory**  |<p>Write a function that sets the value of a pointer to a char.</p> <ul><li>Prototype: void set_string(char **s, char *to);</li></ul>|
