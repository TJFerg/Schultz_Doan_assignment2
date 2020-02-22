CSCI 2720

Assignnment 2: Sorted Linked List

README
==============================================

Group members
-------------
Austin Schultz - als93978@uga.edu
       * Contributions: SortedLinkedList.h, SortedLinkedList.cpp, ListNode.h,
       fixed some errors and memory leaks
       
David Doan - dd67391@uga.edu
       * Contributions: ItemType.h, ItemType.cpp, main.cpp, fixed some errors

Compiling
---------
Ensure you are in the correct assignment directory (Schultz-Doan-assignment2).

Then simply run:
make compile

gcc version 6.2.0 was used to compile for testing.

To compile manually, run the following:
g++ -g -Wall -O0 -pedantic-errors -o main ItemType.cpp SortedLinkedList.cpp main.cpp 

To run
------
Simply run:
make run    **(note this only runs ./main input.txt)

To run manually, run the following:
./main input.txt
or ./main empty.txt

After running
-------------
If you want, you can run the following:
make clean

Or, run: rm main.

This deletes the 'main' executable file.
