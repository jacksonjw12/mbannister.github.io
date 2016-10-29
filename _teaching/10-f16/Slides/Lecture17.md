---
layout: default
title: "Midterm 2 practice problems"
mathjax: true
---

# Midterm 2 practice problems

These are a collection of problems to think about and do not necesarrily represent
the contents of the midterm exam.

__Problem 1 (Fizz Buzz):__

Print the numbers 1..100; For multiples of 3, print "Fizz" instead of the number; For multiples of 5, print "Buzz" instead of the number; For multiples of 3 and 5, print "Fizz Buzz" instead of the number.

The output should look like:

```
1, 2, Fizz, 4, Buzz, Fizz, 7, 8, Fizz, Buzz, 11, Fizz, 13, 14, Fizz Buzz, 16, 17, Fizz, 19, Buzz, Fizz, 22, 23, Fizz, Buzz, 26, Fizz, 28, 29, Fizz Buzz, 31, 32, Fizz, 34, Buzz, Fizz, ...
```

__Problem 2:__

Sum the elements in an array. More specifically add code to the following to sum
the array `A.`

```cpp
// Sum an array

#include <iostream>

using namespace std;

int main() {
	const int sz = 10;
    int A[sz] = {1,2,3,4,5,6,7,8,9,10};
    //
    // Add code here to sum the elements in A. After the code is added the
    // program should print 55
    //
    cout << sum;
}
```

__Problem 3:__

What does the following program print?

```cpp
#include <iostream>

using namespace std;

int larry(int &x);
int moe(int x);
int curly(int &x);
int slap(int &x);
int slip(int x);

int main() {
    int u = 7;
    int v = 11;

    cout << "u = " << u << "; v = " << v << endl;
    v = slap(u);
    cout << "u = " << u << "; v = " << v << endl;
    u = slip(v);
    cout << "u = " << u << "; v = " << v << endl;
}

int larry(int &x) {
	x = x + 1;
	return x * x;
}

int moe(int x) {
	x = 2 * x;
	return x + 1;
}

int curly(int &x) {
	x = x * x;
	return 2 * x;
}

int slap(int &x) {
	int a = larry(x);
	int b = moe(x);
	return a + b;
}

int slip(int x) {
	int a = curly(x);
	int b = larry(x);
	return a + b;
}
```
__Problem 4:__

Write a function that takes as input two integers and returns both their product
and their sum. Since you are returning two values you will need to use call-by-reference.

__Problem 5:__

Explain why the following code is invalid:

```cpp
#include <iostream>

using namespace std;

int main() {
	for (int i = 0; i < 6; i++) {
		cout << "Hello";
	}
	cout << i;
}
```

__Problem 6:__

Write a function `double tri_area(double base, double height)` that computes the
area of a triangle, using the formula $$A=\frac{1}{2}bh$$.
