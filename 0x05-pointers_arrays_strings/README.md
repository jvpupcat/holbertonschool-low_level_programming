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
|0| **Mandatory** |<p>Write a function that concatenates two strings.</p> <ul><li>Prototype: char *_strcat(char *dest, char *src);</li><li>This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte</li><li>Returns a pointer to the resulting string dest</li></ul>|
|1| **Mandatory** |<p>Write a function that concatenates two strings.</p> <ul><li>Prototype: char *_strncat(char *dest, char *src, int n);</li><li>The _strncat function is similar to the _strcat function, except that</li><li>it will use at most n bytes from src; and src does not need to be null-terminated if it contains n or more bytes</li><li>Return a pointer to the resulting string dest</li></ul>|
|2| **Mandatory** |<p>Write a function that copies a string.</p> <ul><li>Prototype: char *_strncpy(char *dest, char *src, int n);</li><li>Your function should work exactly like strncpy</li></ul>|
|3| **Mandatory** |<p>Write a function that compares two strings.</p> <ul><li>Prototype: int _strcmp(char *s1, char *s2);</li><li>Your function should work exactly like strcmp</li></ul>|
|4| **Mandatory** |<p>Write a function that reverses the content of an array of integers.</p> <ul><li>Prototype: void reverse_array(int *a, int n);</li><li>Where n is the number of elements of the array</li></ul>|
|5| **Mandatory** |<p>Write a function that changes all lowercase letters of a string to uppercase.</p> <ul><li>Prototype: char *string_toupper(char *);</li></ul>|
|6| **Mandatory** |<p>Write a function that capitalizes all words of a string.</p> <ul><li>Prototype: char *cap_string(char *);</li><li>Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }</li></ul>|
|7| **Mandatory** |<p>Write a function that encodes a string into 1337.</p> <ul><li>Letters a and A should be replaced by 4</li><li>Letters e and E should be replaced by 3</li><li>Letters o and O should be replaced by 0</li><li>Letters t and T should be replaced by 7</li><li>Letters l and L should be replaced by 1</li><li>Prototype: char *leet(char *);</li><li>You can only use one if in your code</li><li>You can only use two loops in your code</li><li>You are not allowed to use switch</li><li>You are not allowed to use any ternary operation</li></ul>|
|8| **Mandatory** |<p>Write a function that encodes a string using rot13.</p> <ul><li>Prototype: char *rot13(char *);</li><li>You can only use if statement once in your code</li><li>You can only use two loops in your code</li><li>You are not allowed to use switch</li><li>You are not allowed to use any ternary operation</li></ul>|
