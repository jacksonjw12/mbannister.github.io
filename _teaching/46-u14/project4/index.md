---
layout: default
title: "{ICS,CSE} 46: Project 2"
---
Project 2: Dijkstra's algorithm using STL data structures (Due Sep 8 at 11:50pm)
===============================================================
---------------------------------------------------------------

Overview and goals
------------------
In this project you will be implementing [Dijkstra's algorithm](https://en.wikipedia.org/wiki/Dijkstra%27s_algorithm) for finding the [shortest path tree](https://en.wikipedia.org/wiki/Shortest-path_tree) in a weighted undirected graph. The goals of this project are to become better acquainted with:

  * implementing graph based algorithms;
  * using hashmaps and priorities queues in algorithms;
  * working with and around the data structures provided by the STL.

Your implementation of Dijkstra's algorithm must be based on the data structures provided by the STL, and must run in __O((n+m)log n)__ time when run on a graph with __n__ vertices and __m__ edges.

---------------

Data structures
---------------

### Hashmaps
This project will be making heavy use of hashmaps. In the STL hashmaps have the type [__std::unordered_map&lt;K, V&gt;,__](http://en.cppreference.com/w/cpp/container/unordered_map) where __K__ is the key type and __V__ is the value type. If you wish to use a __std::unordered\_map__ with types you have created, you may need to overload the appropriate operators and functions.

### Priority queues
The priority queue data structure is central to Dijkstra's algorithm. In the STL the type of a priority queue is [__std::priority_queue&lt;T, Container, Compare&gt;__](http://en.cppreference.com/w/cpp/container/priority_queue), where __T__ is the type of items stored in the priority queue, __Container__ is the type of the underlying container for items (normally __std::vector&lt;T&gt;__), and __Compare__ specifies how items are compared.

#### Template parameter: __T__
The type __T__ must implement the following operators: <, >, <=, >=, ==, !=, see [operator overloading](http://en.cppreference.com/w/cpp/language/operators#Relational_operators) for tips. This will be a class or struct that you define to hold both a priority and a vertex. The comparison operators should be based on the just the priority.

#### Template parameter: __Container__ 
In this project we will just use __std::vector__ for this parameter.


#### Template parameter: __Compare__
The STL priority queue is a max priority queue by default, i.e., it returns items of higher priority before items with lower priorities. For Dijkstra's algorithm we need a min priority queue. We could work around this problem by simply negating all of the priorities, but the more appropriate way of handling this situation is to use __std::greater&lt;void&gt;__ for the __Compare__ template parameter.

### Graphs
You may use any graph implementation that meets the required performance, but I would suggest you use __std::unordered\_map&lt;V,std::unordered\_map&lt;V,W&gt;&gt;__ where __V__ is the type of a vertex and __W__ is the type of an edge weight. In this project __V__ is __std::string__ and __W__ is __double__. This style of resenting graphs is popular in python ([an essay on the topic](https://www.python.org/doc/essays/graphs/)), and has similar syntactic benefits in C++.  You may want to create some helper functions for working with the graph, but this is not necessary.


--------------------

Dijkstra's algorithm
--------------------
The pseudocode for Dijkstra's algorithm is given below. This version of the algorithm does not use the decrease key operation, as the STL priority queue does not implement such a method. Instead we simply re-add the vertices to the priority queue when the priority is decreased.

    def dijkstra(graph, source):
        // Setup data structures
        distance = empty hashmap taking vertices to distances
        parent = empty hasmap taking vertices to vertices
        pqueue = empty priority queue

        // Initialize data structures
        for each vertex v in G:
            distance[v] = infinity
        distance[source] = 0
        pqueue.add(source, 0) // first arg is vertex, second arg is priority

        // Main algorithm loop
        while pqueue is not empty:
            v = pqueue.pop_min()
            for each neighbor u of v:
                new_distance = distance[v] + length of the edge from v to u
                if new_distance < distance[u]:
                    distance[u] = new_distance
                    parentpu[u] = v
                    pqueue.add(u, new_distance)

        // Return hashmaps
        return distance, parent

------------

File formats
------------
The input and output format for this project are strict. You may assume that the input files are exactly as described and we will assume the same about your output files.

### Input format
Vertex IDs will consist of a single string with no spaces, and edge weights will consist of a single double. The input format is:

    <Vertex ID>
    <Vertex ID> <Vertex ID> <edge weight>
    <Vertex ID> <Vertex ID> <edge weight>
    <Vertex ID> <Vertex ID> <edge weight>
    .           .           .
    .           .           .
    .           .           .
    <Vertex ID> <Vertex ID> <edge weight>

The first line is the starting vertex. Following the first line are one or more lines each representing an edge in the input graph with a given weight.

### Output format

The output format consists of __m__ lines (one for each vertex in the graph) of the form

    <Vertex ID>; <double>; <Vertex ID> <Vertex ID> ... <Vertex ID> 

where the first field is a vertex in the graph, the second field is its distance from the source, and the last the shortest path from the source represented as a space separate list of vertices. The lines should be sorted by the first field.

### Sample files
The data directory of the starter code contains some example of input and output.

---------

Your task
---------
Your task for this project is to write a program that will (1) read a graph in the given input format, (2) use Dijkstra's algorithm to find the shortest path tree of the input graph, and (3) print the results in the given output format. You will be reading the input file from __std::cin__ and writting the output file to __std::cout__.

Recall that the command

    make run < input.dat > output.dat

causes __std::cin__ to read from __input.dat__ and __std::cout__ to write to __output.dat__.

### Rules
For this project you may use any part of the STL that you like.

### Starter code
Project 4 starter code: [project4.tar.gz](project4.tar.gz)  

You can download this code at a terminal with the command:  
__wget "http://www.ics.uci.edu/~mbannist/teaching/ics46/project4.tar.gz"__


