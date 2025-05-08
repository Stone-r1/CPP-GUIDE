# Conditions in C++

In C++, conditions are used to perform different actions based on whether a particular condition is true or false. The primary constructs for conditional statements are `if`, `else`, `else if`, (and `switch`, but that's for later).

## `if` statement
The `if` statement executes some part of code only when condition is true.

## Syntax
```cpp
int number = 5;
if (number > 0) {
    // do something
}
```

You can write any condition using **Logical** and **Comparison** operators.

## `else` statement
The `else` statement executes when only when `if` statement returns false (fails).

## Syntax
```cpp
int number = 5;
if (number < 0) {
    // do something
} else {
    // do something else
}
```

## `else if` statement
The `else if` statement checks multiple conditions.

## Syntax
```cpp
int age;
cin >> age;

if (age < 10) {
    // do something
} else if (age < 30) {
    // do something else
} else if (age < 50) {
    // do something else
} else {
    // works only when everything above has failed.
}
```
