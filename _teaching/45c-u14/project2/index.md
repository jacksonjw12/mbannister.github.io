---
layout: default
---
Project 2: Wizard's quest
=========================
-------------------------

Overview
--------
The motivation for this project is that we have a Wizard going on quest. On this quest he will want to bring with him several magical items, which each have a weight and a magical value. He has a magical pouch to contain these magical items. The pouch is limited only by the total weight it contains, i.e., the shape of the items are irrelevant. So, from his collection of magical items he want to fill his magical pouch maximizing the magical value contained within. You will write a program to determine which items he should bring. In CS 161 you learn how to develop an algorithm to solve this problem, but for now it will be given to you. You do not need to understand the algorithm, but you need to implement it in C++.


The algorithm
-------------

#### Input
The input to the algorithm consists of:

* __num_items__ : the total number of items
* __pouch_size__ : the size of the magical pouch
* __values__ : an array containing the values of the items, indexed starting from 1
* __weights__ : an array containing the values of the items, indexed starting from 1

So, in the input arrays __item 1__ will have value __values[1]__ and weight __weights[1]__.

#### Output
The output of the algorithm consists of:

* __output__ : an array containing the best items, index starting from 1 and 0 terminated
* __max_value__ : the total value of the items in the pouch

#### Pseudocode
The actual algorithm (in a Python like language):

    M = 2D-array of size (num_items+1)x(pouch_size+1) initialized to 0s
    B = 2D-array of size (num_items+1)x(pouch_size+1) initialized to 0s
    
    for i from 1 to num_items:
        for j from 0 to pouch_size:
        if weights[i] <= j:
            if M[i-1][j-weights[i]] + values[i] > M[i-1][j]:
                M[i][j] = M[i-1][j-weights[i]] + values[i]
                B[i][j] = i
            else:
                M[i][j] = M[i-1][j]
                B[i][j] = 0
        else:
            M[i][j] = M[i-1][j]
            B[i][j] = 0
    
    r = num_items
    s = pouch_size
    output = 1D-array of size num_items+1 initialized to 0s
    out_index = 1
    while r > 0 and s > 0:
        if B[r][s] == 0:
            r = r - 1
        else:
            output[out_index] = B[r][s]
            out_index = out_index + 1
            s = s - weights[r]
            r = r - 1

    max_value = M[num_items][pouch_size]

Although this algorithm is short, it is written at a higher level than C++ and pays no attention to memory management. Translating this algorithm to C++ will take some time and effort, so start early.


File formats
------------

The input and output files for this project will have a ridged format. When parsing the input you may assume it will be exactly as it is given below, including whitespace. We will assume the same about your output.

#### Input format

    <size of pouch>
    <number of items>
    <name of item 1>, <size of item 1>, <value of item 1>
    <name of item 2>, <size of item 2>, <value of item 2>
    <name of item 3>, <size of item 3>, <value of item 3>
    ...
    ...
    ...


#### Output format

    <value of optimal pouch>
    <name of optimal item 1>
    <name of optimal item 2>
    <name of optimal item 3>
    ...
    ...
    ...

#### How we handle input and output

The input file will be read from `std::cin` and the output will be written to `std::cout`. In Linux we can redirect a file to a program's `std::cin` and redirect the output of `std::cout` to a file with:

~~~~ bash
make run < inputfile > outputfile
~~~~

Your task
---------

Your task for this project can be broken up into three parts:

1. Parse the input file so that it may be used in the algorithm;  
2. Implement the algorithm given to solve the problem;  
3. Return the solution in the specified output format.

In addition, your code should be logically organized into separate functions grouped into files. A natural grouping into files would be to separate functions by the three tasks above. Your program must also run without any memory leaks, segfaults, or other memory access errors. In the end, I should be able to use the command

    make run < inputfile > outputfile

where __inputfile__ is properly formated and get a properly formated __outputfile__ with an optimal answer.

#### Rules
For this project you may not use any C++ container classes or memory management features. Part of the purpose of this project is to learn about manual memory management. Thus, the only libraries (other than ones you wrote) you may include are __iostream__, __string__ and __sstream__.

To make sure that your code does not have memory errors you should test your program with the command

    make memcheck < inputfile > outputfile

which will produce a memory diagnostics report for your program.

#### Starter code
The starter code for this project is a minimal program that compiles together with some data to test your project on. It is up to you to organized your code for this project. You will be graded on your organization.

Project 2 starter code: [project2.tar.gz](project2.tar.gz)

You can download this file from a terminal with:  
__wget "http://www.ics.uci.edu/~mbannist/teaching/ics45c/project2/project2.tar.gz"__
    

~~~~ c
#include <stdio.h>

int main(void)
{
    printf("Hello world!");
    return 0;
}
~~~~
