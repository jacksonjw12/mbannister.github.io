---
layout: default
title: "CSCI 60: Homework 6"
mathjax: true
---

# Homework 6

## Due: Monday 2/27 @ 11:59pm

---

__Submission instructions:__ You will be submitting your solutions through Camino.  
Please only submit the files requested on the submission page.

---

In [Example 25](//github.com/mbannister/SCU-CSCI-60-Examples/tree/master/Example25_BagDynamicArray)
we implemented a `Bag` class using a dynamic array. Although this implementation works in the sense
that it has the expected behavior of a `Bag` class, it is not very efficient. Allocating (using `new[]`),
deallocation (using `delete[]`), and copying  memory are time consuming operations that should be
avoided when possible. In this homework, you will improve the `Bag` class in Example 25 by reducing
the number of costly memory operations. I have broken down each of the methods that should be added
or changed below. The code you will write in this homework is not very difficult, but debugging
incorrect code may be very challenging. Remember to give the debugger in Qt Creator a try!

## Copy constructor: `Bag<T>::Bag(const Bag<T>& that)`

Modify the copy constructor so that the copy being made has just enough space to store all the elements
in the bag, i.e., the new copy should have `size_ == capacity_`.

## Assignment operator: `Bag<T>& Bag<T>::operator=(const Bag<T>& that)`

Currently the assignment operator deallocates the memory held by `this` and then creates a new array
to hold copies of the items in `that`. Modify the assignment operator so that when `this` has already
has a large enough array to hold all the items in `that` the current array is used and no memory
allocation takes place. When the array in `this` is not large enough, a new array should be allocated
with just enough space to hold all the items in `that`.

## Union assignment: `void Bag<T>::operator+=(const Bag<T>& that)`

This one is really bad! Using `insert` to add all of the items in `that` to `this` could cause several
resizes. Modify this function so that it only allocates additional memory if needed and performs at
most one allocation.

## Swap function: `void swap(Bag<T>& that)`

Currently if we want to swap the contents of two `Bag` objects, `a` and `b`,  we could use the following code

```cpp
auto temp = a;
a = b;
b = a;
```

However, this code needlessly allocated memory for a potentially very large temporary object. To
prevent this problem you will add a `swap` function to the `Bag` class. The `swap` function
exchanges the contents of `this` with the contents of `that`. It does not copy any of the elements
in either of the `Bag`s, but instead just swaps the internals of each object. It is important
that no memory be allocated or deallocated during the swap. Additionally make sure that your `swap`
function does not explicitly or implicitly call any member functions that allocate or
deallocate memory.

## Testing

You will only need to modify the function definitions and type signature
of the existing functions. Additionally, you will write a `main` function to test your
`UniqueBag` class. The existing `main` function can serve as a starting point.
