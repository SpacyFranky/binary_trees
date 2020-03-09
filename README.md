# 0x1D. C - Binary trees
# Learning Objectives
* What is a binary tree
* What is the difference between a binary tree and a Binary Search Tree
* What is the possible gain in terms of time complexity compared to linked lists
* What are the depth, the height, the size of a binary tree
* What are the different traversal methods to go through a binary tree
* What is a complete, a full, a perfect, a balanced binary tree
# Requirements
* Allowed editors: vi, vim, emacs
* All files were compiled on Ubuntu 14.04 LTS
* My programs and functions were compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All files end with a new line
* Code used the Betty style. It was checked using betty-style.pl and betty-doc.pl
* We are not allowed to use global variables
* No more than 5 functions per file
* We are allowed to use the standard library
* The prototypes of all our functions are included in the header file called binary_trees.h
* All header files are include guarded
# More Info
## Data structures
### Basic Binary Tree
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
### Binary Search Tree
```
typedef struct binary_tree_s bst_t;
```
### AVL Tree
```
typedef struct binary_tree_s avl_t;
```
### Max Binary Heap
```
typedef struct binary_tree_s heap_t;
```