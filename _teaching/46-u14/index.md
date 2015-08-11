---
layout: default
title: "{ICS,CSE} 46: Data Structure Implementation and Analysis"
shorttitle: "{ICS,CSE} 46"
syllabus: true
---
ICS/CSE 46: Data Structure Implementation and Analysis (Summer 2014)
==================================================================
------------------------------------------------------------------

Instructors and office hours
----------------------------
- Instructor: [Michael J. Bannister](http://www.ics.uci.edu/~mbannist)  
  Office: [DBH](http://www.classrooms.uci.edu/GAC/DBH.html) 4032  
  Email: mbannist at uci dot edu  
  Office hours: Wednesday from 3:00pm-5:00pm, Friday from 1:30pm-2:45pm in DBH 4032
- Teaching assistant: [Zachary Becker](http://www.ics.uci.edu/~zbecker)  
  Office: [DBH](http://www.classrooms.uci.edu/GAC/DBH.html) 4032  
  Email: zbecker at uci dot edu


Lectures, labs and exams
------------------------
- Lecture: Monday, Wednesday, Friday from 3:00pm-4:50pm in [Steinhaus Hall 174](http://www.classrooms.uci.edu/GAC/SH174.html).
- Lab: Tuesday, Thursday from 11:00am-1:00pm in [ICS](http://www.classrooms.uci.edu/GAC/ICS.html) 189.  
  Projects will be introduced in Tuesday's lab from 11:00-11:30am.
- Midterm exam: Aug 22 (Friday)
- Final exam: Sep 10 (Wednesday)


Textbook and other resources
----------------------------
The primary source of material for this course will be your lecture notes. For this reason it is important that you attend all lectures. In addition, to your lecture notes you may find the following books to be valuable resources. The first three are on reserve in the library and the last two are available for free to UCI students.


- _Algorithms in C++, Parts 1-5_  
  by Robert Sedgewick  
  Addison-Wesley Professional  
  (Older edition on reserve in the library)

- _Data Structures and Algorithms in C++_  
  by Michael T. Goodrich, Robert Tamassia and David M. Mount  
  Wiley  
  (On reserve in the library)

- _Data Structures and Algorithms in C++_  
  by Mark A. Weiss
  Prentice Hall  
  (Older edition on reserve in the library)

- _Algorithms and Data Structures: The Basic Toolbox_  
  by Kurth Mehlhorn and Peter Sanders  
  Springer  
  [Free PDF version](http://link.springer.com/book/10.1007/978-3-540-77978-0)  

- _The Algorithm Design Manual_  
  by Steven S. Skiena  
  Springer  
  [Free PDF version](http://link.springer.com/book/10.1007/978-1-84800-070-4)  


Grading
-------
Your grade in this course will be based on a weighted average of your scores on each of the five programming projects, midterm and final exam. The break down will be as follows:

- Project 0 (2%)
- Projects 1-4 (28%)
- Midterm (30%)
- Final (40%)

The conversion to letter grades will be determined at the end of the course.

Tentative schedule
------------------
- Week 1, Monday (Aug 4)
  * Time and space complexity using [O-notation](https://en.wikipedia.org/wiki/O-notation)
  * [Worst case analysis](https://en.wikipedia.org/wiki/Analysis_of_algorithms)
  * Order statistics: max, min, median
  * Searching: linear and [binary](https://en.wikipedia.org/wiki/Binary_search)
  * The [sorting](https://en.wikipedia.org/wiki/Sorting_algorithm) problem
- Week 1, Wednesday (Aug 6)
  * Sorting in O(n^2) time: [insertion sort](https://en.wikipedia.org/wiki/Insertion_sort) and [selection sort](https://en.wikipedia.org/wiki/Selection_sort)
  * [Divide and conquer algorithms](https://en.wikipedia.org/wiki/Divide_and_conquer_algorithm)
  * Sorting in O(n log n) time: [merge sort](https://en.wikipedia.org/wiki/Mergesort) and [quick sort](https://en.wikipedia.org/wiki/Quick_sort)
  * Space cost of recursion
- Week 1, Friday (Aug 8)
  * Big [&Omega; and Big &Theta; notation](https://en.wikipedia.org/wiki/Big_O_notation#Big_Omega_notation)
  * A lower bound for [comparison sorting](https://en.wikipedia.org/wiki/Comparison_sort)
  * Sorting in linear time: [bucket sort](https://en.wikipedia.org/wiki/Bucket_sort) and [radix sort](https://en.wikipedia.org/wiki/Radix_sort)
- Week 2, Monday (Aug 11)
  * What is a data structure?
  * [Arrays](https://en.wikipedia.org/wiki/Array_data_structure) and [linked lists](https://en.wikipedia.org/wiki/Linked_list)
  * [ArrayList](https://en.wikipedia.org/wiki/ArrayList) data structure
  * [Amortized analysis](https://en.wikipedia.org/wiki/Amortized_analysis)
  * [Stacks](https://en.wikipedia.org/wiki/Stack_%28abstract_data_type%29) and [queues](https://en.wikipedia.org/wiki/Queue_%28data_structure%29)
- Week 2, Wednesday (Aug 13)
  * [Multidimensional arrays](https://en.wikipedia.org/wiki/Row-major_order)
  * [Rooted binary trees](https://en.wikipedia.org/wiki/Binary_trees)
  * External vs. Internal nodes
  * [Depth-first tree traversal](https://en.wikipedia.org/wiki/Depth_first_search): preorder, postorder
  * [Breadth-first tree traversal](https://en.wikipedia.org/wiki/Breadth-first_search)
- Week 2, Friday (Aug 15)
  * [Binary search trees](https://en.wikipedia.org/wiki/Binary_search_tree)
  * [AVL Trees](https://en.wikipedia.org/wiki/Avl_tree) ([Visualization](http://www.qmatica.com/DataStructures/Trees/AVL/AVLTree.html))
  * The balance condition
- Week 3, Monday (Aug 18)
  * [Skip list](https://en.wikipedia.org/wiki/Skip_list)
  * [Binary heap](https://en.wikipedia.org/wiki/Binary_heap)
- Week 3, Wednesday (Aug 20)
  * [Implementing binary heaps as arrays](https://en.wikipedia.org/wiki/Binary_heap#Heap_implementation)
  * Review for midterm
- Week 3, Friday (Aug 22)
  * Midterm
- Week 4, Monday (Aug 25)
  * [Hash functions](https://en.wikipedia.org/wiki/Hash_function)
  * [Tabulation hashing](https://en.wikipedia.org/wiki/Tabulation_hashing)
  * [Hashing with chaining](https://en.wikipedia.org/wiki/Hash_table#Separate_chaining)
  * [Hashing with linear probing](https://en.wikipedia.org/wiki/Linear_probing)
  * [Cuckoo hashing](https://en.wikipedia.org/wiki/Cuckoo_hashing) Note: the link uses one table instead of two tables like I did in class.
- Week 4, Wednesday (Aug 27)
  * Representing graphs: [Adjacency list](https://en.wikipedia.org/wiki/Adjacency_list), [adjacency matrix](https://en.wikipedia.org/wiki/Adjacency_matrix), [van Rossum representation](https://www.python.org/doc/essays/graphs/)
  * [Depth first search](https://en.wikipedia.org/wiki/Depth-first_search)
  * [Breadth first search](https://en.wikipedia.org/wiki/Breadth-first_search)
- Week 4, Friday (Aug 29)
  * [Dijkstra's algorithm](http://en.wikipedia.org/wiki/Dijkstra%27s_algorithm)
  * [Bellman-Ford algorithm (briefly)](https://en.wikipedia.org/wiki/Bellman%E2%80%93Ford_algorithm)
  * [Connected components](https://en.wikipedia.org/wiki/Connected_component_%28graph_theory%29)
- Week 5, Monday (Sep 1)
  * __Holiday__
- Week 5, Wednesday (Sep 3)
  * [Bellman-Ford algorithm (more)](https://en.wikipedia.org/wiki/Bellman%E2%80%93Ford_algorithm)
  * [Minimum spanning tree](https://en.wikipedia.org/wiki/Minimum_spanning_tree)
  * [Kruskal's algorithm](https://en.wikipedia.org/wiki/Kruskal%27s_algorithm)
  * [Union find data structure](https://en.wikipedia.org/wiki/Disjoint-set_data_structure)
  * [Inverse Ackermann function (Not on final)](https://en.wikipedia.org/wiki/Ackermann_function)
- Week 5, Friday (Sep 5)
  * [Directed graphs](https://en.wikipedia.org/wiki/Directed_graph)
  * [Strong connectivity](https://en.wikipedia.org/wiki/Strongly_connected_component)
  * [Directed acyclic graphs](https://en.wikipedia.org/wiki/Directed_acyclic_graph)
  * [Topologically sorting](https://en.wikipedia.org/wiki/Topological_sorting)
  * Review for final
- Week 6, Wednesday (Sep 10)
  * __Final Exam__

Example Code
------------
- [Example queue](examples/example_queue.tar.gz): Template queue example Zach coded in lab.

Projects
--------
All of these projects will be coded entirely in C++, specifically C++14. Programming in C++ requires a level of care beyond that required in a higher level language like Python. So expect the project to take more time than than your previous programming projects. If you have prior experience programming in C, make sure you are programming your projects using C++. In general, make sure you start your project early to allow time for debugging.

Your projects will be evaluated based on their _correctness_ and _quality_.  Specifically, your projects will be evaluated on a 30-point scale. The break down of the points will fall into two categories: correctness and quality.

- Correctness (20 points): Does the program compiles, run without error, and meet specifications?
- Quality (10 points): Is the code readable, well-organized, and easily modifiable?

If your submit code that does not compile, you score will be severely reduced and you may receive a zero on the project. In this course, our target platform will be the Xubuntu 14.04 virtual machine distributed to the class. If your project does not compile on this platform with the build scripts supplied with the project, then it does not compile as far as we are concerned (see [Project 0](project0/) for more information on our virtual machine).

Projects are due at 11:50pm on their due date (found on the project's webpage), with a ten minute grace period.  You will be allowed one 48 hour extension during the course. You are not required to notify us that you are going to use your extension. The first project you submit late will fall under the 48 hour extension. Other than this policy, late work will not be accepted.

All projects will be submitted as a single file created by the gather script to the eee dropbox for the course (see [Project 0](project0/) for details). If a project is submitted in a different format, your score will be reduced and you may receive a zero. Under _no circumstances_ will a project be graded if it is submitted via email. You are responsible for submitting the version of the project you want graded. Accidentally submitting the wrong version is _not_ considered grounds for a regrade.

- Project 0: [Adapting to your environment](project0/)
- Project 1: [Sorting lab](project1/)
- Project 2: [Sudoku solver](project2/)
- Project 3: [Skiplist](project3/)
- Project 4: [Shortest paths](project4/)


Academic honesty
----------------
As a student in this course, you are expected to understand and follow the academic honest policies of the University of California, Irvine and the Bren School of Information and Computer Science. Please take a few minutes to familiarize yourself with these [policies](http://www.ics.uci.edu/ugrad/policies/#03).

All of your submitted code is expected to be completed solely by you without outside assistance. Sharing code with students in the class is not permitted. Of course, high-level discussion of course material is permitted and encouraged. All submissions will be analyzed by automated plagiarism detection software, which detects similarities in your code with other students code (this quarter and in the past) and code available on the internet. Similarly, in-class exams are expected to be an individual effort. In addition, all exams will be closed-notes and closed-book.

Violators of academic honesty policies will be reported and are subject to the penalties described in the policies linked above.

Overall, a bad course grade is nowhere near as bad as getting caught cheating.


Accommodations for disabilities
-------------------------------
If you feel that you may need an accommodation based on the impact of a disability, you should contact me privately to discuss these specific needs. Also, contact the Disability Services Center [online](http://www.disability.uci.edu) or by phone at (949) 824-7494 as soon as possible to better ensure that such accommodations, such as alternative test-taking environments or note-taking services, can be arranged for you in a timely way.

