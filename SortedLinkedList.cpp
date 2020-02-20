#include <iostream>

#include "SortedLinkedList.h"

using namespace std;

SortedLinkedList::SortedLinkedList() {
    head = nullptr;
    currentPos = nullptr;
    lengthValue = 0;
}

SortedLinkedList::~SortedLinkedList() {

}

int SortedLinkedList::length() const {
    return lengthValue;
}

void SortedLinkedList::insertItem(ItemType item) {
    ListNode* newNode = new ListNode;
    newNode->item = item;
    
    ListNode* prev = nullptr;
    ListNode* current = head;

    bool isDuplicate = false;
    while(current != nullptr) {
	if(item.compareTo(current->item) == GREATER) {
	    prev = current;
	    current = current->next;
	}

	else if(item.compareTo(current->item) == EQUAL) {
	    cout << "Sorry. You cannot insert the duplicate item" << endl;
	    isDuplicate = true;
	    break;
	}

	else
	    break;
    }

    // if newNode is being inserted into the very beginning or is being inserted to empty list
    if(prev == nullptr && !isDuplicate) {
	newNode->next = current;
	head = newNode;
	lengthValue++;
    }

    else if(!isDuplicate) {
	prev->next = newNode;
	newNode->next = current;
	lengthValue++;
    }
}

void SortedLinkedList::deleteItem(ItemType item) {
    // ListNode* prev = nullptr;
    // ListNode* current = head;

    
}

void SortedLinkedList::deleteItem(int index) {

}

int SortedLinkedList::searchItem(ItemType item) {
    int index = 0;

    ListNode* current = head;
    while(current != nullptr) {
	if(item.compareTo(current->item) == GREATER) { // item is further down the list
	    current = current->next;
	    index++;
	}

	else if(item.compareTo(current->item) == EQUAL) // item has been found
	    return index;

	else // aka compareTo == LESS, which means item is not in list and has not been found
	    break;
    }

    cout << "Item not found" << endl;

    return -1;
}

ItemType SortedLinkedList::searchItem(int index) {
    ItemType item;

    // index is out of bounds or list is empty 
    if(index < 0 || index > lengthValue-1 || head == nullptr) {
	cout << "Item not found" << endl;

	return item;
    }

    ListNode* current = head;
    int i = 0;
    while(current != nullptr) {
	if(i == index)
	    return current->item;

	current = current->next;
	i++;
    }

    return item;
}

ItemType SortedLinkedList::GetNextItem() {
    ItemType item;

    if(head == nullptr) {
	cout << "List is empty" << endl;

	return item;
    }

    if(currentPos != nullptr) {
	if(currentPos->next == nullptr) {
	    item = currentPos->item;
	    currentPos = head;

	    return item;
	}
    }

    if(currentPos == nullptr)
	currentPos = head;

    item = currentPos->item;
    currentPos = currentPos->next;

    return item;
}

void SortedLinkedList::ResetList() {
    currentPos = nullptr;
}

void SortedLinkedList::reverse() {

}

void SortedLinkedList::printList() {
    ResetList();
    
    for(int i = 0; i < lengthValue; i++) {
	ItemType item = GetNextItem();

	cout << item.getValue() << " ";
    }

    cout << endl;
}
