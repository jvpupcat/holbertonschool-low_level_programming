## 0x17 Dynamic Libraries

# <img src="http://www.bookmasters.com/wp-content/uploads/2012/11/digital-book.jpg">

**Author: [Joann Vuong](https://www.linkedin.com/in/joann-vuong-954b3220/)**

*Holberton School - May 2017 Batch 3*

## Synopsis

At the end of this project you are expected to be able to explain to anyone, without the help of Google:

- What is a dymanic library, how does it work, how to create one, and how to use it
- What is the environment variable $LD_LIBRARY_PATH and how to use it
- What are the differences between static and shared libraries
- Basic usage nm, ldd, ldconfig

## Resources

- [HowTo(Video)](https://www.youtube.com/watch?v=eW5he5uFBNM)
- [cprogramming.com](http://www.cprogramming.com/tutorial/shared-libraries-linux-gcc.html)

## Notes

- Using dynamic linking is encouraged on Linux systems to reduce the number of copies of code and allow management of the different libraries.
- To compile:
    1. Compiling
        ```
        gcc -c -Wall -Werror -fPIC example.c
        ```
    2. Creating a shared library from an object file
        ```
        gcc -shared -o example.so example.o
        ```
    3. Linking with a shared library
        ```
        gcc -Wall -o test main.c
        ```
- If the loader can't find the shared library, there are two options to use:
    1. LD_LIBRARY_PATH
    2. rpath

1. Using LD_LIBRARY_PATH
    ```
    export LD_LIBRARY_PATH="use address of file location here":$LD_LIBRARY_PATH
    ```
    * LD_LIBRARY_PATH is great for quick tests and for systems on which you don't have admin privileges

2. rpath
    - rpath, aka run path, is a way of embedding the location of shared libraries in the executiable itself, instead of relying on default locations or environment variables.
