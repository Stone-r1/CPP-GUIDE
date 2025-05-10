# Sorting and Reversing Arrays in C++

When working with arrays in C++, we often need to sort their elements in some specific order or reverse their order. This proves to be helpful in many day-to-day scenarios, for example sorting test scores, arranging prices, or reversing an order of steps. C++ provides effective ways to accomplish both easily through native functions. All the functions in this paragraph need `<algorithm>` header.

## Sorting Arrays.
What is sorting? Sorting means arranging the elements of the array in either ascending or descending order. In order to do that we need to include `<algorithm>` header.

## Syntax
```cpp
sort(array, array + size);
```

## Example
```cpp
int arr[5] = {4, 7, 1, 3, 5};
sort(arr, arr + 5);
// now array looks like this: {1, 3, 4, 5, 7};
```
--- 

## How to sort in descending order?
Now you might be wondering: how do I sort in descending order. There are two ways to do so. The first one is by the other way I am about to explain: reverse. The second method suggests using a custom comparator. I will begin with the comparator. The sort function also takes an optional argument which is not obligatory but may prove useful in such cases.

## Syntax
```cpp
sort(array, array + size, comparator);
```

Let's put aside creating our own comparator and see what's already available. To sort in descending order we should use `greater<type>()` comparator.

## Example
```cpp
int arr[5] = {4, 7, 1, 3, 5};
sort(arr, arr + 5, greater<int>()); // <- here type is int becuase array's type is int.
// now array looks like this: {7, 5, 4, 3, 1};
```

---

## Reverse
The second solution to the same problem is to sort in ascending order first and then reverse the array. Reverse is a simple function that reverses the array.

## Syntax
```cpp
int arr[5] = {4, 7, 1, 3, 5};
reverse(arr, arr + 5);
// now array looks like this: {5, 3, 1, 7, 4};
```

## Example
Let's sort array in descending order!
```cpp
int arr[5] = {4, 7, 1, 3, 5};
sort(arr, arr + 5);
reverse(arr, arr + 5);
// arr after sort: {1, 3, 4, 5, 7}
// arr after reverse: {7, 5, 4, 3, 1}
```

---

## Note
The sort function works between two pointers (or indexes), so you can sort just a portion of the array if you want.

## Example
```cpp
int arr[5] = {4, 7, 1, 3, 5};
sort(arr, arr + 3);
// array after sorting looks like this: {1, 4, 7, 3, 5};
```

Same works for reverse function:
```cpp
int arr[5] = {4, 7, 1, 3, 5};
reverse(arr, arr + 3);
// array after reversing looks like this: {1, 7, 4, 3, 5};
```

--- 

## Swap
Sometimes in programming, we want to exchange the values of two variables or elements. In C++, the easiest way to do that is with the built-in swap function. It works with all primitive data types (`int`, `double`, `char`, `float`, etc.)

## Syntax
```cpp
swap(elementA, elementB);
```

## Example
```cpp
int a = 10, b = 20;
swap(a, b);
// now a = 20 and b = 10.
```
