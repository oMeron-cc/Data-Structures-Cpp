#pragma once
#include "binary_tree.h"

class BinarySearchTree : public BinaryTree {
public:
    void insert(int val);
    
protected:
    void insert(TreeNode*& node, int val);
};