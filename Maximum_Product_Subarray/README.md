# Maximum Product Subarray

This code implements a dynamic programming solution to the "Maximum Product Subarray" problem. The objective is to find the contiguous subarray within a given array that has the largest product of its elements.

## Algorithm Overview

Here's a breakdown of its key steps:

1. Preprocessing:

- Reads input: Reads the array size n and its elements from the file "input.txt".
- Initializes DP table: Creates a 1D DP table dp of size n filled with 1s (representing individual elements as subarrays).

2. maximumProductSubarray Function:

- Parameters: Takes the input vector nums and its size n.
- Iterates through the array twice:
  Left to Right:
  - Initializes a variable prod to 1 (current product within a subarray).
  - For each element nums[i]:
    - Calculates a new product by multiplying the current prod with nums[i].
    - Compares the new product with the previous maximum product at dp[i].
    - Chooses the larger value (maximum product seen so far) and updates dp[i] accordingly.
    - Resets prod to 1 if nums[i] is zero (as a new subarray starting from the next element might be more promising).
  Right to Left:
  - Repeats similar calculations, considering subarrays in reverse order (initializing prod back to 1 and iterating from n - 1 to 0).
- Returns: The final maximum product, stored in dp[0].
      
3. Main Function:

- Handles edge case: Returns 0 if n is 0.
- Calls maximumProductSubarray: Finds the maximum product subarray using the input vector nums and its size n.
- Applies modular arithmetic: Ensures result stays within expected range (ans % mod).
- Prints result: Outputs the maximum product to the file "output.txt".