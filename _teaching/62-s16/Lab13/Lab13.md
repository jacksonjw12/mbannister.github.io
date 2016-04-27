---
layout: default
title: "CS 62: Lab 13"
mathjax: true
---

# CS 62: Lab 13

# Wednesday April 20, 2016

---

<div class="warning" markdown="1">
## Remark:

This lab write-up frequently mentions Assignment 13, which we will not be working on this semester. However, I will be posting the assignment for those interested.
</div>

This lab will serve as a warm-up for Assignment 13. You will be working with the provided graph ADT to implement two graph algorithms. The first algorithm is an edge reversal, i.e., the algorithms takes an input graph and returns a graph which is identical to the input but all of the edges are reversed. You will use this function as part of Assignment 13 to test strong connectivity. The second algorithm is breadth-first search. In Assignment 13 you will be implementing Dijkstra’s algorithm which is essentially breadth-first search, replacing the queue with a priority queue.

## Getting Started

First, copy the starter code over from the usual locations, and read over the API for the graph ADT, described using JavaDocs in `graph.h`. You will also being using a queue for this assignment, which has been provided to you in `queue.h` (its the doubly linked list from a previous lab). Once you understand the API we will be using when working with graphs, read over the JavaDocs in `graph_lib.h`, which contains the specifications for the two functions you will be implementing for this lab.

## Edge reversal

Your edge reversal should run in $$O(n + m)$$ time and must only access the graph through the functions declared in graph.h, i.e., you should not try to directly manipulate struct graph. There are several ways to implement this method; if you get stuck coming up with an algorithms, you should feel free to ask one of us for help. Make sure you thoroughly test this method! Test cases will be given on the whiteboards, but feel free to create your own (an add them to the whiteboards). You may want to uncomment my debugging code to print the underlying graph.

## Breadth-first search

You will be implementing the breadth-first search algorithm, as described in class. In lab you will only be implementing the "basic" breadth-first search algorithm, i.e., you will explore all vertices reachable from a single vertex without restarting to explore the entire graph. Recall, that the “basic” breadth-first search takes a connected graph and produces a spanning tree represented using an array of parents. The entire solution to this problem is contained in the hints section below, but should make sure you understand every line you are typing! You should thoroughly test this method as well, and compare your results with the examples on the white boards.

## Assignment 13

You may freely use code form this lab while implementing Assignment 13.

## Submission

You should submit this assignment the same way that you have submitted other C assignments.

## Hints (Scroll down for hints)

<div style="height: 10in;"></div>

### Hint 0: An outline

```c
void graph_bfs(graph* G, vertex_t start, vertex_t* parent)
{
    size_t n = graph_vertex_count(G);
    // Hint 1: Create an array "marked" of size n, and set marked to false for all
    // Hint 2: Create a queue Q, add start and mark start

    while (!queue_empty(Q))
    {
        // Hint 3: Set current to the vertex at the front of the queue and remove
        // Hint 4: Create an array, neighbors, of all of the neighbors of current
        // Hint 5: Add all unmarked neighbors to the queue and mark
    }
}
```

<div style="height: 10in;"></div>

### Hint 1

```c
bool marked[n];
for (size_t i = 0; i < n; i++)
{
    parent[i] = i;
    marked[i] = false;
}
```

<div style="height: 10in;"></div>

### Hint 2

```c
marked[start] = true;
queue* Q = queue_create();
queue_add_last(Q, start);
```

<div style="height: 10in;"></div>

### Hint 3

```c
vertex_t current;
queue_get_first(Q, &current);
queue_remove_first(Q);
```

<div style="height: 10in;"></div>

### Hint 4

```c
size_t current_deg;
graph_degree(G, current, &current_deg);
vertex_t neighbors[n];
graph_neighbors(G, current, neighbors);
```

<div style="height: 10in;"></div>

### Hint 5

```c
for (size_t i = 0; i < current_deg; i++)
{
    if (!marked[neighbors[i]])
    {
        marked[neighbors[i]] = true;
        parent[neighbors[i]] = current;
        queue_add_last(Q, neighbors[i]);
    }
}
```
