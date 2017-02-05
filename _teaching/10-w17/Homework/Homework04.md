---
layout: default
title: "CSCI 10: Homework 4"
mathjax: true
---

# Homework 4

## Due: Friday 2/10 @ 11:59pm

---

__Submission instructions:__ You will be submitting your solutions using Camino.

---

__Problem 1:__ Determine the output of the program given below. _Remark: It
would be easy for you to simply run the program to get the answer, but first
try to solve the problem based on your knowledge of C++. If you are
unsure of how operations works: look them up in the book, or
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

---

__Problem 2:__ In this problem you will write a C++ function, `double area(double a, double b, double c);`, to compute the area
of a triangle with side lengths $$a$$, $$b$$ and $$c$$---the side length should
be stored using `double`s. To do this computation you will use
[Heron's formula](https://en.wikipedia.org/wiki/Heron%27s_formula):

$$A = \sqrt{s(s-a)(s-b)(s-c)}\qquad\text{where}\qquad s = \frac{a+b+c}{2}$$

If any of the quantities $$a$$, $$b$$, $$c$$ or $$s(s-a)(s-b)(s-c)$$ is negative,
 then there is no triangle with side lengths $$a$$, $$b$$ and $$c$$. If the
side length do not correspond to a valid triangle, then your function should
return an area of $$-1$$.

Additionally, you must write a short main method to test your function. Your test
program should ask the user for three side length and then print the area if
the sides lengths are valid and an error message otherwise.

__Sample run 1:__

```
Enter the length of side a = -1
Enter the length of side b = 2
Enter the length of side c = 3
Those side lengths did not come from a triangle...
```

__Sample run 2:__

```
Enter the length of side a = 3
Enter the length of side b = 4
Enter the length of side c = 5
The area of the triangle is 6.
```

__Sample run 3:__

```
Enter the length of side a = 5
Enter the length of side b = 10
Enter the length of side c = 13
The area of the triangle is 22.4499.
```

---

__Problem 3:__ In this problem you write a C++ program that could be used to
calculate an appropriate tip at a restaurant. The tip will be calculated as
20% of the bill if the service was great and 15% of the bill if the service
was not great. The point of this problem is to break the program up into
functions, which each complete a small task. I have already implemented `main`
for you below.

You will be writing the following functions for this problem:

- `double get_cost();`
- `bool was_service_great();`
- `double compute_tip(double cost, bool great);`
- `void display_results(double cost, double tip, bool great);`

Try to interpret what each function should do based on its name, and how it is
used in the main given to you.

```cpp
#include <iostream>

using namespace std;

//
// Add missing function declarations here
//

int main() {
    double cost = get_cost();
    bool great = was_service_great();
    double tip = compute_tip(cost, great);
    display_results(cost, tip, great);
    return 0;
}

//
// Add missing function definitions here
//
```

Once the program is fully implemented it should operate as shown in these examples.

__Sample run 1:__

```
How much did your meal cost? 10
Was the service great (y/n)? y
For a meal that cost 10 and service that was great, you should leave a tip of 2.
```

__Sample run 2:__

```
How much did your meal cost? 100
Was the service great (y/n)? n
For a meal that cost 100 and service that was not great, you should leave a tip of 15.
```

__Sample run 3:__

```
How much did your meal cost? 35
Was the service great (y/n)? y
For a meal that cost 35 and service that was great, you should leave a tip of 7.
```
