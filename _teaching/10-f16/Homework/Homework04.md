---
layout: default
title: "CSCI 10: Homework 4"
mathjax: true
---

# Homework 3

## Due: Wednesday 10/19 at 10:30am

---

__Submission instructions:__ You will be submitting __two__ copies of your
homework: an electronic copy using Google Forms, and a physical copy in class.
Both copies are due at 10:30am, i.e., the start of class.

After submitting your solutions on Google Forms, you will receive an email with
a copy of your submitted answer. If you notice an error, resubmit your solutions.
Only your most recent submission before the due date will be graded.

[Google Forms link]()

---

__Problem 1:__ Determine the output of the program given below. _Remark: It
would be easy for you to simply run the program to get the answer, but first
try to solve the problem based on your knowledge of C++. If you are
unsure of how operations works: look them up in the book, ask on Piazza, or
ask in office hours._

```cpp
#include <iostream>

using namespace std;

int f(int a, int b);
int g(int x, int y);
int h(int a, int b);

int main() {
    int a = 1;
    int b = 2;
    int c = 3;

    a = f(a, b);
    cout << a << endl;
    cout << b << endl;

    b = g(a, c);
    cout << b << endl;
    cout << c << endl;

    c = h(a++, b+c);
    cout << c << endl;
    cout << a << endl;

    return 0;
}

int f(int a, int b){
    a += b;
    return a + b;
}

int g(int x, int y){
    x++;
    return y;
}

int h(int a, int b) {
    return f(a, a) * g(b, b);
}
```

__Problem 2:__ In this problem you will write a C++ function (`double area(double a, double b, double c);`) to compute the area
of a triangle with side lengths $$a$$, $$b$$ and $$c$$---the side length should
be stored using `double`s. To do this computation you will use
[Heron's formula](https://en.wikipedia.org/wiki/Heron%27s_formula):

$$A = \sqrt{s(s-a)(s-b)(s-c)}\qquad\text{where}\qquad s = \frac{a+b+c}{2}$$

If any of the quantities $$a$$, $$b$$, $$c$$ or $$s(s-a)(s-b)(s-c)$$ is negative,
the then there is no triangle with side lengths $$a$$, $$b$$ and $$c$$. In this
case your function should return an area of $$-1$$.

Additionally, you will write a short main method to test your function. Your test
program should ask the user for three side length and then return the area if
the sides lengths are valid and an error message otherwise.

__Problem 3:__ The number guessing game.
