# Bersu Ball

This code solves a problem related to finding the maximum number of "valid pairs" that can be formed from two sorted arrays a and b. A valid pair consists of elements where the absolute difference between their values is less than or equal to 1.

## Algorithm Overview:

1. Preparation (main function):

- Reads the sizes (n and m) of arrays a and b, followed by their elements.
- Sorts both arrays in ascending order for better calculations.
- Creates a table (dp) to store solutions for subproblems (avoiding redundant calculations). All values in dp are initially set to -1.

2. Recursive Helper Function (bersuBallHelper):

This function takes positions (i and j) within arrays a and b.

- Base Cases:
  - If i or j is out of bounds (no valid pairs possible), it returns 0.
  - If the value in dp[i][j] is not -1 (already calculated), it returns the stored value to avoid repetition.
- Calculations:
  - Initializes a variable z to 0.
  - Checks if the difference between the current elements (a[i] and b[j]) is less than or equal to 1. If so:
    - Increments z for a valid pair and makes a recursive call to consider the next elements in both arrays (i + 1 and j + 1).
  - Makes two more recursive calls:
    - Skips b[j] in b and moves to the next element in a (i + 1, j).
    - Skips a[i] in a and moves to the next element in b (i, j + 1).

- Return Value:
  Returns the maximum value among z (including a valid pair), the result from skipping b[j], and the result from skipping a[i]. This represents the maximum number of valid pairs considering the current elements and their compatible pairs.

3. Main Logic (main function):

- Calls bersuBallHelper with starting positions (i = 0 and j = 0) to calculate for the entire arrays.
- Prints the final result, which represents the maximum number of valid pairs that can be formed from arrays a and b.

## Example:

input.txt:
```
4
1 4 6 2
5
5 1 5 7 9
```
output.txt:
```
3
```
In this example, the maximum number of valid pairs that can be formed from the arrays is 3.
