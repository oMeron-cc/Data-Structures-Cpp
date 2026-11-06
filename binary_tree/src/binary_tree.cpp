#include "binary_tree.h"
#include <algorithm>

using namespace std;

void BinaryTree::preOrder(TreeNode* node) {
    if (!node) return;
    cout << node->data << " ";
    preOrder(node->left);
    preOrder(node->right);
}

void BinaryTree::inOrder(TreeNode* node) {
    if (!node) return;
    inOrder(node->left);
    cout << node->data << " ";
    inOrder(node->right);
}

void BinaryTree::postOrder(TreeNode* node) {
    if (!node) return;
    postOrder(node->left);
    postOrder(node->right);
    cout << node->data << " ";
}

int BinaryTree::getHeight(TreeNode* node) {
    if (!node) return 0;
    return 1 + max(getHeight(node->left), getHeight(node->right));
}

void BinaryTree::clear(TreeNode* node) {
    if (!node) return;
    clear(node->left);
    clear(node->right);
    delete node;
}

int BinaryTree::size(TreeNode* node) {
    if (!node) return 0;
    return 1 + size(node->left) + size(node->right);
}