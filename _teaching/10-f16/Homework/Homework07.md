---
layout: default
title: "CSCI 10: Homework 7"
mathjax: true
---

# Homework 7

## Due: Friday 11/11 at 10:30am

---

__Submission instructions:__ You will be submitting __two__ copies of your
homework: an electronic copy using Google Forms, and a physical copy in class.
Both copies are due at 10:30am, i.e., the start of class.

After submitting your solutions on Google Forms, you will receive an email with
a copy of your submitted answer. If you notice an error, resubmit your solutions.
Only your most recent submission before the due date will be graded.

[Google Forms link](https://docs.google.com/a/scu.edu/forms/d/e/1FAIpQLSf4lm28b8WjdOhoXnmM40BFn2bScUAIyjXAt3rZVI5gpLJaEA/viewform)

---

__Problem 1:__

For this problem you will be implementing a function `int str2int(string s)` that
converts a string representing an integer into the actual integer. This is what
happend when you use `cin` to get an integer from the user. Remeber to handle
the negative sign! The only builtin string function you may use is the `length` function.
For this problem the `pow` functions is also forbidden.

Additionally, you must include a main function which tests your `string2int`
function on at least three inputs.

---

__Problem 2:__

For this problem you will be implementing function `string remove_vowels(string s)`,
which returns a copy of `s` with all of the vowels removed. Your function must
remove both lower cas and upper cases vowels, and must leave all other characters
unchanged. The only builtin string function you may use is the `length` function.

Additionally, you must include a main function which tests your `remove_vowels`
function on at least three inputs.

__Sample inputs and outputs:__

```
Input: The quick red fox jumped over the lazy brown dog.
Output: Th qck rd fx jmpd vr th lzy brwn dg.
Input: Hello my NAME is Michael!!!
Output: Hll my NM s Mchl!!!
Input: You're are taking CSCI 10 at SCU.
Output: Y'r r tkng CSC 10 t SC.
```

---

__Problem 3:__

For this problem you will be implementing two functions, `string reverse(string s)`
and `bool palindrome(string s)`. The function `string reverse(string s)` returns
a copy of `s` that has been reverse. So if given as input "Michael" it will return
"leahciM". A palindrome is a string that reads the same forwards and backwards, i.e.,
it is equal to its reverse. An example of a palindrome is "racecar". The function
`bool palindrome(string s)` returns `true` if `s` is a palindrome and `false` otherwise.
The only builtin string function you may use is the `length` function.

Additionally, you must include a main function which tests both your `reverse` and `palindrome`
functions on at least two inputs each.

---

---

__Problem 1 Solution:__

```cpp
#include <iostream>
#include <string>

using namespace std;

int str2int(string s);

int main() {
    cout << str2int("1234")<<endl;
    cout << str2int("-87")<<endl;

    return 0;
}

int str2int(string s) {
    bool negative = false;
    if (s.at(0) == '-') {
        negative = true;
    }

    int num = 0;
    int i = 0;
    if (negative) i++; // Skip first character
    for (; i < s.length(); i++) {
        num *= 10;
        num += (s.at(i) - '0');
    }
    if (negative) num *= -1;
    return num;
}
```

---

__Problem 2 Solution:__

```cpp
#include <iostream>
#include <string>

using namespace std;

string remove_vowels(string s);
bool is_vowel(char c);

int main() {
    string test = "The quick red fox jumped over the LAZY brown dog.";
    cout << test << endl;
    cout << remove_vowels(test) << endl;
    return 0;
}

string remove_vowels(string s) {
    string output;
    for (int i = 0; i < s.length(); i++) {
        if (!is_vowel(s.at(i))) {
            output += s.at(i);
        }
    }
    return output;
}

bool is_vowel(char c) {
    return (c == 'A') || (c == 'a') ||
        (c == 'E') || (c == 'e') ||
        (c == 'I') || (c == 'i') ||
        (c == 'O') || (c == 'o') ||
        (c == 'U') || (c == 'u');
}
```

---

__Problem 3 Solution:__

```cpp
#include <iostream>
#include <string>

using namespace std;

string reverse(string s);
bool palindrome(string s);

int main() {
    string test1 = "Michael";
    string test2 = "racecar";

    cout << test1 << endl;
    cout << reverse(test1) << endl;

    cout << test1 << " " << palindrome(test1) << endl;
    cout << test2 << " " << palindrome(test2) << endl;

    return 0;
}

// This is slow, but it works!
string reverse(string s) {
    string output;
    for (int i = 0; i < s.length(); i++) {
        output = s.at(i) + output;
    }
    return output;
}

bool palindrome(string s) {
    return s == reverse(s);
}
```

---
