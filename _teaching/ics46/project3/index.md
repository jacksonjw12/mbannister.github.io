---
layout: default
title: "{ICS,CSE} 46: Project 2"
---
Project 2: A map based on a skip list (Due Sep 1 at 11:50pm)
===============================================================
---------------------------------------------------------------

Overview and goals
------------------
In this project you will be implementing an ordered map based on a [skip list](https://en.wikipedia.org/wiki/Skiplist). The goals of this project are to become better acquainted with:

  * linked data structures;
  * manual memory management;
  * randomized algorithms;
  * and, recursive algorithms.

Your implementations of the skip list methods must achieve the asymptotic runtimes given in class.

Resources
---------
Your course notes should be sufficient for the implementation of this project, but if you would like additional resources, the books listed on the course outline cover skip lists and can be found in the library.

Random coin flips
-----------------
Your implementation of the skip list will use of random coin flips. For these coin flips you should use the C++11 random number library. You can find an example of using this library on the webpage for [ICS 45C](../ics45c), Example 15.

Your task
---------
The starter code for this project contains a stub implementation of a __SkipListMap__ class. Your task is to implement the methods declared in this class. In addition, you must write a main function testing all of the public methods in the class. Make sure you test this project with __memcheck__, as this project is prone to memory leaks.

Do not change function signatures currently in SkipListMap, as we will be calling these functions in our test code.

### Rules
For this project you may fully use the STL, including smart pointers. However, you may find it easier to manually manage memory.

### Starter code
Project 3 starter code: [project3.tar.gz](project3.tar.gz)  

You can download this code at a terminal with the command:  
__wget "http://www.ics.uci.edu/~mbannist/teaching/ics46/project3.tar.gz"__


