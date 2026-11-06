#pragma once
#include <iostream>

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int a) : data(a), left(nullptr), right(nullptr) {}
};

class BinaryTree {
public:
    BinaryTree() : root_(nullptr) {}
    virtual ~BinaryTree() {clear(root_);}

    void preOrder() { preOrder(root_); std::cout << std::endl; }
    void inOrder() { inOrder(root_); std::cout << std::endl; }
    void postOrder() { postOrder(root_); std::cout << std::endl; }
    int getHeight() { return getHeight(root_); }
    int size() { return size(root_); }

protected:
    TreeNode* root_; 

    void preOrder(TreeNode* node);
    void inOrder(TreeNode* node);
    void postOrder(TreeNode* node);
    int getHeight(TreeNode* node);
    int size(TreeNode* node);
private:
    void clear(TreeNode* node);
};