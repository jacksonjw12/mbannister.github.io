---
layout: default
title: "CS 62: Lab 06"
mathjax: true
---

# CS 62: Lab 06

## Wednesday February 2, 2016

It’s back! Yes, the `CurDoublyLinkedList` and `CompressedTable` classes are back again to torment you. We had you write a `CompressedTable` class for Assignment 4, but neglected having you write iterators for the table.

As we’ve seen for binary trees, there are sometimes multiple ways to iterate through collections. For tables, it makes sense to iterate through them a row at a time (so-called row-major order) or a column at a time (column-major order). For example, suppose we have an array `elt` with two rows and 3 columns. A _row-major_ iteration would give us the elements in the order: `elt[0][0]`, `elt[0][1]`, `elt[0][2]`, `elt[1][0]`, `elt[1][1]`, `elt[1][2]`. On the other hand a column-major iterations would produce them in the following order: `elt[0][0]`, `elt[1][0]`, `elt[0][1]`, `elt[1][1]`, `elt[0][2]`, `elt[1][2]`.

Of course in this program we are working with `CompressedTable`, not an array. On the other hand, we have a method `getInfo(r,c)` that retrieves the element in row `r` and column `c`.

For this lab you are to add an iterator: `rowMajorOrderIterator` to the class `CompressedTable`. We have provided you with starter code that includes a correct implementation of the complete `CompressedGrid` program.

To see how to accomplish this we suggest that you review the implementations of iterators in the Bailey’s structure5 library. While you could write the iterator class `RowMajorIterator` as a separate class from `CompressedTable`, we instead recommend that you write it as a private "inner classes". That is, you write the class definition inside the CompressedTable class. One advantage of this is that you get access to the protected instance variables of the `CompressedTable` class, e.g., `numRows` and `numCols`. The `iterator` methods simply create an iterator from these classes and return it. For this version of the iterator you should use the `getInfo` method.

In the main method of `CompressedTable` we include code to build a compressed table as well as (commented out) code to iterate through it in row-major orders.

## Time complexity (O-notation)

You used the method `getInfo` from `CompressedTable` to get and return the successive elements in the iterator you wrote. What is the complexity of `getInfo` (in O-notation when n is the number of entries in the table)? What is the complexity of the complete traversal using your iterator?

__Please include your answers to these questions in a comment at the top of your CompressedTable class.__

## Don't reinvent the wheel!

Now that you have done it the hard way! Reimplement the iterator without calling `getInfo`. This time you will use the iterator that Bailey has already written for `DoubleLinkedList`. Notice that each iteration in the `CompressedTable` does not necessarily cause an iteration in the `DoubleLinkedlist`! Please give this iterator a different name than your previous iterator.

## Submitting your solution

Drop your lab off in the dropbox as usual. Be sure to name it properly.
