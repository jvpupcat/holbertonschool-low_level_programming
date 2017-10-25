# Binary Trees

<img src="https://i.stack.imgur.com/9XeYs.png">

## Overview

Binary trees are a tree data structure in which each node has two children. These two children are referred to as the left child and the right child. One way of defining a full binary tree is a recursive definition. A full binary tree is either a single vertex or a graph formed by taking two full binary trees, adding a vertex, and adding an edge directed from the new vertex to the root of each binary tree.

To define a binary tree in general, we must allow for the possibility that only one of the children may be empty.

It is possible to interpret a binary tree as an undirected, rather than a directed graph. An undirected binary tree is also known as an ordered, rooted tree.

A directed graph is a graph in which edges have orientations. It is written as an ordered pair G=(V,A). V is a set whose elements are called vertices, nodes or points. A is a set of ordered pairs of verticies, called arrows, directed edges (aka edges), directed arces or directed lines. Whereas, an undirected graph is a graph in which edges have no orientation.

### Types of binary trees

* A rooted binary tree has a root node and every node has at most two children.
* A full binary tree is a tree in which every node in the tree has zero or two children.
* A perfect binary tree is a binary tree in which all interior nodes have two children and all leaves have the same depth or same level.
* A complete binary tree is one where every level is completely filled and all nodes in the last level are as far left as possible.
* In the infinite complete binary tree, ever node has two children. The set of all nodes is countably infinite, but the set of all infinite paths from the root is uncountable.
* A balanced binary tree has the minimum possible max height for the leaf nodes, because for any given number of leaf nodes, the leaf nodes are placed at the greatest heigh possible.

## What you should learn from this project

At the end of this project you are expected to be able to explain to anyone, without the help of Google:

* What is a binary tree
* What is the difference between a binary tree and a Binary Search Tree
* What is the possible gain in terms of time complexity compared to linked lists
* What are the depth, the height, the size of a binary tree
* What are the different traversal methods to go through a binary tree
* What is a complete, a full, a perfect, a balanced binary tree

## Requirements

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All your files should end with a new line
* A README.md file, at the root of the folder of the project, is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You are allowed to use the standard library
* In the following examples, the main.c files are showed as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one showed in the examples
* The prototypes of all your functions should be included in your header file called binary_trees.h
* Don’t forget to push your header file
* All your header files should be include guarded

## Data Structures to be used

Basic Binary Tree:
```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

Binary Search Tree:
```
typedef struct binary_tree_s bst_t;
```

AVL Tree:
```
typedef struct binary_tree_s avl_t;
```

Max Binary Heap:
```
typedef struct binary_tree_s heap_t;
```
