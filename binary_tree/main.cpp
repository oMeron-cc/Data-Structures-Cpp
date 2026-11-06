#include <iostream>
#include "binary_search_tree.h"
using namespace std;

int main() {
    BinarySearchTree bst;
    // 建一棵树: 
    //       5
    //     /   \
    //    3     8
    //   / \   / \
    //  1   4 7   9
    int arr[] = {5, 3, 8, 1, 4, 7, 9};
    for (int x : arr) bst.insert(x);

    cout << "前序遍历: "; bst.preOrder();
    cout << "中序遍历: "; bst.inOrder();
    cout << "后序遍历: "; bst.postOrder();
    
    cout << "树的高度: " << bst.getHeight() << endl;
    cout << "节点总数: " << bst.size() << endl;

    return 0;
}