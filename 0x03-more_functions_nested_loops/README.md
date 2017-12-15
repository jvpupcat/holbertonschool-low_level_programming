# 0x03 C - More functions, more nested loops

<img src="https://mathbits.com/MathBits/Java/Looping/nestarrows.gif">

## Overview

A function is a group of statements that, when combined, perform a task. Every C program has at least one function, which is main(). Other trivial programs can define additional functions. Instead of one long main.c file, a programmer can separate certain sections into functions that can be housed in other .c files. Logically, the division should still be able to perform specific tasks.

A function declaration tells the compiler about a function's name, return type, and parameters. A function definition provides the actual body of the function. If a program is large, it is often best practice to break some tasks in the main.c file into functions. Once the functions have been broken into, a .h, or header file, is used to store the prototypes of certain functions. By using a header file, a compiler is able to compile all the program's instructions together.

## What I should learn from this project

At the end of this project you are expected to be able to explain to anyone, without the help of Google:

- What are nested loops and how to use them
- What is a function and how do you use functions
- What is the difference between a declaration and a definition of a function
- What is a prototype
- Scope of variables
- What are the gcc flags -Wall -Werror -pedantic -Wextra
- What are header files and how to to use them with #include

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
|0| **Mandatory**  |<p>Write a function that checks for uppercase character.</p> <ul><li>Prototype: int _isupper(int c);</li><li>Returns 1 if c is uppercase</li><li>Returns 0 otherwise</li></ul>|
|1| **Mandatory**  |<p>Write a function that checks for a digit (0 through 9).</p> <ul><li>Prototype: int _isdigit(int c);</li><li>Returns 1 if c is a digit</li><li>Returns 0 otherwise</li></ul>|
|2| **Mandatory**  |<p>Write a function that multiplies two integers.</p> <ul><li>Prototype: int mul(int a, int b);</li></ul>|
|3| **Mandatory**  |<p>Write a function that prints the numbers, from 0 to 9, followed by a new line.</p> <ul><li>Prototype: void print_numbers(void);</li><li>You can only use _putchar twice in your code</li></ul>|
|4| **Mandatory**  |<p>Write a function that prints the numbers, from 0 to 9, followed by a new line.</p> <ul><li>Prototype: void print_most_numbers(void);</li><li>Do not print 2 and 4</li><li>You can only use _putchar twice in your code</li></ul>|
|5| **Mandatory**  |<p>Write a function that prints 10 times the numbers, from 0 to 14, followed by a new line.</p> <ul><li>Prototype: void more_numbers(void);</li><li>You can only use _putchar three times in your code</li><li> </li></ul>|
|6| **Mandatory**  |<p>Write a function that draws a straight line in the terminal.</p> <ul><li>Prototype: void print_line(int n);</li><li>You can only use _putchar function to print</li><li>Where n is the number of times the character _ should be printed</li><li>The line should end with a \n</li><li>If n is 0 or less, the function should only print \n</li></ul>|
|7| **Mandatory**  |<p>Write a function that draws a diagonal line on the terminal.</p> <ul><li>Prototype: void print_diagonal(int n);</li><li>You can only use _putchar function to print</li><li>Where n is the number of times the character \ should be printed</li><li>The diagonal should end with a \n</li><li>If n is 0 or less, the function should only print a \n</li></ul>|
|8| **Mandatory**  |<p>Write a function that prints a square, followed by a new line.</p> <ul><li>Prototype: void print_square(int size);</li><li>You can only use _putchar function to print</li><li>Where size is the size of the square</li><li>If size is 0 or less, the function should print only a new line</li><li>Use the character # to print the square</li></ul>|
|9| **Mandatory**  |<p>The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag.

Write a program that prints the numbers from 1 to 100, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. For numbers which are multiples of both three and five print FizzBuzz.</p> <ul><li>Each number or word should be separated by a space</li><li>You are allowed to use the standard library</li></ul>|
|10| **Mandatory**  |<p>Write a function that prints a triangle, followed by a new line.</p> <ul><li>Prototype: void print_triangle(int size);</li><li>You can only use _putchar function to print</li><li>Where size is the size of the triangle</li><li>If size is 0 or less, the function should print only a new line</li><li>Use the character # to print the triangle</li></ul>|
|11| **Advanced**  |<p>The prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081.

Write a program that finds and prints the largest prime factor of the number 612852475143, followed by a new line.</p> <ul><li>You are allowed to use the standard library</li><li>Your program will be compiled with this command: gcc -Wall -pedantic -Werror -Wextra 100-prime_factor.c -o 100-prime_factor -lm</li></ul>|
|12| **Advanced**  |<p>Write a function that prints an integer.</p> <ul><li>Prototype: void print_number(int n);</li><li>You can only use _putchar function to print</li><li>You are not allowed to use long</li><li>You are not allowed to use arrays or pointers</li><li>You are not allowed to hard-code special values</li></ul>|
