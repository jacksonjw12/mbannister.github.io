---
layout: default
title: "CSCI 10: Homework 4"
mathjax: true
---

# Homework 4

## Due: Friday 10/21 at 10:30am

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

__Problem 3:__ In this problem you will write a C++ program to play the
"Guess the Number" game. The game will be played as follows: first the program
will pick a random number between 1 and 100, and you will be given eight chances
to guess the number. After each guess, the program will tell you if your guess
is too high, too low or correct. You win if you guess the number within eight
guesses.

I have included an outline of the program below, using a combination of actual
C++ code and pseudocode comments. When implementing this program try to break your program
down into functions as we did in Example 12, but don't worry about
having some code in your `main` function.

```cpp
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    // Initialize Random Number Generator:
    // We 'start' the random number generator with the current time and call the
    // rand() function once. This will make it so each run of the program will
    // generate a differ, and unpredictable, number.
    srand(time(0));
    rand();

    // Pick a random "secret" number between 1 and 100.

    // Loop 8 time or until the player has guessed correctly
        // Prompt the user for a guess and read in their guess
        // Check the players guess
            // If the guess is too high/low let them know
            // If the guess is correct let them know and end the loop

    // If the player won, say so
    // If the player lost, say so and tell them the number

    return 0;
}
```

__Sample run 1:__

```
I have picked a random number between 1 and 100!
Can you guess the number?
Enter a guess: 50
Too high!
Enter a guess: 25
That is correct!
You win!
```

__Sample run 2:__

```
I have picked a random number between 1 and 100!
Can you guess the number?
Enter a guess: 50
Too low!
Enter a guess: 75
Too low!
Enter a guess: 87
Too high!
Enter a guess: 81
Too low!
Enter a guess: 84
Too low!
Enter a guess: 85
That is correct!
You win!
```

__Sample run 3:__

```
I have picked a random number between 1 and 100!
Can you guess the number?
Enter a guess: 1
Too low!
Enter a guess: 2
Too low!
Enter a guess: 3
Too low!
Enter a guess: 4
Too low!
Enter a guess: 5
Too low!
Enter a guess: 6
Too low!
Enter a guess: 7
Too low!
Enter a guess: 8
Too low!
You lost!
I was thinking of 33.
```

---
