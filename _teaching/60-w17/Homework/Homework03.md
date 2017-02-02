---
layout: default
title: "CSCI 60: Homework 3"
mathjax: true
---

# Homework 3

## Due: Monday 2/6 @ 11:59pm

---

__Submission instructions:__ You will be submitting your solutions through Camino.  
Please only submit the files requested on the submission page.

---

For this assignment you be implementing four short template functions to gain more
practice with the template syntax. Please implement all functions in a  single file
called `main.cpp`. Additionally, make sure you test all function in the functiono.

# Problem 1

Write a template function `my_dist` that takes two arguments `a` and `b` and return
the larger of `a - b` and `b - a`. You may assume that the values: `a`, `b`, `a - b`
and `b - a` are all of the same type.

# Problem 2

Write a template function `my_product` that takes two arguments: an array `arr` and a size `sz`.
For this template function you will have two different template parameters, one for the type
of the array elements and one for the type of size. The function should return the product of
the elements in the array. You may assume that the product of two elements in the array has
the same type as an element in the array.

# Problem 3

Write a template function `my_swap` that takes two arguments of the same type and is `void`
returning. This template function uses call by reference to exchange the values of the
two arguments, i.e., it swaps them.

# Problem 4

Write a template function `my_mismatch` that takes three arguments: an array `arr1`,
an array `arr2` and a size `sz`. The elements of `arr1` and `arr2` have the same type,
but `sz` can have a different type. The function returns the smallest index `i` with
`arr1[i] != arr2[i]`. If the two arrays are equal, then return `sz`.

