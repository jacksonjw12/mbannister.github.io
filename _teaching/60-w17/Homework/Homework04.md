---
layout: default
title: "CSCI 60: Homework 4"
mathjax: true
---

# Homework 4

## Due: Friday 2/10 @ 11:59pm

---

__Submission instructions:__ You will be submitting your solutions through Camino.  
Please only submit the files requested on the submission page.

---

Write a program that reads in from a file that is formatted with a score and name
on each line. You will then print out to the screen a histogram representing the
scores. If you ran your code on the sample input here (Note, your code should
work for any file formatted this way, of any length) [scores.txt](scores.txt)
then you would get:

```
 0 X
 1 X
 2
 3 X
 4 XX
 5 XXX
 6 XXXXX
 7 XXX
 8 X
 9 X
10 XX
```

You will then prompt the user to ask if they would like to see the names of people
who got a given score. If they entered 5, for our sample input you would print:

```
Troy McClure
Rusty Shackleford
Ladybird Hill
```

When reading in from the input file, you should read into a map of type

```
map<int, pair<int, vector<string>>>
```

where the first `int` is the score, the second `int` is how many people got that score,
and the vector of strings is a list of everyone who got that score. This representation
is intentionally complicated, so you can get some practice with nested containers of
different types.

## Sample runs

I have included three sample runs with my implementation.

__Sample run 1:__

```
 0 X
 1 X
 2 
 3 X
 4 XX
 5 XXX
 6 XXXXX
 7 XXX
 8 X
 9 X
10 XX

Enter a number from 0 to 10 to see students with that score: 5
Troy McClure
Rusty Shackleford
Ladybird Hill
```

__Sample run 2:__

```
 0 X
 1 X
 2 
 3 X
 4 XX
 5 XXX
 6 XXXXX
 7 XXX
 8 X
 9 X
10 XX

Enter a number from 0 to 10 to see students with that score: 6
Todd Flanders
Lisa Simpson
Turanga Leela
Hank Rutherford Hill
Bill Dauterive
```

__Sample run 3:__

```
 0 X
 1 X
 2 
 3 X
 4 XX
 5 XXX
 6 XXXXX
 7 XXX
 8 X
 9 X
10 XX

Enter a number from 0 to 10 to see students with that score: 10
Bart Simpson
Patty Bouvier
```

