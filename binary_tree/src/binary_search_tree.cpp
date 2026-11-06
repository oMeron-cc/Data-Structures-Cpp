#include "binary_search_tree.h"

void BinarySearchTree::insert(int val) {
    insert(root_, val);
}

void BinarySearchTree::insert(TreeNode*& node, int val) {
    if (!node) {
        node = new TreeNode(val);
        return;
    }
    if (val < node->data) insert(node->left, val);
    else if (val > node->data) insert(node->right, val);
}