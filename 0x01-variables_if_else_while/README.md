# 0x01 C - Variables, if, else, while

<img src="https://techdifferences.com/wp-content/uploads/2016/05/for-and-while-loop.jpg">

## Overview & If Statement

In this project, we will cover if, else, and the while loop. The if, else, and while loop are conditional statements that dictate the order in which a program runs. The ability to control the flow of the program, letting it make decisions is valuable to the programmer. An if statement is important function because it allows the program to select an action based upon the user's input.

When using an if statement, there are two meanings worth noting: TRUE and FALSE. A true statement is one that evaluates to a nonzero number. A false statement evaluates to zero. Another thing to look for is the use of ELSE and ELSE IF. Sometimes, a programmer will want to execute some code while a condition is false or if there are multiple values. The use of ELSE allows code to execute should a condition be false. The use of ELSE IF allows a programmer to set multiple conditions that may all evaluate to true and it can also be used to ensure that only one block of code is executed.

To make comparisons, a programmer must use arithmetic, relational, and logical operators. Operators are a set of symbols, similar to what you see in math, to make comparisons. Below are a list of operators (info provided by tutorialspoint):

| Arithmetic Operator | Description | Example
| --- | --- | --- |
| + |<p>Adds 2 variables.</p>|<p>x + y = 10</p>|
| - |<p>Subtracts 2 variables.</p>|<p>x - y = 9</p>|
| * |<p>Multiplies 2 variables.</p>|<p>x * y = 30</p>|
| / |<p>Divides numerator by de-numerator.</p>|<p>x / y = 4</p>|
| % |<p>Modulus Operator and remainder of after an integer.</p>|<p>x % y = 0</p>|
| ++ |<p>Increment operator increases integer value by one.</p>|<p>x++ = 2</p>|
| -- |<p>Decrement operator decreases the integer value by one.</p>|<p>x-- = 1</p>|

| Relational Operator | Description | Example
| --- | --- | --- |
| == |<p>Checks if the values of two operands are equal or not. If yes, then the condition becomes true.</p>|<p>(A == B) is not true.</p>|
| != |<p>Checks if the values of two operands are equal or not. If the values are not equal, then the condition becomes true.</p>|<p>(A != B) is true.</p>|
| > |<p>Checks if the value of left operand is greater than the value of right operand. If yes, then the condition becomes true.</p>|<p>(A > B) is not true.</p>|
| < |<p>Checks if the value of left operand is less than the value of right operand. If yes, then the condition becomes true.</p>|<p>(A < B) is true.</p>|
| >= |<p>Checks if the value of left operand is greater than or equal to the value of right operand. If yes, then the condition becomes true.</p>|<p>(A >= B) is not true.</p>|
| <= |<p>Checks if the value of left operand is less than or equal to the value of right operand. If yes, then the condition becomes true.</p>|<p>(A <= B) is true.</p>|

| Logical Operator | Description | Example
| --- | --- | --- |
| && |<p>Called an 'AND' operator. If both conditions are non-zero, then the condition becomes true.</p>|<p>(A && B) is false.</p>|
| &#124;&#124; |<p>Called an 'OR' operator. If any of the two operands is non-zero, then the condition becomes true.</p>|<p>(A || B) is true.</p>|
| ! |<p>Called a 'NOT' operator. It reverses the logical state a condition. If a condition is true, then using ! will make it false.</p>|<p>while (!TRUE) is false.</p>|

## While Loop

A while loop repeats a statement or group of statements while a given condition is true. It tests the condition before executing the loop body. There are a couple of control statements that can be used to control a loop. A break statement terminates the loop. If a break statement is used in a function where multiple functions are available, it'll break out of that function and move onto the next set of instructions. If there are no other instructions, the loop simply stops or breaks.

A continue statement causes the loop to skip the remainder of its body and immediately retest its condition prior to reiterating. A goto statement transfers control.

## What I should learn from this project

At the end of this project you are expected to be able to explain to anyone, without the help of Google:

- What are the arithmetic operators and how to use them
- What are the logical operators (sometimes called boolean operators) and how to use them
- What the the relational operators and how to use them
- What values are considered TRUE and FALSE in C
- What are the boolean operators and how to use them
- How to use the if, if ... else statements
- How to use comments
- How to declare variables of types char, int, unsigned int
- How to affect values to variables
- How to print the values of variables of type char, int, unsigned int with printf
- How to use the while loop
- How to use variables with the while loop
- How to print variables using printf
- What is the ASCII character set
- What are the purpose of the gcc flags -m32 and -m64

