#pragma once
#include "list_node.h"

class LinkedList{
public:
    LinkedList(): head_(nullptr), size_(0){}
    ~LinkedList();

    void insertAtHead(int val); // 头插法
    void insertAtTail(int val); // 尾插法
    bool remove(int val);       // 删除指定值的节点
    bool contains(int val) const; // 查找
    void reverse();             // 反转链表
    void print() const;         // 打印链表

    int getSize() const {return size_;}

private:
    ListNode* head_;
    int size_;
};