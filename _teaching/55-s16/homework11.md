---
layout: default
title: "Homework 11"
mathjax: true

---

# Homework 11

---

Due date: Wednesday 4/27/2016 in class  
Instructions: please turn in each part stapled separately. Label each part with

* your name,
* homework number,
* part and
* instructor name.

Please do not use paper torn off of a notebook.

---

## Part 1

### Problem 1

Recall that a __path__ in an undirected graph is a sequence of adjacent vertices, potentially consisting of just one vertex.

Let $$G = (V, E)$$ be an undirected graph. Define the relation $$\leftrightarrow$$ on $$G$$ as follows: for any $$v, w \in V$$, let $$v \leftrightarrow w$$ if and only there exists a path in $$G$$ from $$v$$ to $$w$$ and a path in $$G$$ from $$w$$ to $$v$$.

Show that $$\leftrightarrow$$ is an equivalence relation on $$V$$.

Remark: the equivalence classes defined by $$\leftrightarrow$$ are called the  __connected components__ of an undirected graph.

### Problem 2

Recall that a graph has no self-loops or parallel edges.

__a)__ What is the fewest number of connected components that an undirected graph on $$n$$ vertices and $$m$$ edges can have?  
__b)__ What is the most number of connected components that an undirected graph on $$n$$ vertices and $$m$$ edges can have?  

### Problem 3

Recall that a __path__ in a directed graph is like a path in an undirected graph, but needs to follow the direction of the edges.

Let $$G = (V, E)$$ be a directed graph. Define the relation $$\leftrightarrows$$ on $$G$$ as follows: for any $$v, w \in V$$, let $$v \leftrightarrows w$$ if and only there exists a path in $$G$$ from $$v$$ to $$w$$ and a path in $$G$$ from $$w$$ to $$v$$.

Show that $$\leftrightarrows$$ is an equivalence relation on $$V$$.

Remark: the equivalence classes defined by $$\leftrightarrows$$ are called the __strongly connected components__ of a digraph.

### Problem 4

Find the strongly connected components of the following graph.

![a digraph](digraph.svg){: style="width: 4in;"}

---

## Part 2

### Problem 5

An adjacency matrix is a way to represent a digraph on a computer. It is a 2-dimensional array of 1's and 0's. Specifically, let us number the vertices from $$1$$ to $$n$$. Then, there is a 1 in the $$ij$$-th entry (row $$i$$, column $$j$$) of the matrix if and only if there is an edge from vertex $$j$$ to vertex $$i$$.

__a)__ Draw the digraph whose adjacency matrix is

$$ \begin{pmatrix} 0 & 1 & 1 & 0 \\ 1 & 0 & 0 & 0 \\ 0 & 1 & 0 & 1 \\ 1 & 0 & 1 & 0 \end{pmatrix}$$

Use circles for vertices and arrows for edges.

__b)__ Recall that an undirected edge can be thought of as two directed edges, one in each direction. Find the adjacency matrix of <del>$$Q_4$$</del> <ins>$$Q_2$$</ins> (for a definition, see example 7, page 448, of the textbook).

__c)__ Describe a method for constructing the adjacency matrix of $$Q_n$$ from copies of the adjacency matrix of $$Q_{n-1}$$.


### Problem 6

Let $$G$$ be a graph with $$n$$ vertices.

__a)__ What is the maximum number of edges that an undirected graph can have, if self-loops and parallel edges are not allowed?  
__b)__ What is the O-notation as of your answer to part __a)__?  
__c)__ What is maximum number of edges that a directed graph can have, if self-loops and parallel edges are not allowed?  
__d)__ What is the O-notation as of your answer to part __c)__?

### Problem 7

The __complement of a graph__ $$G$$, denoted $$\overline{G}$$, has the same vertices as $$G$$, where two vertices are adjacent in $$\overline{G}$$ if and only if they are not adjacent in $$G$$.

__a)__ Find the complement of the square graph $$Q_2$$. Express your answer as a drawing.   
__b)__ Find a graph with four vertices that is isomorphic to its complement. Express your answer as a drawing.

### Problem 8

Let $$k$$ be a fixed positive integer. Show that a graph on $$n$$ vertices and $$m = n + k$$ edges can have at most $$2k + a$$ vertices of degree 3 or greater, where $$a$$ is the number of vertices of degree 1.

Hint: <hint>use the handshake/double-counting theorem.</hint>
