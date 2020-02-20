#include <iostream>
#include <fstream>
#include <string>
#include "SortedLinkedList.h"
#include "ItemType.h"

using namespace std;

int main(int argc, char * argv[]) {
    SortedLinkedList list;

    ItemType item1;
    item1.initialize(45);

    ItemType item2;
    item2.initialize(2);

    ItemType item3;
    item3.initialize(4);

    ItemType item4;
    item4.initialize(-5);

    ItemType item5;
    item5.initialize(3);

    list.insertItem(item1);
    list.insertItem(item2);
    list.insertItem(item3);
    list.insertItem(item4);
    list.insertItem(item5);
    
    list.printList();

    list.deleteItem(2);

    list.printList();

    // SortedLinkedList list;
    // ItemType item;
    // int input;
    // fstream fs;

    // fs.open(argv[1], fstream::in);

    // if (fs.is_open()) {
    // 	fs >> input;
    // 	while (!fs.eof()) {
    // 	    item.initialize(input);
    // 	    list.insertItem(item);
    // 	    fs >> input;
    // 	}

    // 	cout << "Commands:" << endl;
    // 	cout << "\n(i) - Insert value" << endl;
    // 	cout << "\n(d) - Delete value" << endl;
    // 	cout << "\n(s) - Search value" << endl;
    // 	cout << "\n(n) - Print next iterator  value" << endl;
    // 	cout << "\n(r) - Reset iterator" << endl;
    // 	cout << "\n(p) - Print list" << endl;
    // 	cout << "\n(l) - Print length" << endl;
    // 	cout << "\n(b) - Reverse" << endl;
    // 	cout << "\n(q) - Quit program" << endl;
    // }

    // else {
    // 	cout << "Failed to open the input file" << endl;
    // 	return 0;
    // }

    // bool loop = true;
    // char character;

    // while (loop) {
    // 	cout << "Enter a command: ";
    // 	cin >> character;
    // 	switch (character) {
    // 	case 'i':
    // 	    char data[100];
    // 	    fgets(data, 100, stdin);
    // 	    cout << "Enter number: ";
    // 	    string number;
    // 	    cin >> number;
    // 	    break;
    // 	case 'd':
    // 	    int value = 0;
    // 	    cout << "Enter value to delete: ";
    // 	    cin >> value;
    // 	    break;
    // 	case 's':
    // 	    cout << "Enter value to search: ";
    // 	    string searchNum;
    // 	    cin >> searchNum;
    // 	    break;
    // 	case 'n':
    // 	    break;
    // 	case 'r':
    // 	    cout << "Iterator reset." endl;
    // 	    break;
    // 	case 'p':
    // 	    break;
    // 	case 'l':
    // 	    cout << "List Length is " << endl;
    // 	    break;
    // 	case 'b':
    // 	    cout << "Before" << endl;
    // 	    cout << "After" << endl;
    // 	    break;
    // 	case 'q':
    // 	    cout << "Quitting program..." endl;
    // 	    loop = false;
    // 	    break;
    // 	default:
    // 	    cout << "Invalid command, try again!" << endl;
    // 	    break;
    // 	}
    // }
}
