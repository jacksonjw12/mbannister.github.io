---
layout: default
title: "CSCI 10: Homework 5"
mathjax: true
---

# Homework 5

## Due: Friday 10/28 at 10:30am

---

__Submission instructions:__ You will be submitting __two__ copies of your
homework: an electronic copy using Google Forms, and a physical copy in class.
Both copies are due at 10:30am, i.e., the start of class.

After submitting your solutions on Google Forms, you will receive an email with
a copy of your submitted answer. If you notice an error, resubmit your solutions.
Only your most recent submission before the due date will be graded.

[Google Forms link](https://docs.google.com/a/scu.edu/forms/d/e/1FAIpQLSfpKjphLa1K6YjW5SbE16Cm-jGd7qaZJzCwR15R5cBL-xDGGQ/viewform)

---

__Problem 1:__ Determine the output of the program given below. _Remark: It
would be easy for you to simply run the program to get the answer, but first
try to solve the problem based on your knowledge of C++. If you are
unsure of how operations works: look them up in the book, ask on Piazza, or
ask in office hours._

```cpp
#include <iostream>

using namespace std;

void weird(int &a, int &b, int &c);
void strange(int a, int &b);

int main() {
    int x = 3;
    int y = 11;
    int z = 7;
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    weird(x, y, z);
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    strange(x, y);
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    weird(y, y, y);
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    strange(z, z);
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    return 0;
}

void weird(int &a, int &b, int &c) {
    int  temp = a;
    a = b;
    b = c;
    c = temp;
}

void strange(int a, int &b) {
    a *= 2;
    b *= 2;
    int temp = b;
    b = a;
    a = temp;
}
```

---

__Problem 2:__ In this problem you will improve on your solution to Problem 2 in
Homework 4. Instead of just returning the area of the triangle with the given
side length you will now return its permitter as well. The new function will use
call-by-reference to "return" the area and the permitter of the triangle with
the given side lengths. The function will also return (in the normal way) a `bool`, more specifically
`true` if the side lengths are valid and `false` otherwise. When the side lengths
are not valid the area and the permitter are not returned.

Additionally, you must write a short main method to test your function. Your test
program should ask the user for three side length and then print the area and
permitter if the sides lengths are valid and an error message otherwise.

__Use  of global variables will result in heavy grading penalties.__

---

__Problem 3:__ Write a program that reads in a length in feet and inches and
outputs the equivalent length in meters and centimeters. Use at least _three_
functions: one for _input_, one or more for _calculating_, and one for _output (printing)_.
Include a loop that lets the user repeat this computation for new input values
until the user says he or she wants to end the program. There are 0.3048 meters
in a foot, 100 centimeters in a meter, and 12 inches in a foot.

To complete this program you will need to use call-by-reference when a function
need to return more than one value. Also, you may find that some of your function
do not return anything, i.e., they are `void` returning.

__Use  of global variables will result in heavy grading penalties.__

---

__Challenge Problem (ungraded):__ For this challenge problem you will create a
income tax calculator. First, you should create a calulator that take the annual
income of a single person with no children, and prints out how much the person
must pay in taxes. An explanation on how this computation works can be found at
the [Khan Academy](https://www.youtube.com/watch?v=DtCfOMl3qo0). Next, extend
your program so that it can compute the taxes a married couple must pay. For the
married couple compute the total taxes they must pay as a married couple and the
taxes they would have paid if they were not married and taxed as individuals.
Sometime a married couple will pay more in taxes and somtime they will pay less,
see this [video](https://www.youtube.com/watch?v=SX_DzTb95mM). For the current
years tax brackets see the following
[IRS Page](https://www.irs.com/articles/projected-us-tax-rates-2016).

There are limitless ways in which you can extend this program...
