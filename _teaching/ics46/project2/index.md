---
layout: default
title: "{ICS,CSE} 46: Project 2"
---
Project 2: Sudoku Solver (Due Aug 25 at 11:50pm)
===============================================================
---------------------------------------------------------------

Overview and goals
------------------
In this project you will be implementing a [backtracking algorithm](https://en.wikipedia.org/wiki/Backtracking) to solve [Sudoku puzzles](https://en.wikipedia.org/wiki/Sudoku). The algorithm you will be implementing can be thought of as a [depth-first search](https://en.wikipedia.org/wiki/Depth_first_search). However, you will not be explicitly constructing a tree. The goals of this project are to become better acquainted with

* depth-first search;
* and, implementing recursive algorithms.

In your implementation, you should make good use of the data structures and algorithms provided to you by the STL.

The backtracking algorithm
--------------------------
First, find a cell whose value has not yet been set. Then set the value of this cell to 1 and recursively try to solve the resulting board. If this step succeeds, return the found solution. If a solution is not found, try setting the cell to 2 and recursively solving the resulting board, continuing in this manner until you have tried all values up to and including 9. If a solution is not found after you have tried all of the 9 possible values then the board has no solution.

This algorithm will work quickly (under a second) on easy and moderately difficult puzzles. However, it can be very slow on difficult puzzles. If you would like to, you may implement some of the improvements to this algorithm found here: [http://norvig.com/sudoku.html](http://norvig.com/sudoku.html). Even if you do not plan on implementing the improvements I would recommend you skim the material found in this page.

Data format
-----------
The input and output format for this project are strict. You may assume that the input files are exactly as described and we will assume the same about your output files.

### Input format
The input file consist of nine lines each filled with nine integers (in the range 0 to 9) separated by spaces. These are the starting values of the cells in the nine-by-nine Sudoku grid. An empty cell is given the value 0.

### Output format
The output file also consists of nine line each filled with nine integers (in the range 1 to 9) separated by spaces. Since this is a complete solution to the puzzle none of the cells should still be 0.


Your task
---------
You task for this project is write a program that will (1) read a Sudoku board from __std::cin__ formated as described above, (2) solve the board using the backtracking algorithm (with improvements if you like), and (3) print the solution to __std::cout__ formated as described above. 

Recall that the command

    make run < input.dat > output.dat

causes __std::cin__ to read from __input.dat__ and __std::cout__ to write to __output.dat__.

### Rules
For this project you may use any part of the STL that you like.

### Starter code
The minimal starter code for this project includes four sample input and output files found in __/data__.

Project 2 starter code: [project2.tar.gz](project2.tar.gz)  

You can download this code at a terminal with the command:  
__wget "http://www.ics.uci.edu/~mbannist/teaching/ics46/project2.tar.gz"__