## Requirements for C

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- All your files should end with a new line
- A README.md file, at the root of the folder of the project
- There should be no errors and no warnings during compilation
- You are not allowed to use system
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

## Project Breakdown

| Task # | Type | Short description
| ---: | --- | --- |
|0| **Mandatory**  |<p>s program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.</p> <ul><li>The variable n will store a different value every time you will run this program</li><li>You don’t have to understand what rand, srand, RAND_MAX do. Please do not touch this code</li><li>The output of the program should be: The number, followed by; if the number is greater than 0: is positive; if the number is 0: is zero; if the number is less than 0: is negative; followed by a new line</li></ul>|
|1| **Mandatory**  |<p>s program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.</p> <ul><li>The variable n will store a different value every time you run this program</li><li>You don’t have to understand what rand, srand, and RAND_MAX do. Please do not touch this code</li><li>The output of the program should be: The string Last digit of, followed by - n, followed by; the string is, followed by; if n is greater than 5: the string and is greater than 5; if n is 0: the string and is 0; if n is less than 6 and not 0: the string and is less than 6 and not 0; followed by a new line</li></ul>|
|2| **Mandatory**  |<p>Write a program that prints the alphabet in lowercase, followed by a new line.</p> <ul><li>You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)</li><li>All your code should be in the main function</li><li>You can only use putchar twice in your code</li></ul>|
|3| **Mandatory**  |<p>Write a program that prints the alphabet in lowercase, followed by a new line.</p> <ul><li>Print all the letters except q and e</li><li>You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)</li><li>All your code should be in the main function</li><li>You can only use putchar twice in your code</li></ul>|
|4| **Mandatory**  |<p>Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.</p> <ul><li>You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)</li><li>All your code should be in the main function</li><li>You can only use putchar three times in your code</li></ul>|
|5| **Mandatory**  |<p>Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.</p> <ul><li>All your code should be in the main function</li></ul>|
|6| **Mandatory**  |<p>Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.</p> <ul><li>You are not allowed to use any variable of type char</li><li>You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)</li><li>You can only use putchar twice in your code</li><li>All your code should be in the main function</li></ul>|
|7| **Mandatory**  |<p>Write a program that prints the lowercase alphabet in reverse, followed by a new line.</p> <ul><li>You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)</li><li>All your code should be in the main function</li><li>You can only use putchar twice in your code</li></ul>|
|8| **Mandatory**  |<p>Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.</p> <ul><li>You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)</li><li>All your code should be in the main function</li><li>You can only use putchar three times in your code</li></ul>|
|9| **Mandatory**  |<p>Write a program that prints all possible combinations of single-digit numbers.</p> <ul><li>Numbers must be separated by ,, followed by a space</li><li>Numbers should be printed in ascending order</li><li>You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)</li><li>All your code should be in the main function</li><li>You can only use putchar four times maximum in your code</li><li>You are not allowed to use any variable of type char</li></ul>|
|10| **Mandatory**  |<p>Write a program that prints the numbers from 00 to 99.</p> <ul><li>Numbers must be separated by ,, followed by a space</li><li>Numbers should be printed in ascending order, with two digits</li><li>You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)</li><li>You can only use putchar five times maximum in your code</li><li>You are not allowed to use any variable of type char</li><li>All your code should be in the main function</li></ul>|
|11| **Advanced**  |<p>Write a program that prints all possible different combinations of two digits.</p> <ul><li>Numbers must be separated by ,, followed by a space</li><li>The two digits must be different</li><li>01 and 10 are considered the same combination of the two digits 0 and 1</li><li>Print only the smallest combination of two digits</li><li>Numbers should be printed in ascending order, with two digits</li><li>You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)</li><li>You can only use putchar five times maximum in your code</li><li>You are not allowed to use any variable of type char</li><li>All your code should be in the main function</li></ul>|
|12| **Advanced**  |<p>Write a program that prints all possible different combinations of three digits.</p> <ul><li>Numbers must be separated by ,, followed by a space</li><li>The three digits must be different</li><li>012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2</li><li>Print only the smallest combination of three digits</li><li>Numbers should be printed in ascending order, with three digits</li><li>You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)</li><li>You can only use putchar six times maximum in your code</li><li>You are not allowed to use any variable of type char</li><li>All your code should be in the main function</li></ul>|

## Resources

- https://www.tutorialspoint.com/cprogramming/c_relational_operators.htm
