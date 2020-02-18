#include <iostream>
#include <fstream>
#include <string>
#include "SortedLinkedList.h"
#include "ItemType.h"

using namespace std;

int main(int argc, char * argv[]) {
    SortedLinkedList list;
    ItemType item;
    int input;
    fstream fs;

    fs.open(argv[1], fstream::in);

    if (fs.is_open()) {
	fs >> input;
	while (!fs.eof()) {
	    item.initialize(input);
	    list.insertItem(item);
	    fs >> input;
	}

	cout << "Commands:" << endl;
	cout << "\n(i) - Insert value" << endl;
	cout << "\n(d) - Delete value" << endl;
	cout << "\n(s) - Search value" << endl;
	cout << "\n(n) - Print next iterator  value" << endl;
	cout << "\n(r) - Reset iterator" << endl;
	cout << "\n(p) - Print list" << endl;
	cout << "\n(l) - Print length" << endl;
	cout << "\n(b) - Reverse" << endl;
	cout << "\n(q) - Quit program" << endl;
    }

    else {
	cout << "Failed to open the input file" << endl;
	return 0;
    }

    bool loop = true;
    char character;

    // while (loop) {
    // 	cout << "Enter a command: ";
    // 	cin >> character;
    // 	switch (character) {
    // 	case 'i':
    // 	    char data[100];
    // 	    fgets(data, 100, stdin);
}
