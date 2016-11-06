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

[Google Forms link]()

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
