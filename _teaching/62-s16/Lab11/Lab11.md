---
layout: default
title: "CS 62: Lab 11"
mathjax: true
---

# CS 62: Lab 11

# Wednesday April 13, 2016

---

In this lab, you will be converting a singly linked list into a doubly linked list. The implementations are based on the Java implementations in Bailey’s data structure library. You will be using the memory debugger `valgrind` to test your code for memory leaks, and other memory errors. The goal of this lab is gain experience playing with pointers and dynamic memory management, and should help prepare you for this weeks assignment.

## Getting started

Before lab, look over your notes on linked lists and the Java code in Bailey’s library and refresh your memory on linked lists.

Copy over the starter code from: `/common/cs/cs062/labs/lab11`.

Compile and run the program. The program currently runs some basic tests to exercise the linked list data structure. Now run the program with `valgrind` by typing: make `memcheck`, and read the generated report (yes I know it is ugly!). You will see that memory is being leaked. Look through the file `linked_list.c` and uncomment the line marked “Uncomment me to fix memory leak!”. You should use `valgrind` to check weekly assignments for memory leaks.

## Single Linked List

Now, take a look at the linked list header file (`linked_list.h`). The header file contains a basic set of linked list functions. These functions are implemented in the file `linked_list.c`. The implementations are mostly direct translations from Java to C, e.g., switching Java references to pointers. Add a few extra tests to the `main` method to make sure you know how to work with the linked list data structure.

## Double Linked List

Your task in this lab is to convert this single linked list to a double linked list. You will need to modify linked list nodes to have a `prev` pointer in addition to the `next` pointer, and all functions changing nodes will need to be modified to update the previous pointers. After this conversion the performance of some of the functions should be improved, see comments in `linked_list.h` for details.

## Turning it in!

Once you are done with the conversion submit your folder to the dropbox in the usual way.
