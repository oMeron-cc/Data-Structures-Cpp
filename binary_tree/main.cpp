#include <iostream>
#include "binary_search_tree.h"
using namespace std;

int main() {
    TreeNode* root = new TreeNode(5);
    
    root->insert(3);
    root->insert(8);
    root->insert(2);
    root->insert(4);

    cout << "PreOrder: ";
    root->preOrder();
    cout << endl;

    cout << "InOrder: ";
    root->inOrder();
    cout << endl;

    cout << "PostOrder: ";
    root->postOrder();
    cout << endl;

    return 0;
}