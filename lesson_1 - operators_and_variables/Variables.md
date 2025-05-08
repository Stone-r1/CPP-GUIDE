# C++ Variables

## What is a Variable?
A **variable** in C++ is a named storage location that holds a value which can be modified during program execution. It must be declared with a type.

---

## Variable Declaration Syntax
```cpp
type variable_name;
type variable_name = value;
```

## Data Types
Data types specify the type of data that a variable can store.

## Fundamental Data Types
- `int` - Integer
- `float` - Single-precision floating-point
- `double` - Double-precision floating-point
- `char` - Character
- `bool` - Boolean (true/false)
- `void` - No value 

## Modifiers
Typically used with **Fundamental Data Types**
- `unsigned` - Only allows non-negative values
- `signed` - Default (Allows both negative and positive values) 
- `long` - Larger than int
- `short` - Smaller than int
- `long long` - Larger than long

## Example 
```cpp
unsigned int age = 25; // it can be only positive
short int temp = -100; // values up to 2^16
long population = 7000000000; // up to 2^32
long long distance = 9223372036854775807; // up to 2^64
float number1 = 1.15f; // adding f at the end of number is crucial in floats, however it's better practice to use doubles.
double number2 = 1.15;
char c = 'A' // when writing char, make sure to use '' instead of ""
```
