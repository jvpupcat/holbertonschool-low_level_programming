# 0x00 Hello World

<img src="https://cdn.programiz.com/sites/tutorial2program/files/hello-world-program_0.jpg">

## Overview

The purpose of this project is to introduce the beginning of the C language. The answers in this repo are from exercises from Holberton School. The assignment name is called "Hello World!" because there is a long-standing tradition of programming the phrase when people are new to a language. It is often used to introduce novice programmers to a programming langauge.

The "Hello World!" program is also traditionally used in sanity tests to ensure that a computer language is installed correctly and that the operating system knows how to use it.

## What should be learned from this project

At the end of this project you are expected to be able to explain to anyone, without the help of Google:

- Why C programming is awesome (don’t forget to tweet today, with the hashtag #cisfun :))
- Who invented C
- Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
- What happens when you type gcc main.c
- What is an entry point
- What is main
- How to print text using printf, puts and putchar
- How to get the size of a specific type using the unary operator sizeof
- How to compile using gcc
- What is the default program name when compiling with gcc
- What is the official Holberton C coding style and how to check your code with betty-style
- How to find the right header to include in your source code when using a standard library function
- How does the main function influence the return value of the program

## Requirements for C

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 14.04 LTS using gcc 4.8.4
- All your files should end with a new line
- A README.md file, at the root of the folder of the project
- There should be no errors and no warnings during compilation
- You are not allowed to use system
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

## Requirements for shell scripts

- Allowed editors: vi, vim, emacs
- All your scripts will be tested on Ubuntu 14.04 LTS
- All your scripts should be exactly two lines long ($ wc -l file should print 2)
- All your files should end with a new line
- The first line of all your files should be exactly #!/bin/bash

## Project Breakdown

| Task # | Type | Short description
| ---: | --- | --- |
|0| **Mandatory**  |<p>Write a script that runs a C file through the preprocessor and save the result into another file.</p> <ul><li>The C file name will be saved in the variable $CFILE</li><li>The output should be saved in the file c</li></ul>|
|1| **Mandatory**  |<p>Write a script that compiles a C file but does not link.</p> <ul><li>The C file name will be saved in the variable $CFILE</li><li>The output file should be named the same as the C file, but with the extension .o instead of .c</li><li>Example: if the C file is main.c, the output file should be main.o</li></ul>|
|2| **Mandatory**  |<p>Write a script that generates the assembly code of a C code and save it in an output file.</p> <ul><li>he C file name will be saved in the variable $CFILE</li><li>The output file should be named the same as the C file, but with the extension .s instead of .c</li><li>Example: if the C file is main.c, the output file should be main.s</li></ul>|
|3| **Mandatory**  |<p>Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.</p> <ul><li>Use the function puts</li><li>You are not allowed to use printf</li><li>Your program should end with the value 0</li></ul>|
|4| **Mandatory**  |<p>Write a script that compiles a C file and creates an executable named cisfun.</p> <ul><li>The C file name will be saved in the variable $CFILE</li></ul>|
|5| **Mandatory**  |<p>Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.</p> <ul><li>Use the function printf</li><li>You are not allowed to use the function puts</li><li>Your program should return 0</li><li>Your program should compile without warning when using the -Wall gcc option</li></ul>|
|6| **Mandatory**  |<p>Write a C program that prints the size of various types on the computer it is compiled and run on.</p> <ul><li>You should produce the exact same output as in the example</li><li>Warnings are allowed</li><li>Your program should return 0</li><li>You might have to install the package libc6-dev-i386 on your Linux (Vagrant) to test the -m32 gcc option</li></ul>|
|7| **Mandatory**  |<p>Blog: What happens when you type gcc main.c</p> <ul><li>Use gcc as the compiler </li><li>Have at least one picture, at the top of the blog post</li><li>Publish your blog post on Medium or LinkedIn</li><li>Share your blog post at least on Twitter and LinkedIn</li><li>When done, please add all urls below (blog post, tweet, etc.)</li></ul>|
|8| **Advanced**  |<p>Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.</p> <ul><li>The C file name will be saved in the variable $CFILE</li><li>The output file should be named the same as the C file, but with the extension .s instead of .c</li><li>Example: if the C file is main.c, the output file should be main.s</li></ul>|
|9| **Advanced**  |<p>Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.</p> <ul><li>You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts</li><li>Your program should return 1</li><li>Your program should compile without any warnings when using the -Wall gcc option</li></ul>|
