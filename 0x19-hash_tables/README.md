# 0x19 Hash Tables

<img src="https://upload.wikimedia.org/wikipedia/commons/thumb/7/7d/Hash_table_3_1_1_0_1_0_0_SP.svg/315px-Hash_table_3_1_1_0_1_0_0_SP.svg.png">

## Overview of Hash Tables

A hash function is any function that can be used to map data of arbitrary size to data of fixed size. The values returned are called any of the following: hash values, hash codes, digests, or hashes. Hash Tables are widely used in computer software for rapid data lookup. Hash functions accelerate table or database lookup by detecting duplicated records in a large file. 

Hash functions are used in has tables to quickly locate a data record using a search key. Specifically, the hash function is used to map the search key to a list. The index gives the place in the hash table of where the corresponding record is stored. Each slot of a hash table is associated with a set of records, rather than a single record. Each slot is called a bucket and hash values are called bucket listing or a bucket index.

They are useful in cryptography. A cryptographic hash function allows one to easily verify that some input data maps to a given hash value. If the input data is unknown, it is purposely difficult to reconstruct. This assures the integrity of transmited data, and is the building block for HMACs, which provide message authentication.

### Other uses of Hash Functions

Hash functions are used to build caches, bloom filters, finding duplicate records, protecting data, finding similar records, finding similar substrings, geometric hashing, and cryptography.

## Properties

A good hash function are usually required to satisfy certain properties. Requirements are dependent on the application.

Requirements list below:

```
- Determinism
- Uniformity
- Defined range
- Variable range
- Dynamic hash function
- Data normalization
- Continuity
- Non-invertible
```

## What you should learn from this project

At the end of this project you are expected to be able to explain to anyone, without the help of Google:

```
* What is a hash function
* What makes a good hash function
* What is a hash table, how do they work and how to use them
* What is a collision and what are the main ways of dealing with collisions in the context of a hash table
* What are the advantages and drawbacks of using hash tables
* What are the most common use cases of hash tables
```

## Requirements

```
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You are allowed to use the C standard library
* The prototypes of all your functions should be included in your header file called hash_tables.h
* Don't forget to push your header file
* All your header files should be include guarded
* Please use those data structures for this project:
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```

## Tests

To be created in a team

### Description of each File

0. [0-hash_table_create.c](0-hash_table_create.c) - A function that writes a hash table.
1. [1-djb2.c](1-djb2.c) - A hash function implementing the djb2 algorithm.
2. [2-key_index.c](2-key_index.c) - A function that gives you the index of a key.
3. [3-hash_table_set.c](3-hash_table_set.c) - A function that adds an element to the hash table.
4. [4-hash_table_get.c](4-hash_table_get.c) - A function that retrieves a value associated with a key.
5. [5-hash_table_print.c](5-hash_table_print.c) - A function that prints a hash table.
6. [6-hash_table_delete.c](6-hash_table_delete.c) - A function that deletes a hash table.

## Author

* **Joann Vuong** [LinkedIn](https://www.linkedin.com/in/joann-vuong-954b3220/)
