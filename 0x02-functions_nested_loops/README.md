# 0x02 C - Functions, Nested Loops

<img src="http://www.image-line.com/innovaeditor/assets/admin/LoopmasterLoops.png">

## Overview
A function is a group of statements that, together, perform a task. An example of a function is main(), and all other programs can define additional functions. Instead of having everything in one main() function, other functions can be broken up into smaller ones.

To define a function, it must consist of a function header and body. The following are the parts that make up a function:
- Return type - A function may return a value
- Function name - The name of the actual function should be easy to identify when needed
- Parameters - A parameter is like a placeholder. Parameters are optional
- Function body - The function body contains a collection of statements that define what the function does

When a program calls a function, the program control is transferred to the called function. The called function performs a defined task and when its return statement is executed, it returns the program control back to the main() program.

The function prototype serves the following purpose:
- It tells the return type of the data that the function will return
- It tells the number of arguments passed to the function
- It tells the data types of each of the passed arguments
- It tells the order in which the arguments are passed to the function

Nested loops are exactly what it sounds like. It is a loop within a loop. The first pass of the outer loop triggers the inner loop, which executes to completion. The second pass of the outer loop triggers the inner loop again. This repeats until the out loop finishes. A break within the inner or outer loop would interrupt this process.

A nested loop is a logical structure used in computer programming and coding. It is a powerful construct in programming that allows rapid sorting or insertion of large amounts of data in an efficient way.

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
Don’t forget to push your header file

## Project Breakdown

| Task # | Type | Short description
| ---: | --- | --- |
|0| **Mandatory**  |<p>Write a program that prints Holberton, followed by a new line.</p> <ul><li>The program should return 0</li></ul>|
|1| **Mandatory**  |<p>Write a function that prints the alphabet, in lowercase, followed by a new line.</p> <ul><li>Prototype: void print_alphabet(void);</li><li>You can only use _putchar twice in your code</li></ul>|
|2| **Mandatory**  |<p>Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.</p> <ul><li>Prototype: void print_alphabet_x10(void);</li><li>You can only use _putchar twice in your code</li></ul>|
|3| **Mandatory**  |<p>Write a function that checks for lowercase character.</p> <ul><li>Prototype: int _islower(int c);</li><li>Returns 1 if c is lowercase</li><li>Returns 0 otherwise</li></ul>|
|4| **Mandatory**  |<p>Write a function that checks for alphabetic character.</p> <ul><li>Prototype: int _isalpha(int c);</li><li>Returns 1 if c is a letter, lowercase or uppercase</li><li>Returns 0 otherwise</li></ul>|
|5| **Mandatory**  |<p>Write a function that prints the sign of a number.</p> <ul><li>Prototype: int print_sign(int n);</li><li>Returns 1 and prints + if n is greater than zero</li><li>Returns 0 and prints 0 if n is zero</li><li>Returns -1 and prints - if n is less than zero</li></ul>|
|6| **Mandatory**  |<p>Write a function that computes the absolute value of an integer.</p> <ul><li>Prototype: int _abs(int);</li></ul>|
|7| **Mandatory**  |<p>Write a function that prints the last digit of a number.</p> <ul><li>Prototype: int print_last_digit(int);</li><li>Returns the value of the last digit</li></ul>|
|8| **Mandatory**  |<p>Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.</p> <ul><li>Prototype: void jack_bauer(void);</li></ul>|
|9| **Mandatory**  |<p>Write a function that prints the 9 times table, starting with 0.</p> <ul><li>Prototype: void times_table(void)</li></ul>|
|10| **Mandatory**  |<p>Write a function that adds two integers and returns the result.</p> <ul><li>Prototype: int add(int, int);</li></ul>|
|11| **Mandatory**  |<p>Write a function that prints all natural numbers from n to 98, followed by a new line.</p> <ul><li>Prototype: void print_to_98(int n);</li><li>Numbers must be separated by a comma, followed by a space</li><li>Numbers should be printed in order</li><li>The first printed number should be the number passed to your function</li><li>The last printed number should be 98</li><li>You are allowed to use the standard library</li></ul>|
|12| **Advanced**  |<p>Write a function that prints the n times table, starting with 0.</p> <ul><li>Prototype: void print_times_table(int n)</li><li>If n is greater than 15 or less than 0 the function should not print anything</li></ul>|
|13| **Advanced**  |<p>If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Write a program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.</p> <ul><li>You are allowed to use the standard library</li></ul>|
|14| **Advanced**  |<p>Write a program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.</p> <ul><li>The numbers must be separated by comma, followed by a space , </li><li>You are allowed to use the standard library</li></ul>|
|15| **Advanced**  |<p>Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89. By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000, write a program that finds and prints the sum of the even-valued terms, followed by a new line.</p> <ul><li>You are allowed to use the standard library</li></ul>|
