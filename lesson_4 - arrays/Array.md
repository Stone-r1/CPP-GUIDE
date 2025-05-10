# Arrays in C++

Imagine this: You want to store 3 students' scores. Necessarily you can define 3 variables and store the scores in them, but let's say the number of students is 100 or 100000. Instead of defining separate variables, you can define one 'group' of scores. This group is called an **array**.

```cpp
// making separate variables.
int score1 = 5;
int score2 = 6;
int score3 = 7;

// making one 'group'.
int scores[3] = {5, 6, 7};
```

In C++, the counting actually starts from 0, not 1. So when we write int `scores[3];`, the valid positions are 0, 1, 2. It might feel a little strange at first, but you’ll get used to it quickly, as most programming languages start counting from 0.

## Syntax

```cpp
type arrayName[size];
```

Explanation:
- `type` is the kind of values the array holds.
- `arrayName` is the name you give to the array.
- `size` is how many items it can hold.

Optionally, you can add elements manually:

```cpp
type arrayName[size] = {element1, element2, element3, ... size-th element};
```

## Example

```cpp
int numbers[5] = {1, 2, 3, 4, 5}; // <- array of integers that contains 5 elements.
char letters[3] = {'a', 'b', 'c'}; // <- array of characters that consists of 3 elements.
```

--- 

## Accessing Elements
When you declare an array in C++, you're declaring a collection of values stored in one place. But declaring the array won't do, because you'll often need to read, change, add to, print, etc. it. To do all that, you need some way of accessing the array and changing the values. This is called accessing elements. Think of an array as a line of drawers. Defining the array creates the drawers. Accessing the elements is like opening a specific drawer to see what's inside or put something new in.

## How To Access Elements
You use the array name followed by square brackets [] with the index number inside.

## Syntax

```cpp
arrayName[index];
```

## Example

Reading array:
```cpp
int numbers[3] = {1, 2, 3};

numbers[0]; // gives 1
numbers[1]; // gives 2
numbers[2]; // gives 3
numbers[3]; // gives error, because third index is out of bounds.
```

Changing array:
```cpp
int numbers[3] = {1, 2, 3};

numbers[0] = 5; // changes the 0th element in the array to 5
numbers[1] = 6; // changes the 1th element in the array to 6
numbers[2] = 7; // changes the 2th element in the array to 7

// now, after changing array it looks like this: {5, 6, 7};
```

## 2D Arrays (Matrices)
A matrix is an array with rows and columns. For example:
```
1 2 3
4 5 6
```
This is a matrix (or 2D array) with 2 rows and 3 columns. in C++, you can represent matrix using:
```cpp
int matrix[2][3];
// pseudo-code:
type matrixName[rows][columns];
```

## Important Notes
- Once you declare the size of an array, you can't change it.
- The first element is at index 0, not 1.
- Loops and arrays complement each other. For a for loop, you can read or write every element.
```cpp
// quick example
int n = 5;
int array[n];
for (int i = 0; i < n; i++) {
    array[i] = i;
}
// after 5 iterations array will look like this: {0, 1, 2, 3, 4};
```
- You can give values right when you create the array.
- C++ won't warn you if you go out of bounds. This can cause bugs or crashes.
- You can have arrays inside arrays, like a grid or table.
```cpp
// quick example
int grid[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
// It will look like this:
// [[1 2 3]
//  [4 5 6]
//  [7 8 9]]
```
