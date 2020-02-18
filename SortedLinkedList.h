#ifndef SORTEDLINKEDLIST_H
#define SORTEDLINKEDLIST_H

#include "ItemType.h"
#include "ListNode.h"

class SortedLinkedList {
 public:
    SortedLinkedList();
    ~SortedLinkedList();
    int length() const;
    void insertItem(ItemType item);
    void deleteItem(ItemType item);
    int searchItem(ItemType item);
    ItemType GetNextItem();
    void ResetList();
    void reverse();
    
 private:
    ListNode* head;
    ListNode* currentPos;
}

#endif
