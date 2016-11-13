---
layout: default
title: "CSCI 10: Homework 8"
mathjax: true
---

# Homework 8

## Due: Friday 11/18 at 10:30am

---

__Submission instructions:__ You will be submitting __two__ copies of your
homework: an electronic copy using Google Forms, and a physical copy in class.
Both copies are due at 10:30am, i.e., the start of class.

After submitting your solutions on Google Forms, you will receive an email with
a copy of your submitted answer. If you notice an error, resubmit your solutions.
Only your most recent submission before the due date will be graded.

[Google Forms link]()

---

__Problem 1:__

For this problem you will be defining four structs: `Driver`, `Car`, `License`
and `Date`. The `Date` struct consists of three integer values: year, month and day.
The `License` struct consists of a string value for the issuing state and a date
value for the expiration date. The `Car` struct consists of two string values for
the make and the model of the car and an integer value for the year. Finally, the
driver struct consists of `License` value for their driver's license, an array
(of size 100) of `Car` values for the cars they own and an integer count of how
many cars they own.

_You do not need to write a fully function program for this problem. You only
need to define structs as described above. However, you may if you wish write
and program to test your definitions._

---

__Problem 2:__

A 2D-point in the real plane may be represented in C++ by a struct

```cpp
struct Point2D {
    double x;
    double y;
};
```

In this problem you will be writing three functions to work with `Point2D` structs.

The first is `void print_point(Point2D p)`, which prints the point `p`. The point
should be printed as we would write it in a math class, i.e., you should print
`(7,11)` for the point where `p.x` is 7 and `p.y` is 11.

The second function is `Point2D get_point()`, which will as a user for an `x` and
a `y` value and then return the corresponding point.

The third and final function is `double distance(Point2D p, Point2D q)`, which
will return the distance between the points `p` and `q`. Recall, that the distance
formula is given by

$$\sqrt{(p.x - q.x)^2 + (p.y-q.y)^2}$$

You may use both `sqrt` and `pow` builtin functions here.

Finally, write a program that prompts the user for two points and returns the
distance between them.

---

__Problem 3:__

Complete Part B of Lab 8 in its entirety.

---
