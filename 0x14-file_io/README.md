## 0x14 C - File I/O

# <img src="http://images.slideplayer.com/31/9727249/slides/slide_10.jpg">

**Author: [Joann Vuong](https://www.linkedin.com/in/joann-vuong-954b3220/)**

*Holberton School - May 2017 Batch 3*

## Synopsis

At the end of this project you are expected to be able to explain to anyone, without the help of Google:

- Look for the right source of information online
- How to create, open, close, read and write files
- What are file descriptors
- What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
- How to use the I/O system calls open, close, read and write
- What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
- What are file permissions, and how to set them when creating a file with the open system call
- What is a system call
- What is the difference between a function and a system call

## Resources

- [Unix](http://unix.superglobalmegacorp.com/Net2/newsrc/sys/fcntl.h.html)
- [C Programming in Linux Tutorial](https://www.youtube.com/watch?v=dP3N8g7h8gY)
- [James Fisher](https://jameshfisher.github.io/2017/02/24/what-is-mode_t.html)

## Requirements for the Printf Project

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with gcc 4.8.4 (C90) using the flags -Wall -Werror -Wextra and -pedantic
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc... is forbidden
- Allowed syscalls: read, write, open, close
- You are allowed to use *_putchar*
- You don't have to push *_putchar.c*, we will use our file. If you do it won't be taken into account
- In the following examples, the main.c files are showed as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one showed in the examples
- The prototypes of all your functions and the prototype of the function *_putchar* should be included in your header file called holberton.h
- Don't forget to push your header file
- All your header files should be include guarded
- Tip: always prefer using symbolic constants (POSIX) vs numbers when it makes sense. For instance read(STDIN_FILENO, ... vs read(0, ...
- Authorized functions and macros:
	- write (man 2 write)
	- read (man 2 read)
	- open (man 2 open)

## Project Breakdown

| Task # | Type | Short description
| ---: | --- | --- |
|0| **Mandatory**  |<p>Write a function that reads a text file and prints it to the POSIX standard output.</p> <ul><li>where letters is the number of letters it should read and print</li><li>returns the actual number of letters it could read and print</li><li>If the file can not be opened or read, return 0</li><li>If filename is NULL return 0</li><li>If write fails or does not write the expected amount of bytes, return 0</li></ul>|
|1| **Mandatory**  |<p>Create a function that creates a file.</p> <ul><li>Where filename is the name of the file to create and text_content is a NULL terminated string to write to the file</li><li>Returns: 1 on success, -1 on failure</li><li>The created file must have thos permissions: rw------. If file already exists, do not change the permissions.</li><li>If the file already exists, truncate it</li><li>If filename is NULL, return -1</li><li>If text_content is NULL create an empty file</li></ul>|
|2| **Mandatory**  |<p>Write a function that appends a text at the end of a file.</p> <ul><li>Where filename is the name of the file and text_content is the NULL terminated string to add at the end of the file</li><li>Return: 1 on success and -1 on failure</li><li>Do not create the file if it does not exist</li><li>If filename is NULL return -1</li><li>If text_content is NULL, do not add anything to the file. Return 1 if the file exists and -1 if the file does not exist or if you do not have the required permissions to write the file</li></ul>|
|3| **Mandatory** | <p>Write a program that copies the content of a file to another file.</p> <ul><li>Usage: cp file_from file_to</li><li>If the number of argument is not the correct one, exit with code 97 and print *Usage: cp file_from file_to*, follwed by a new line, on the POSIX standard error</li><li>If file_to already exists, truncate it</li><li>If file_from does not exist, or if you can not read it, exit with code 98 and print *Error: Can't read from file NAME_OF_THE_FILE*, followed by a new line, on the POSIX standard error - where NAME_OF_THE_FILE is the first argument passed to your program</li><li>If you can not create or if write to file_to fails, exit with code 99 and print *Error: Can't write to NAME_OF_THE_FILE*, followed by a new line, on the POSIX standard error - where NAME_OF_THE_FILE is the second argument passed to your program</li><li>If you can not close a file descriptor, exit with code 100 and print *Error: Can't close fd FD_VALUE*, follwed by a new line, on the POSIX standard error - where FD_VALUE is the value of the file descriptor.</li><li>Permissions of the created file: rw-rw-r--. If the file already exists, do not change the permissions</li><li>You must read 1,204 bytes at a time from the file_from to make less system calls. Use a buffer</li><li>You are allowed to use dprintf</li></ul>
