#include "linked_list.h"
#include <iostream>


using namespace std;

LinkedList::~LinkedList() {
    ListNode* curr = head_;
    while (curr != nullptr) {
        ListNode* nextNode = curr->next;
        delete curr;
        curr = nextNode;
    }
}


void LinkedList::insertAtHead(int val) {
    ListNode* newNode = new ListNode(val);
    newNode->next = head_;
    head_ = newNode;      
    size_++;
}


void LinkedList::insertAtTail(int val) {
    ListNode* newNode = new ListNode(val);
    if (head_ == nullptr) {
        head_ = newNode;
    } else {
        ListNode* curr = head_;
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        curr->next = newNode;
    }
    size_++;
}


bool LinkedList::remove(int val) {
    if (head_ == nullptr) return false;

    if (head_->val == val) {
        ListNode* toDelete = head_;
        head_ = head_->next;
        delete toDelete;
        size_--;
        return true;
    }

    ListNode* curr = head_;
    while (curr->next != nullptr && curr->next->val != val) {
        curr = curr->next;
    }

    if (curr->next != nullptr) {
        ListNode* toDelete = curr->next;
        curr->next = curr->next->next;
        delete toDelete;
        size_--;
        return true;
    }
    return false;
}


bool LinkedList::contains(int val) const {
    ListNode* curr = head_;
    while (curr != nullptr) {
        if (curr->val == val) return true;
        curr = curr->next;
    }
    return false;
}

 
void LinkedList::reverse() {
    ListNode* prev = nullptr;
    ListNode* curr = head_;
    
    while (curr != nullptr) {
        ListNode* nextTemp = curr->next; // 暂存下一个节点
        curr->next = prev;               // 当前节点的箭头反向指
        prev = curr;                     // prev 往前走一步
        curr = nextTemp;                 // curr 往前走一步
    }
    head_ = prev; // 最后 prev 变成了新的头
}


void LinkedList::print() const {
    ListNode* curr = head_;
    while (curr != nullptr) {
        cout << curr->val << " -> ";
        curr = curr->next;
    }
    cout << "nullptr" << endl;
}