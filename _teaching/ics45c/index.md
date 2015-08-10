---
layout: default
title: "{ICS,CSE} 45C: Programming in C++ as a Second Language"
term: Summer
year: 2014
syllabus: true
---

# ICS/CSE 45C: Programming in C++ as a Second Language

## University of California, Irvine, Summer 2014

------------------------------------------------------------------

## Instructors and office hours

Instructor: [Michael J. Bannister](http://www.ics.uci.edu/~mbannist)  
Office: [DBH](http://www.classrooms.uci.edu/GAC/DBH.html) 4219  
Email: mbannist at uci dot edu  
Office hours: Wednesday, Friday from 3:30pm-5:00pm in DBH 4219

Teaching assistant: [Zachary Becker](http://www.ics.uci.edu/~zbecker)  
Office: [DBH](http://www.classrooms.uci.edu/GAC/DBH.html) 4032  
Email: zbecker at uci dot edu


## Lectures, labs and exams

Lecture: Monday, Wednesday, Friday from 1:00pm-2:50pm in [Steinhaus Hall 174](http://www.classrooms.uci.edu/GAC/SH174.html).  
Lab (optional): Tuesday, Thursday from 11:00am-1:00pm in [ICS](http://www.classrooms.uci.edu/GAC/DBH.html) 183.  
Midterm exam: Jul 11 in [Steinhaus Hall 174](http://www.classrooms.uci.edu/GAC/SH174.html)  
Final exam: Jul 30 in [Steinhaus Hall 174](http://www.classrooms.uci.edu/GAC/SH174.html)


## Textbook and other resources

_C++ Primer (5th Edition)_  __(Optional)__  
by Stanley B. Lippman, Josee Lajoie and Barbara E. Moo  
Addison-Wesley Professional  
ISBN 0321714113  

[CPP Reference](http://en.cppreference.com/w/): A reasonably complete online reference for C++.  


## Grading

Your grade in this course will be based on a weighted average of your scores on each of the five programming projects, midterm and final exam. The break down will be as follows:
Project 0 (2%),
Projects 1-4 (36%),
Midterm (26%) and
Final (36%).

The conversion to letter grades will be determined at the end of the course.


## Tentative schedule

- Week 1, Monday (Jun 23):
  * Course introduction
  * The ICS 45C development environment
- Week 1, Wednesday (Jun 25):
  * Compilation and linking of a C++ program
  * Static type checking and built-in data types (2.1, 2.2, 4.1-4.5)
  * Basic input and output (1.2)
  * Control structures (5.1-5.4)
- Week 1, Friday (Jun 27):
  * The difference between lvalues and rvalues (4.1.1)
  * Working with functions (6.1, 6.2.1, 6.3.1, 6.3.2, 6.4)
  * A behind the scene look at a C++ program
  * Calling conventions and the call stack ([notes](call_stack.pdf))
- Week 2, Monday (Jun 30):
  * Separate compilation (6.1.3)
  * Guarding against multiple inclusion (2.6.3)
  * enums and switches (19.3, 5.3.2)
  * Structures (2.6)
  * [Project 0](project0/) is due at 11:50pm
- Week 2, Wednesday (Jul 2):
  * Reference (2.3.1)
  * Pass-by-copy vs. pass-by-reference (6.2.2)
  * Pointers and nullptr (2.3.2)
  * Arrays (3.5)
  * String objects vs C-strings (3.2, 3.5)
- Week 2, Friday (Jul 4):
  * __Holiday__
- Week 3, Monday (Jul 7):
  * Console input and output
  * Dynamic memory allocation (the heap) (12.1.2, 12.2.1)
  * new, delete and delete[] (12.1.2, 12.2.1)
  * Dynamically allocated structs
  * [Project 1](project1/) is due at 11:50pm
- Week 3, Wednesday (Jul 9):
  * The const qualifier (2.4)
  * How constant works with pointers and references (2.4)
  * Object oriented programing in C++
  * Writing classes (7.1, 7.3.1-7.3.3, 15.7)
  * Access control
  * A little inheritance (15.1-15.4)
- Week 3, Friday (Jul 11):
  * __Midterm__
- Week 4, Monday (Jul 14):
  * More inheritance (15.1-15.4)
  * Well-behaved classes (13.1, 13.2.1, 13.5)
  * const aware classes
  * The ArrayList example
  * [Project 2](project2/) is due at 11:50pm
- Week 4, Wednesday (Jul 16):
  * static\_cast and dynamic\_cast (4.11.2, 4.11.3, 19.2.1)
  * A little templates (16.1.1)
  * Introduction to the standard template library (STL)
  * STL: Array, Vectors and Maps (3.3, 11)
  * Range-based for loop (for-each loop)
  * Type inference (2.5)
- Week 4, Friday (Jul 18):
  * Typedefs and using (2.5)
  * Pairs, tuples and ties (11.2.3)
  * Stacks and queues 
  * Generating random numbers (17.4)
  * Pimpl pattern
- Week 5, Monday (Jul 21):
  * Bit-level operations
  * Shared and unique pointers
  * Template functions
  * [Project 3](project3/) is due at 11:50pm
- Week 5, Wednesday (Jul 23):
  * More shared and unique pointers
  * Error handling by returning error codes
  * C++ exceptions
- Week 5, Friday (Jul 25):
  * Iterators
  * The algorithms library
  * Concluding remarks
- Week 6, Monday (Jul 28):
  * [Project 4](project4/) is due at 11:50pm
- Week 6, Wednesday (Jul 30): __Final__
  * [Topics on the final](final)


## Example code

- [Example0](examples/example0.tar.gz): Fundamental types and control structures
- [Example1](examples/example1.tar.gz): Functions in C++
- [Example2](examples/example2.tar.gz): Separate compilation
- [Example3](examples/example3.tar.gz): Structs
- [Example4](examples/example4.tar.gz): Abusing the project 1 starter code.
- [Example5](examples/example5.tar.gz): Basic example for using pointers and references
- [Example6](examples/example6.tar.gz): Pass-by-reference quiz
- [Example7](examples/example7.tar.gz): Working with stack allocated arrays
- [Example8](examples/example8.tar.gz): Parsing a CSV file
- [Example9](examples/example9.tar.gz): Working with dynamically allocated arrays
- [Example10](examples/example10.tar.gz): Basic inheritance example
- [Example11](examples/example11.tar.gz): ArrayList class
- [Example12](examples/example12.tar.gz): STL style array passing
- [Example13](examples/example13.tar.gz): Using __dynamic\_cast__ to safe convert between objects
- [Example14](examples/example14.tar.gz): Using __array__, __vector__ and __unordered_map_ with for-each loops
- [Example15](examples/example15.tar.gz): Generating random numbers
- [Example16](examples/example16.tar.gz): Using pairs and ties for multiple returns
- [Example17](examples/example17.tar.gz): Template functions
- [Example18](examples/example18.tar.gz): Bit operations
- [Example19](examples/example19.tar.gz): Adding exception to the ArrayList of example 11
- [Example20](examples/example20.tar.gz): Using __shared\_ptr__ and __unique\_ptr__
- [Example21](examples/example21.tar.gz): Using STL's find function
- [Example22](examples/example22.tar.gz): ArrayList from Example 11 with an iterator

### Additional examples
These some code examples from another offering of this course:  
[http://www.ics.uci.edu/~thornton/ics45c/CodeExamples/](http://www.ics.uci.edu/~thornton/ics45c/CodeExamples/)


## Projects

The majority of your effort in this course will be spent on programming projects; the only way to learn a language is to use the language. All of these projects will be coded entirely in C++, specifically C++14. Programming in C++ requires a level of care beyond that required in a higher level language like Python. So expect the project to take more time than than your previous programming projects. If you have prior experience programming in C, make sure you are programming your projects using C++. In general, make sure you start your project early to allow time for debugging.

Your projects will be evaluated based on their _correctness_ and _quality_.  Specifically, your projects will be evaluated on a 30-point scale. The break down of the points will fall into two categories: correctness and quality.

- Correctness (20 points): Does the program compiles, run without error, and meet specifications?
- Quality (10 points): Is the code readable, well-organized, and easily modifiable?

If your submit code that does not compile, you score will be severely reduced and you may receive a zero on the project. In this course, our target platform will be the Xubuntu 14.04 virtual machine distributed to the class. If your project does not compile on this platform with the build scripts supplied with the project, then it does not compile as far as we are concerned (see [Project 0](project0/) for more information on our virtual machine).

Projects are due at 11:50pm on their due date (found on the project's webpage), with a ten minute grace period.  You will be allowed one 48 hour extension during the course. You are not required to notify us that you are going to use your extension. The first project you submit late will fall under the 48 hour extension. Other than this policy, late work will not be accepted.

All projects will be submitted as a single file created by the gather script to the eee dropbox for the course (see [Project 0](project0/) for details). If a project is submitted in a different format, your score will be reduced and you may receive a zero. Under _no circumstances_ will a project be graded if it is submitted via email. You are responsible for submitting the version of the project you want graded. Accidentally submitting the wrong version is _not_ considered grounds for a regrade.

- Project 0: [Adapting to your environment](project0/)
- Project 1: [Game of life](project1/)
- Project 2: [Wizard's quest](project2/)
- Project 3: [Painting a picture](project3/)
- Project 4: [Snake game](project4/)


## Academic honesty

As a student in this course, you are expected to understand and follow the academic honest policies of the University of California, Irvine and the Bren School of Information and Computer Science. Please take a few minutes to familiarize yourself with these [policies](http://www.ics.uci.edu/ugrad/policies/#03).

All of your submitted code is expected to be completed solely by you without outside assistance. Sharing code with students in the class is not permitted. Of course, high-level discussion of course material is permitted and encouraged. All submissions will be analyzed by automated plagiarism detection software, which detects similarities in your code with other students code (this quarter and in the past) and code available on the internet. Similarly, in-class exams are expected to be an individual effort. In addition, all exams will be closed-notes and closed-book.

Violators of academic honesty policies will be reported and are subject to the penalties described in the policies linked above.

Overall, a bad course grade is nowhere near as bad as getting caught cheating.


## Accommodations for disabilities

If you feel that you may need an accommodation based on the impact of a disability, you should contact me privately to discuss these specific needs. Also, contact the Disability Services Center [online](http://www.disability.uci.edu) or by phone at (949) 824-7494 as soon as possible to better ensure that such accommodations, such as alternative test-taking environments or note-taking services, can be arranged for you in a timely way.


## Acknowledgments

This course and webpage are in large part based on an offering of this course by [Alex Thornton](http://www.ics.uci.edu/~thornton) in Spring 2014.


