---
layout: default
title: "{ICS,CSE} 46: Project 1"
---
Project 1: Sorting lab (Due Aug 18 at 11:50pm)
===============================================================
---------------------------------------------------------------

Overview and goals
------------------
In this project you will be implementing [insertion sort](https://en.wikipedia.org/wiki/Insertion_sort), [merge sort](https://en.wikipedia.org/wiki/Merge_sort), and a hybrid sort combining both algorithms. The goals of this project are to become better acquainted with 

* these sorting algorithms;
* programming recursion;
* and, empirical runtime analysis.

You should strive for the most efficient implementations possible. The pseudocode given in class is often chosen for clarity, and is not necessarily the most efficient. The Wikipedia links above provide some tips for producing faster code. For further tips please come by lab and office hours.


Hybrid sort
-----------
You will be implementing a hybrid sorting algorithm based on merge sort and insertion sort. The way the hybrid algorithm works is by replacing the base case of the merge sort recursion. We define a constant K such that in the recursion when an array has length less than K the array is sorted using insertion sort. The rest of the merge sort algorithm remains unchanged. The value of K will need to be chosen through some experimentation. Try a value of K=100 to start.


Your task
---------
Your task is to implement these three sorting algorithms: insertion sort, merge sort, hybrid sort. The starter code provides stubs for the sorting algorithms along with code that will run time trials on each algorithms. The stubs assume that the input data is given as a __std::vector__. The time trials use both random __vectors__ and __vectors__ that are close to being sorted.

### Rules
The only library that is off limits for this project is the __&lt;algorithm&gt;__.

### Starter code
Project 1 starter code: [project1.tar.gz](project1.tar.gz)  

You can download this code at a terminal with the command:  
__wget "http://www.ics.uci.edu/~mbannist/teaching/ics46/project1.tar.gz"__


