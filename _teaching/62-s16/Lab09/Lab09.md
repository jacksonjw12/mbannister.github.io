---
layout: default
title: "CS 62: Lab 09"
mathjax: true
---

# CS 62: Lab 09

## Wednesday March 30, 2016

## Timing Quicksort in Parallel

In this lab, we’ll once again be playing with sorting algorithms! This time our goal is to make them more efficient by using parallelism. You may work in pairs on this lab.


## Getting started

The starter files for this lab can be found in `/common/cs/cs062/labs/lab09`. You will notice that this version of `Quicksort` is a bit clunkier than earlier versions you have seen. It is invoked by creating a new `QSManager` and then invoking its `run` method. Similarly each recursive call creates a new `QSManager` and then calls its run method. The reason for the extra overhead of creating new objects for each call is to make it easier to generalize this for parallel execution.

Start by running the main method of `QSManager` to get timing information on `Quicksort`. Notice that the code runs the sort routine 10 times to "warm up" the code, and then runs it another 10 times to get timing values. It reports each of those times as well as the minimum of those 10 times.

Please answer these questions. You can open up a text editor and write your answers there if you wish.

__1)__ Why is there variance in these numbers? (Hint: it is more than just the application continuing to warm up.)

The program also prints out the first 10 elements of the sorted array so that you can make sure the array is correctly sorted after you make modifications to the code later in the lab.

Write down the minimum time for 10,000 elements and 20,000 elements by changing the value of the constant `NUM_ELEMENTS`.

__2)__ Do these numbers make sense given our analysis of the big-O complexity of quicksort?

## Running in Parallel

Modify the code in `QSManager` so that the recursive calls run in parallel. This can be accomplished by making `QSManager` extend `Thread` and invoking it with start rather than run when you want to start a separate thread. (Refer to the "Parallelism and Concurrency" text or your lecture notes for additional details).

We would like the code to run as efficiently as possible, so only create a single new thread when you make the recursive calls (and the initial call can also run in the same thread as the rest of the main program). Your code should be very similar to that of our final attempt at summing an array using Java’s `Thread` class. Don’t forget to wait for the new thread to complete before returning from the run method. Also, be careful of the order that you write the code to ensure that it really runs in parallel and not sequentially. Using this version of the program, write down the minimum times for 10,000 and 20,000 elements in the array.

__3)__ Explain why you think this version of QuickSort is faster or slower (depending on your results) than the previous version.


## More cores == more speed?

In this final part of the lab we will see how our code runs on the departs server with 48 cores!

We will use SSH to connect to the server from the lab computers (if you account is expired, you will need to get it reset to do this part of the lab). The command to connect to the server is

```bash
ssh <username>@project2.cs.pomona.edu
```

Where you will need to replace `<username>` with your actual username. When I do this I get

```bash
ssh mbannister@project2.cs.pomona.edu
mbannister@project2.cs.pomona.edu's password:
```

I then enter my password and hit enter (note your password will not be echoed to you). If your login was successful you will get something that looks like this

```bash
Welcome to Ubuntu 12.04.5 LTS (GNU/Linux 3.2.0-30-generic x86_64)

 * Documentation:  https://help.ubuntu.com/

  System information as of Wed Mar 30 10:16:55 PDT 2016

  System load:  1.04                Processes:              405
  Usage of /:   53.0% of 406.10GB   Users logged in:        0
  Memory usage: 2%                  IP address for eth0:    134.173.66.121
  Swap usage:   0%                  IP address for docker0: 172.17.42.1

  Graph this data and manage this system at:
    https://landscape.canonical.com/h

mbannister@project2 ~ $
```

You screen may not look exactly like this, and that is ok. If you look around in this terminal, you will find that all of your file are here. In fact, the two file systems are kept in sync through magic! So navigate to you current lab and use the knowledge you gained in the last lab to run your program in this terminal. Even though the files are all the same, when you run programs they are run on the remote server.

## What to turn in

Save your answers to the questions above and the times for the three different versions of the program for 10,000 and 20,000 elements in a text file named `Lab09 LastNameFirstName.txt`. Include at the end of the file the code for your last version of the program. If you worked with a partner, put both of your names at the top of the text file. Also, remember to include JSON file with your information!
