#include <iostream>

#include "SortedLinkedList.h"

using namespace std;

SortedLinkedList::SortedLinkedList() {
    head = nullptr;
    currentPos = nullptr;
}

SortedLinkedList::~SortedLinkedList() {

}

int SortedLinkedList::length() const {

}

void SortedLinkedList::insertItem(ItemType item) {
    ListNode* newNode = new ListNode;
    newNode->item = item;
    
    ListNode* prev = nullptr;
    ListNode* current = head;

    while(current != nullptr) {
	if(item.compareTo(current->item) == GREATER) {
	    prev = current;
	    current = current->next;
	}

	else
	    break;
    }

    // if newNode is being inserted into the very beginning or is being inserted to empty list
    if(prev == nullptr) {
	newNode->next = current;
	head = newNode;
    }

    else {
	prev->next = newNode;
	newNode->next = current;
    }
}

void SortedLinkedList::deleteItem(ItemType item) {
    
}

void SortedLinkedList::deleteItem(int index) {

}

int SortedLinkedList::searchItem(ItemType item) {

}

ItemType SortedLinkedList::GetNextItem() {
    ItemType item;
    
    if(currentPos == nullptr)
	currentPos = head;

    item = currentPos->item;
    
    currentPos = currentPos->next;

    return item;
}

void SortedLinkedList::ResetList() {

}

void SortedLinkedList::reverse() {

}

void SortedLinkedList::printList() {
    ItemType item = GetNextItem();

    cout << item.getValue() << " ";

    while(currentPos != nullptr) {
	item = GetNextItem();

	cout << item.getValue() << " ";
    }

    cout << endl;
}
