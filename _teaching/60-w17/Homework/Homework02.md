---
layout: default
title: "CSCI 60: Homework 2"
mathjax: true
---

# Homework 2

## Due: Wednesday 1/27

---

__Submission instructions:__ You will be submitting your solutions through Camino.  
Please only submit the files requested on the submission page.

---

### Problem

For this homework you will be extending the `Complex` number class
[Example03](https://github.com/mbannister/SCU-CSCI-60-Examples/blob/master/Example03_SeparateCompilation/)
by adding additional overloaded operators. Currently, I have overloaded the
operators

```cpp
std::ostream& operator<<(std::ostream& os, Complex z);  // Printing
Complex operator+(Complex lhs, Complex rhs);            // Addition
Complex operator*(Complex lhs, Complex rhs);            // Multiplication
```

You will need to implement:

1. subtraction (`-`), division (`/`)
2. equality (`==`), inequality (`!=`)
3. assignment operators: `+=`, `-=`, `*=` and `/=`
4. unary operators: (`+`) which does nothing and (`-`) which negates both the
   real and imaginary parts
5. additionally add a public method `conj` which returns the conjugate
6. Tests code in `main` that tests all of the functions you wrote

### Advice

1. Learn all about operator overloading here:
   [http://en.cppreference.com/w/cpp/language/operators](cppreference.com).
   Some of the operators on this page have not yet been covered in CS 10 or 60,
   but you will know most of them by the end of CS 60.
2. If you need a review on complex numbers look here:
   [Wikipedia](https://en.wikipedia.org/wiki/Complex_number) Only the first few
   sections are relevant to this assignment.
3. Try to avoid writing extra code whenever possible.
