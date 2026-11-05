#pragma once

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int a) : data(a), left(nullptr), right(nullptr) {}

    void insert(int data);
    void preOrder();
    void inOrder();
    void postOrder();
};