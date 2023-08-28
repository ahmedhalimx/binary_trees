#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
   binary_tree_t *node = malloc(sizeof(binary_tree_t));
   
   node->parent = parent;
   node->n = value;
   node->left = node->right = NULL;
   
   return (node);
}
