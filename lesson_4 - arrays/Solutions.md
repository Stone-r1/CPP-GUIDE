# Solutions


## NOTE
All the exercises from the `easy` section will have simple explanations, as their solution is pretty obvious and straightforward.

---

## Replacement
Read the integer N first, then read the N elements of array A. Replace each element in A with 1 if it is positive, or 2 if it is negative (leave 0 as it is). Then print the new array with elements separated by spaces.

### Note
Try solving this problem without using array.

---

## Replace MinMax
Read an integer N and an array of N distinct integers. Find the smallest and largest elements and their indices in the array. Swap the two elements and print the modified array space-separated.

---

## Fibonacci
Start with two variables a = 0 and b = 1, which represent the first two Fibonacci numbers. For each step from 2 to n, calculate the next number as the sum of a and b, then update a to b and b to the new sum. read more about fibonacci [here](https://cp-algorithms.com/algebra/fibonacci-numbers.html).

---

## Search In Matrix
Read the values of N (rows), M (columns), then the N × M elements of the 2D array, and finally the number X. Iterate through all elements of the array to check if any of them is equal to X. If found, print "will not take number", otherwise print "will take number".

---

## Is B a Subsequence of A?
Read arrays A and B of sizes N and M respectively. Keep a pointer front to maintain your position in array B (the potential sub-sequence). Iterate through array A, and whenever the current element in A matches the current element in B, advance front forward. If front reaches the end of B (i.e., front == M), then B is a sub-sequence of A, so print "YES", otherwise print "NO".

---

## Choose Elements
Given an array of n integers, select at most k elements such that their sum is maximum. Print that maximum sum.

## Brute Force Approach
Attempt all the combinations of at most k elements and calculate their sums. Keep the highest sum encountered.

## Why Brute Force Fails
Brute force won't succeed because there are an absolute multitude of potential combinations. choosing any number of objects from n has up to 2^n subsets, which is out of the question for n up to 1000.

## Key Idea
Sort the array in descending order and select the largest k non-negative elements. Since the negative numbers reduce the sum, we exclude them. This greedy approach maximizes the sum.

---

## Beautiful Matrix
You are given a 5×5 grid of all zeroes with a single one. You may swap adjacent columns or rows. Your goal is to move the 1 to the center of the grid (3rd row, 3rd column) in the fewest number of moves.

## Brute Force Approach
Try all the sets of correct column/row exchanges that place the 1 in the middle and note down the minimum number of steps.

## Why Brute Force Fails
Brute force is unnecessary and wasteful because there are too many sequences of swaps to try, and we only care about the shortest path. It doesn't fail, but is wasteful.

## Key Idea
Just find the 1's current position (x, y) and compute the Manhattan distance from (x, y) to (2, 2) (0-indexed). Each move changes the column or row by 1, so this distance will yield the answer directly.

## Additional
Try solving it without matrix.

---

## Maximum Increase
For a given array of n integers, find the maximum length of a strictly increasing subarray (a subarray being a sequence of consecutive elements).

## Brute Force Approach
Try all possible subarrays:
- For every starting point i, iterate through all ending points j and check if all elements from i through j are strictly increasing.
- Keep track of the maximum length encountered.

## Why Brute Force Fails
With n = 10^5, there are about 10^9 subarrays possible, which is unrealistic in time limit. We need a linear O(n) solution.

## Key Idea
We can traverse the array once maintaining a count of the current increasing subarray, clearing the count when the sequence is interrupted and Updating a variable maxLen to store the maximum so far encountered.

---

## City Day
For rainfall on given n days, find the first day d such that rain on day d is less than all the rain values on the previous x days and next y days. We are told that citizens only see the range max(1, d−x), d−1 and d+1, min(n, d+y).

## Brute Force Approach
The brute force solution checks every day from the first to the last and compares its rainfall to the rainfall on the x previous days and y subsequent days. If the current day has strictly less rainfall than all the days in that surrounding window, it is a qualifier, and we return its position right away. This is fine because x and y can be at most 7, so we are doing at most 14 comparisons per day. Since n can be as big as 100,000, this is at most 14 * 100000 comparisons, which is efficient enough.

## Why Brute Force Works
As the window size of comparisons preceding and succeeding any day is very small (≤ 7), even the straightforward approach of comparing every relevant neighbor day individually is adequate.

## Key Idea
The idea is to go through each day one by one from left to right and, for each, see if it is the minimum rain in its window of x previous and y subsequent days. The first time we find such a day, we stop and print its index.

---

## IQ Test
We are given n natural numbers (3 ≤ n ≤ 100), of which all but one are either even or odd. The question is to find the index of the number which is different in parity.

## Brute Force Approach
We iterate over the array, maintaining a count of even numbers and odd numbers. While counting, we also maintain the last seen index of each type.

## Why Brute Force Works
Since the restriction is small in size (n ≤ 100), a single linear scan is enough.

## Key Idea
Precisely one number differs in evenness, so the odd or the even count will be 1. We return the cached index of that singly occurring type.
