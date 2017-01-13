---
layout: default
title: "CSCI 60: Homework 1"
mathjax: true
---

# Homework 1

## Due: Wednesday 1/18

---

__Submission instructions:__ You will be submitting your solutions through Camino.  
Please only submit the files requested on the submission page.

---

### Problem

Write a complete C++ program that:

1. asks the user of the program for a number `num`
2. reads through a file `input.txt` counting the number of times each word occurs
3. prints out to the screen those words that occur more than `num` times, together with their actual count

For simplicity, allow words to contain punctuations, i.e., words are just strings of characters with no spaces.
Additionally, you may assume that are at most <del>500,000</del> <ins>50,000</ins> distinct words in the input file.

_This homework problem attempts to use everything you learned in CSCI 10 in one problem and will be difficult to complete if left to the last minute._

### Sample output

For the same output I am using as input the book Alice's Adventures in Wonderland by Lewis Carroll ([link](http://www.gutenberg.org/files/11/11-0.txt)).

```
Please enter a minimum word frequency: 500
the : 1664
of : 596
and : 780
to : 773
a : 662
```

```
Please enter a minimum word frequency: 300
in : 401
the : 1664
of : 596
and : 780
it : 356
was : 329
to : 773
she : 484
a : 662
said : 416
you : 301
```

```
Please enter a minimum word frequency: 100
in : 401
for : 146
the : 1664
of : 596
at : 211
and : 780
with : 214
it : 356
or : 137
this : 122
Alice : 221
was : 329
to : 773
very : 127
her : 203
on : 148
she : 484
had : 175
but : 105
a : 662
as : 246
be : 154
so : 104
I : 260
that : 226
all : 168
not : 122
they : 109
‘I : 121
said : 416
you : 301
little : 117
```
