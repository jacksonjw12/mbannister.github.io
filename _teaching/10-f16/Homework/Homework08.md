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

[Google Forms link](https://docs.google.com/a/scu.edu/forms/d/e/1FAIpQLSclxPRl2_HbSZLRfFcB0syPsB6nq_kuCCCLCmdqhNIp3eXPSw/viewform)

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

---

__Problem 1 Solution:__

```cpp
struct Date {
    int year;
    int month;
    int day;
};

struct License {
    string state;
    Date expiration;
};

struct Car {
    string make;
    string model;
};

struct Driver {
    License license;
    int car_count;
    Car cars[100];
};
```

---

__Problem 1 Solution:__

```cpp
#include <iostream>
#include <cmath>

using namespace std;

struct Point2D {
    double x;
    double y;
};

void print_point(Point2D p);
Point2D get_point();
double distance(Point2D p, Point2D q);

int main() {
    Point2D point1 = get_point();
    Point2D point2 = get_point();
    cout << "The distance between ";
    print_point(point1);
    cout << " and ";
    print_point(point2);
    cout << " is " << distance(point1, point2) << "." << endl;
    return 0;
}

void print_point(Point2D p) {
    cout << "(" << p.x << "," << p.y << ")";
}

Point2D get_point() {
    Point2D p;
    cout << "Enter x-value:";
    cin >> p.x;
    cout << "Enter y-value:";
    cin >> p.y;
    return p;
}

double distance(Point2D p, Point2D q) {
    return sqrt(pow(p.x - q.x, 2) + pow(p.y-q.y, 2));
}
```

---

__Problem 3 Solution:__

```cpp
#include <iostream>

using namespace std;

struct Matrix {
    int row1[3];
    int row2[3];
    int row3[3];
};

void printMatrix(Matrix m);
Matrix add(Matrix m1, Matrix m2);
Matrix sum(Matrix mats[], int sz);

int main() {
    Matrix m = { {1,2,3}, {4,5,6}, {7,8,9} };
    Matrix n = { {9,8,7}, {6,5,4}, {3,2,1} };
    cout << "m = \n";
    printMatrix(m);
    cout << "n = \n";
    printMatrix(n);
    cout << "m + n = \n";
    printMatrix(add(m,n));
    Matrix ms[3] = {m, n, m};
    cout << "m + n + m = \n";
    printMatrix(sum(ms,3));
    return 0;
}

void printRow(int row[], int sz) {
    for (int i = 0; i < sz; i++) cout << row[i] << " ";
}
void printMatrix(Matrix m) {
    printRow(m.row1, 3);
    cout << endl;
    printRow(m.row2, 3);
    cout << endl;
    printRow(m.row3, 3);
    cout << endl;
}

void addRow(int r1[], int r2[], int output[], int sz){
    for (int i = 0; i < sz; i++) output[i] = r1[i] + r2[i];
}

Matrix add(Matrix m1, Matrix m2) {
    Matrix output;
    addRow(m1.row1, m2.row1, output.row1, 3);
    addRow(m1.row2, m2.row2, output.row2, 3);
    addRow(m1.row3, m2.row3, output.row3, 3);
    return output;
}

Matrix sum(Matrix mats[], int sz) {
    Matrix output = {{0,0,0},{0,0,0},{0,0,0}};
    for (int i = 0; i < sz; i++) output = add(output, mats[i]);
    return output;
}
```

---
