# Solutions


## NOTE
All the exercises from the `easy` section will have simple explanations, as their solution is pretty obvious and straightforward.

---

## Way Too Long Words
This solution reads n words and checks the length of all. If the length of a word is 10 or less, then it is printed normally; otherwise, it is abbreviated by printing the first letter, the count of letters between the first and the last (length of the string - 2 characters: the first and the last characters), and then the last letter. This follows the provided long word abbreviation rule in an effective way.

---

## Translation
We reverse the string t using the `reverse` function and compare it with the string s. If the reversed t is equal to s, then the translation was appropriate, and we print "YES"; otherwise, we print "NO." This checks if t is the reverse of s.

---

## Skibidus and Amog'u
For each test case, the program reads one form of an Amog'u noun, always with the suffix "us". It removes the last two characters ("us") and appends "i" to form the plural. This conversion is performed for each test case, and the corresponding plural form is printed.
- Try solving this problem using `.erase()` function.
- Try solving this problem without using any inbuilt function except for `.size()`.

---

## Dubstep
The program reads a string searching for the "WUB" substrings, which Vasya added to his remix. When "WUB" is found, it is skipped, and the non-"WUB" segments are printed as words separated by spaces. This restores the original song from the dubstep remix.
- Try solving this problem using inbuilt functions .find() and .erase().

---

## String
Let c be the number of 1s. On one hand, each operation can decrease c by at most 1, so the answer is at least c. On the other hand, by only operating on 1s each time, it takes exactly c operations, so the answer is at most c. Therefore, the answer is c.

---

## Pangram

