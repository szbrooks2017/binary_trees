#ifndef TREE_H
#define TREE_H

/*libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* basic binary struct */

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

/* binary searct tree */
typedef struct binary_tree_s bst_t;

/* AVL tree */
typedef struct binary_tree_s avl_t;

/* Max binary heap */
typedef struct binary_tree_s heap_t;

/* print function
static int print_t(const binary_tree_t *tree, int offset, int depth, char **s);
void binary_tree_print(const binary_tree_t *);
static size_t _height(const binary_tree_t *tree); */

/* prototypes */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

#endif