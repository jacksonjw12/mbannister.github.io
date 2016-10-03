---
layout: default
title: "CSCI 10: Homework 2"
mathjax: true
---

# Homework 2

## Due: Wednesday 10/5 at 10:30am

---

__Submission instructions:__ You will be submitting __two__ copies of your
homework: an electronic copy using Google Forms, and a physical copy in class.
Both copies are due at 10:30am, i.e., the start of class.

The procedure for copying and pasting your code into the form will be demonstrated
in class on Monday (10/3).

After submitting your solutions on Google Forms, you will receive an email with
a copy of your submitted answer. If you notice an error, resubmit your solutions.
Only your most recent submission before the due date will be graded.

[Google Forms link](//docs.google.com/a/scu.edu/forms/d/e/1FAIpQLScqacVldQD_wrVxZXwNTRDc_A9wTM4VGZ6bsKfotPYAvreUSw/viewform)

---

__Problem 1:__ Determine the output of the program given below. _Remark: It
would be easy for you to simply run the program to get the answer, but first
try to solve the problem based on your knowledge of C++. If you are
unsure of how operations works: look them up in the book, ask on Piazza, or
ask in office hours._

```cpp
#include <iostream>

using namespace std;

int main() {

    int a = 1;
    int b = 2;
    int c = 3;
    int A = 4;
    int B = 5;

    if (B < A || (b < c && a < c)) {
        cout << "TRUE!!!\n";
    } else {
        cout << "FALSE!!!\n";
    }

    cout << (b + B) % A << "\n";
    a += c;
    cout << a * b * c << "\n";
    cout << ++a << "\n";
    cout << a << "\n";
    cout << b++ << "\n";
    cout << b << "\n";

    return 0;
}
```

---

__Problem 2:__ For this problem you will write a program that turns a given
wavelength of light into its corresponding color name. Your program will read an
integer from the user representing the wavelength. If the number is outside of
range from 380 to 750 (inclusive), then the light is not visible and an error
message must be printed. If the wavelength is in the visible range, then the program will
print the color corresponding to the wavelength based on the table below.

| Color Name | Wavelength |
|------------|------------|
| Violet     | 380--449   |
| Blue       | 450--494   |
| Green      | 495--569   |
| Yellow     | 570--589   |
| Orange     | 590--619   |
| Red        | 620--750   |
{:style="width: auto; margin-right: auto; margin-left:auto; border-width: 1px; border-style: solid;"}

Here are a few example runs of a correct solution to Problem 3:

```
Please enter a wavelength: 575
Yellow
Program ended with exit code: 0
```

```
Please enter a wavelength: 1000
Error: not visible!
Program ended with exit code: 0
```

```
Please enter a wavelength: 385
Violet
Program ended with exit code: 0
```

---

__Problem 3:__ For this problem you will write a program that converts an amount
of time given in seconds to an amount of time given in days, minutes and
seconds. Your program will read an integer from the user representing an amount
of time in seconds, and then it will print the corresponding number of years, days, hours,
minutes and seconds. You program should get pluralization correct, i.e., it
should not print "1 days". _Recall: There are 60 seconds in a minute,
60 minutes in an hour, 24 hours in a day and 365 days in a year (we are not concerned
    with leap years)._

Here are a few example runs of a correct solution to Problem 2:

Run 1:

```
Please enter time in seconds: 31536002
1 year 2 seconds
Program ended with exit code: 0
```

Run 2:

```
Please enter time in seconds: 1234567890
39 years 53 days 23 hours 31 minutes 30 seconds
Program ended with exit code: 0
```

Run 3:

```
Please enter time in seconds: 63159300
2 years 1 day 15 minutes
Program ended with exit code: 0
```

---
