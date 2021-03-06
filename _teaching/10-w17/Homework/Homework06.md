---
layout: default
title: "CSCI 10: Homework 6"
mathjax: true
---

# Homework 6

## Due: Monday 2/27 at 11:59pm

---

__Submission instructions:__ You will be submitting your assignments through Camino.

---

__Problem 1:__

Write a function named `int find_value(int A[], int sz, int value)` that takes as input an array of integers `A`, the size of `A`
and an integer `value`, such that the function returns the index of the first entry in `A` that is
equal to `value`. If no entry in `A` is equal to `value`, then your function
should return the size of `A`.

Additionally, you must write a short main method to test your function with at
least three different inputs. Your program does not need to be interactive.

__Sample inputs and outputs__

```
find_value({1, 2, 3, 4, 5}, 5, 3)                 returns    2
find_value({11, 2, 15, 88, 99, 11, 88}, 5, 88)    returns    3
find_value({11, 7, 22, 7, 82, 84}, 6, 21)         returns    6
```

---

__Problem 2:__

For this program you will write a few functions to compute some common statistical
measures of the data (the data is stored as `double`s) in an array.

First, write a function `double average(double A[], int sz)` that computes and returns the average (mean)
of the array. Recall, that the average is computed with the formula:

$$\bar{x} = \frac{x_1 + x_2 + \cdots x_n}{n}$$

Next, write a function `double deviation(double A[], int sz)` that computes and returns the standard deviation
of an array. Recall, that the standard deviation is computed with the formula:

$$S = \sqrt{\frac{(x_1 - \bar{x})^2 + (x_2 - \bar{x})^2 + \cdots + (x_n - \bar{x})^2}{n}}$$

Your `deviation` functions should not compute the average, but instead should call
your `average` functions.

Additionally, you must write a short main method to test your function with at
least three different inputs. Your program does not need to be interactive.

__Sample input and outputs__

```
1, 2, 3, 4, 5, 6, 7, 8, 9    has average of 5 and standard deviation of 2.582
7, 11, 7, 22, 82, 84         has average 35.5 and a standard deviation of 33.964
7, 909, 3, 4, 99, 22         has average 174 and a standard deviation of 330.400
```

---

__Problem 3:__

For this problem you will be completing the part of the lab that is beyond the
"minimum stopping point". So please complete steps 5--8 within Part B of your
lab. If you completed these during lab, you may submit the code from lab.

Additionally, you must write a short main method to test your function with at
least three different inputs. Your program does not need to be interactive.

__Sample input and outputs__

The only perfect numbers less than 50 are 6 and 28.

---

__Challenge Problem (ungraded):__ Read about two-dimensional arrays in the
textbook, and then use the two dimensional array to write a tic-tac-tow game.
First, see if you can get the game working with two human players. Once you get
that working, create a computer player that randomly picks a position. Finally, if
you have made it this far come by office hours and I will help you write an AI
that will always win or force a draw.

