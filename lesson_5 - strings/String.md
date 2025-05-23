# Strings in C++
Strings are character sequences used in C++ to store and work with text, including words, sentences, and even numerical data in text format. In order to use strings, we must include a special header called `<string>`, which gives us access to the string class and all of its features. Because the string class enables dynamic management of character sequences, a string's size can change as needed without requiring manual memory management. Because of this, it is far more practical than conventional character arrays, which call for null termination and explicit size management. Concatenation, comparison, substring extraction, and search are just a few of the many operations that strings in C++ can perform, making them indispensable for tasks like data formatting, input handling, and text processing.

## Syntax
```cpp
string stringName;
```

You can initialize string outright using assignment operator and the text enclosed inside "" double quotes like this:

```cpp
string stringName = "Something";
```

## Accessing String
To access characters in a string in C++, you simply declare it like this: `string name = "Hello";`. You can access individual characters using index notation, for example, `name[0]` gives `'H'`.

```cpp
string stringName = "Something"; // <- Initialize the string.
char letter1 = stringName[0]; // <- Access the first element ('S');
char letter2 = stringName[5]; // <- Access the sixth element ('h');
```

You can think of a string as a collection of characters, where each element can be accessed or modified using an index, much like an array. However, strings offer much broader functionality! For example, you can dynamically change string's size.

```cpp
string stringName = "I Like ";
stringName += "Pizza";
// Now string looks like this: "I Like Pizza".
```


```cpp
string stringName = "Data";
stringName[3] = 'e'; 
// Now string looks like this: "Date".
stringName[0] = 'L';
// Now string looks like this: "Late".
```

--- 

## C Style Strings
Back in the days of C programming, It was more labour-intensive and prone to mistakes to work with strings. Programmers were forced to use character arrays, sometimes referred to as C-style strings, in place of the practical string class. These are character arrays of fixed size that terminate with the special null character '\0' to indicate the string's end. "Hello" would be stored as char word[] = {'H', 'e', 'l', 'l', 'o', '\0'}; for instance. Because C-style strings don't automatically control their size or memory like modern C++ strings do, developers had to be very cautious when using array boundaries and making manual changes. Although C-style strings are still used in C++ for compatibility or low-level operations, they are usually regarded as less secure and more difficult to deal with than their contemporary counterparts. For additional information visit [this](https://www.learncpp.com/cpp-tutorial/c-style-strings/) link.

---

## String Functions
As I have mentioned above, C++ provides some inbuilt functions.

---

### `size()`
This function is used to find the size of the string.

```cpp
string stringName = "Something";
int sizeOfTheString = stringName.size();
// now sizeOfTheString holds the value 9.
```

---

### `length()`
This function is identical to the previous one. It is used to find the size of the string.

```cpp
string stringName = "Something";
int lengthOfTheString = stringName.length();
// now lengthOfTheString holds the value 9.
```

### Note:
`size()` and `length()` are functionally identical, so you can use either based on your preference.

---

### `substr()`
This function is used to create a substring from a given string.

```cpp
string originalString = "Something";

// syntax: substr(starting position (index), length);
string substring = originalString.substr(0, 5); 
// now substring is "Somet";
```

---

### `empty()`
This function checks if the string is empty.

```cpp
string originalString = "abc";
bool isEmpty = originalString.empty();
// isEmpty is false, because the string is not empty.
```

---

### `find()`
This function finds the first occurrence of a substring or character in the string and returns its index. If no such index found, returns `string::npos` (-1).

```cpp
string originalString = "Hello World!";
int position = originalString.find("Hello");
// position holds the value of 0, as it's the position of the first occurence of the string "Hello".
```

---

### `replace()`
This function replaces part of the string with another string.

```cpp
string originalString = "I Like Pizza";
// syntax looks like this: replace(starting position, length, new value);
originalString.replace(7, 11, "Burger");
// now string looks like this: "I Like Burger".
```

---

### `erase()`
This function removes characters from the string, starting at a given position.

```cpp
string originalString = "Something";
originalString.erase(0, 5); // removes the first 5 characters
```

---

### `insert()`
This function inserts a string at a given position.

```cpp
string originalString = "Hello ";
originalString.insert(6, "World"); 
// now string looks like this: "Hello World".
```

### `reverse` For Strings
Just like arrays, strings can also be reversed using the reverse function. But instead of using pointers like word and word + n, we use .begin() and .end() with strings.

```cpp
string word = "hello";
reverse(word.begin(), word.end());
// now the string looks like this: "olleh"
```

---

These are the most crucial string functions that are regularly utilised in ordinary C++ development, competitive programming, and the resolution of challenging issues.  Gaining proficiency in these features will enable you to handle and work with text more effectively, which will make solving a variety of problems simpler.

## ASCII and Strings
Each character in a string is encoded as a number in the ASCII (American Standard Code for Information Interchange) encoding. ASCII assigns a distinct number to each character, including letters, digits, punctuation, and control characters. For example, 'A' is 65, 'B' is 66, and 'a' is 97. Typecasting means converting one data type into another. For example, you might want to turn a char (like 'A') into an int (like 65), or a float (like 3.14) into an int (which becomes 3). Representing characters as numbers means that arithmetic and comparison operations can be performed on characters. This is especially useful for problems involving character sorting, encryption, or letter case conversions. For example, you can convert a lowercase letter to uppercase by subtracting 32 from its ASCII value:

```cpp
char lower = 'a';
char upper = (char)(lower - 32); // typecasting integer value to it's ascii character
// upper is now 'A'
```

## Checking If a Character is Uppercase or Lowercase
In C++, you can check if a character is uppercase or lowercase simply by comparing it to its ASCII range. All characters are stored as numbers (ASCII values), so comparisons like 'A' <= ch && ch <= 'Z' are valid and effective.

## Syntax
```cpp
char character = 'A';
if (character >= 'A' && character <= 'Z') {
    cout << "UpperCase" << endl;
} else if (character >= 'a' && character <= 'z') {
    cout << "LowerCase" << endl;
} else {
    cout << "Not a letter" << endl;
}
```

## NOTE
- Uppercase letters fall within 'A' to 'Z' (ASCII 65–90).
- Lowercase letters fall within 'a' to 'z' (ASCII 97–122).

For more information about ASCII table visit these websites:
[theory](https://www.ascii-code.com/articles/Beginners-Guide-to-ASCII).
[practical use](https://www.geeksforgeeks.org/cpp-program-to-print-ascii-value-of-a-character/)
