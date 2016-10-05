---
layout: default
title: "CSCI 10: Homework 3"
mathjax: true
---

# Homework 3

## Due: Wednesday 10/12 at 10:30am

---

__Submission instructions:__ You will be submitting __two__ copies of your
homework: an electronic copy using Google Forms, and a physical copy in class.
Both copies are due at 10:30am, i.e., the start of class.

After submitting your solutions on Google Forms, you will receive an email with
a copy of your submitted answer. If you notice an error, resubmit your solutions.
Only your most recent submission before the due date will be graded.

[Google Forms link](//docs.google.com/a/scu.edu/forms/d/e/1FAIpQLSdmG2sv_QyH8wMjd0X1FYqVc-MVk23BpQiV8Q8lj4yVGclDNQ/viewform)

__Warning: These problems are tricky. Make sure you start early and ask questions when/if you get stuck.__

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

    for (int i = 5; i > 0; i--) {
        i--;
        cout << i << "\n";
    }

    int k = 10;
    while (k < 10) {
        cout << "X";
        k++;
    }

    for (int r = 0; r < 3; r++) {
        for (int s = 0; s < 3; s++) {
            if (r < s) {
                cout << "4";
            } else {
                cout << "2";
            }
        }
        cout << "\n";
    }

    return 0;
}
```

---

__Problem 2:__ For this problem you will be writing a program that computes a
student's average quiz grade. The program will
first ask the user for the total number of quiz scores. Then it will
ask for the score on each quiz. Finally, the average will be reported to the user.
_Hint: The number of quizzes is an `int`, but the quiz scores are `double`s._

Sample run 1:

```
How many quiz scores do you have? 3
What was the score for Quiz 0? 2
What was the score for Quiz 1? 2
What was the score for Quiz 2? 2
The average quiz score is 2.
Program ended with exit code: 0
```

Sample run 2:

```
How many quiz scores do you have? 5
What was the score for Quiz 0? 1
What was the score for Quiz 1? 2
What was the score for Quiz 2? 3
What was the score for Quiz 3? 4
What was the score for Quiz 4? 5
The average quiz score is 3.
Program ended with exit code: 0
```

Sample run 3:

```
How many quiz scores do you have? 2
What was the score for Quiz 0? 1
What was the score for Quiz 1? 8
The average quiz score is 4.5.
Program ended with exit code: 0
```

---

__Problem 3:__ For this problem you will be writing a program that prints a
rectangle of `X`s like we did in class, but with a little twist---you will also
be printing a two character thick frame of `#`s. The program will first ask the
user for a width and a height (the width and the height should be greater than
0, and an error must be printed if they are not). Then it will print the desired
rectangle of `X`s and `#`s. Make sure you carefully look at the sample runs to
understand what should be printed.

Sample run 1:

```
What is the width? 4
What is the height? 1
########
########
##XXXX##
########
########
Program ended with exit code: 0
```

Sample run 2:

```
What is the width? 3
What is the height? 6
#######
#######
##XXX##
##XXX##
##XXX##
##XXX##
##XXX##
##XXX##
#######
#######
Program ended with exit code: 0
```

Sample run 3:

```
What is the width? 0
What is the height? 4
Both width and height must be greater than 0!
Program ended with exit code: 0
```

---
