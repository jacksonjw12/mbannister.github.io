---
layout: default
title: "CSCI 10: Homework 9"
mathjax: true
---

# Homework 9

## Due: Friday 12/02 at 10:30am (Not considered late until Monday 12/5.)

---

__Submission instructions:__ You will be submitting __two__ copies of your
homework: an electronic copy using Google Forms, and a physical copy in class.
Both copies are due at 10:30am, i.e., the start of class.

After submitting your solutions on Google Forms, you will receive an email with
a copy of your submitted answer. If you notice an error, resubmit your solutions.
Only your most recent submission before the due date will be graded.

[Google Forms link](https://docs.google.com/a/scu.edu/forms/d/e/1FAIpQLSe7V6H543bfgydrlzsarZwG55-2338veSrFwqTRMLknBkQ1Zw/viewform)

---

__Problem 1:__

For this problem you will write a program that writes a program! More specifically
write a program that creates a file `hello.cpp`, which contains a simple "Hello World"
program. _Note: There is no reason to get clever here, take the most direct path._

---

__Problem 2:__

For this problem you will write a program that remove C++ comments from a text
file. More specifically, given an input file (`input.txt`) your program will
produce an output file (`output.txt`) which is an exact copy of the input, but
does the output does not contain lines for which the first two non-whitespace
characters are `//`. Your are not required to remove comments when `//` characters
are after non-whitespace characters, and you are not required to handle C-style
comments: `/* C-Style comment */`.

__Sample input and output:__

Given `input.txt`:

```
Hello World
// My first comment!
/ This is not really a comment

    // This comment is indented!

ABC // This is a comment you do not need to handle
1 / 2 <- Just a fraction!
//
/
```

Your program produces `output.txt`:

```
Hello World
/ This is not really a comment


ABC // This is a comment you do not need to handle
1 / 2 <- Just a fraction!
/
```

---

__Problem 3:__

For this program you will write a program that reverses a file. More specifically,
given an input file (`input.txt`) your program will reverse every line in the
input. This program does not have an output file, as it modifies the input file
directly. You may assume that your input file has 1000 lines or less, if this
helps. _Note: If you get stuck on how to solve this problem, please ask for help._

__Sample input and output:__

Before your program runs `input.txt`:

```
Hello World!
Santa Clara University
C++

Computer Science
```

After your program runs `input.txt`:

```
!dlroW olleH
ytisrevinU aralC atnaS
++C

ecneicS retupmoC
```

---
