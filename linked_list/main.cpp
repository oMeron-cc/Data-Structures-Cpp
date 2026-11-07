#include <iostream>
#include "linked_list.h"

using namespace std;

int main() {
    LinkedList list;

    // 1. 测试尾插法
    list.insertAtTail(1);
    list.insertAtTail(2);
    list.insertAtTail(3);
    cout << "尾插 1, 2, 3 后: ";
    list.print();

    // 2. 测试头插法
    list.insertAtHead(0);
    cout << "头插 0 后: ";
    list.print();

    // 3. 测试查找和大小
    cout << "包含 2 吗? " << (list.contains(2) ? "Yes" : "No") << endl;
    cout << "链表大小: " << list.getSize() << endl;

    // 4. 测试删除
    list.remove(2);
    cout << "删除 2 后: ";
    list.print();

    // 5. 测试反转（重点！）
    list.reverse();
    cout << "反转链表后: ";
    list.print();

    return 0;
}