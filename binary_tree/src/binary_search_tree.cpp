#include "binary_search_tree.h"
#include <iostream>
using namespace std;

void TreeNode::insert(int val) {
    if (val < this->data) {
        if (this->left == nullptr) {
            this->left = new TreeNode(val);
        } else {
            this->left->insert(val);
        }
    } else if (val > this->data) {
        if (this->right == nullptr) {
            this->right = new TreeNode(val);
        } else {
            this->right->insert(val);
        }
    }
}

void TreeNode::preOrder() {
    cout << this->data << " ";
    if (this->left) this->left->preOrder();
    if (this->right) this->right->preOrder();
}

void TreeNode::inOrder() {
    if (this->left) this->left->inOrder();
    cout << this->data << " ";
    if (this->right) this->right->inOrder();
}

void TreeNode::postOrder() {
    if (this->left) this->left->postOrder(); 
    if (this->right) this->right->postOrder(); 
    cout << this->data << " ";
}