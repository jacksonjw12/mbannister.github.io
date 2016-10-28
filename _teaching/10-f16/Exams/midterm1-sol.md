---
layout: default
title: "CSCI 10: Exam 1 solution"
mathjax: true
---

# Exam 1 solution

For many of these problems there are multiple solutions. 

__Problem 1 solution:__

Comming soon...

__Problem 2 solution:__

```
16
2
1
2
YES
0
1
0
1
```

__Problem 3 solution:__

```cpp
#include <iostream>

using namespace std;

int main() {
    double radius = 0;
    cout << "Enter radius: ";
    cin >> radius;
    cout << "The area is " << 3.14 * radius * radius << "\n";
    return 0;
}
```

__Problem 4 solution:__

```cpp
#include <iostream>

using namespace std;

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    if (a <= b && a <= c) {
        cout << b + c;
    } else if (b <= a && b <= c) {
        cout << a + c;
    } else {
        cout << a + b;
    }
    cout << "\n";
}
```

__Problem 5 solution:__

```cpp
#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 100; i++) {
        cout << "Michael J. Bannister\n";
    }
}
```
