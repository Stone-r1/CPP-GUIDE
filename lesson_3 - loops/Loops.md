# Loops in C++

In C++ programming, there are occasions when it is necessary to perform an operation multiple times or a specified number of times. For example, suppose we want to print “Hello World” five times. We could complete this task by manually printing "Hello World" five times. While this is possible for 5 times, there may be cases where the task requires the programmer to do something thousands or even millions of times. In such cases, loops come into play, allowing users to repeatedly execute a block of statements any number of times. There are three types of loops known as the `for` loop, the `while` loop and the `do-while` loop.

---

## `for` loop
`for` loop is used when the number of iterations is known.

## Syntax
```cpp
// for(initialization; condition; update)

// we initialize a starting variable (i) and give it a value of 0 (starting point).
// then comes the following condition (as long as i is less than 5 do something).
// and we update the value of i (i becomes more by 1 per iteration).
for (int i = 0; i < 5; i++) {
    // do something
}
```

## Program that outputs "Hello World" 5 times.
```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        cout << "Hello World" << endl;
    }
}
```

---

## `while` loop
The `while` loop is used in situations where we do not know the exact number of iterations of the loop beforehand.

## Syntax
```cpp
while (condition) { // while some condition is true
    // body of the loop
    // update expression
}
```

## Program that outputs "Hello World" 5 times.
```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (i < 5) {
        cout << "Hello World" << endl;
        i++;
    }
}
```

---

## `do-while` loop

The `do-while` loop is similar to the `while` loop, but with one important difference: it checks the condition **after** running the code inside the loop. This means the loop body will **always execute at least once**, even if the condition is false from the start.

## Syntax
```cpp
do {
    // body of the loop
    // update expression
} while (condition); // condition is checked after one execution
```

## Program that outputs "Hello World" 5 times.
```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 0;
    do {
        cout << "Hello World" << endl;
        i++;
    } while (i < 5);
}
```
