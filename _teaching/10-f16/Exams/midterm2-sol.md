---
layout: default
title: "CSCI 10: Exam 1 solution"
mathjax: true
---

# Exam 1 solution

For many of these problems there are multiple solutions.

__Problem 1 solution:__

```
a = 3; b = 5
a = 6; b = 7
a = 16; b = 7
```

__Problem 2 solution:__

```cpp
#include <iostream>

using namespace std;

int max(int a, int b);

int main() {
  for (int i = 0; i < 5; i++) {
    cout << i << " : ";
    for (int j = 0; j < 5; j++) {
      cout << "X";
    }
    // Error: The variable j is out of scope!
    cout << " : " << j;
    cout << endl;
  }

  int x = 0;
  int y = 0;
  cin >> x;
  cin >> y;

  max(x, y);
  // Error: The variable m is out of scope!
  cout << "The max of " << x << " and " << y << " is " << m << "." << endl;
  return 0;
}

int max(int a, int b) {
  int m = 0;
  if (a > b) {
    m = a;
  } else {
    m = b;
  }

  return m;
}
```

__Problem 2 solution:__

```cpp
#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cout << "n = ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0) {
                cout << "A";
            } else if (i == 0 && j == n - 1) {
                cout << "B";
            } else if (i == n - 1 && j == 0) {
                cout << "C";
            } else if (i == n - 1 && j == n - 1) {
                cout << "D";
            } else {
                cout << "X";
            }
        }
        cout << endl;
    }
    return 0;
}

```

__Problem 3 solution:__

```cpp
int num_sum(int a, int b) {
    int sum = a;
    for (int i = 0; i <= b; i++) {
        sum += i;
    }
    return sum;
}
```

__Problem 4 solution:__

```cpp
bool min_max(int a, int b, int &min, int &max) {
    if (a < b) {
        min = a;
        max = b;
    } else {
        min = b;
        max = a;
    }
    return (a == b);
}
```

__Problem 5 solution:__

```cpp
int count = 0;
for (int i = 0; i < sz; i++) {
    if (A[i] == 0) count++;
}
cout << count << endl;
```
