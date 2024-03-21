# Rotate Function Problem:

This code tackles the "Rotate Function" problem. Here, you're given an array nums of integers and its size n. The goal is to find the maximum sum that can be obtained by performing a series of rotations on the array.

A rotation involves shifting all elements of the array by one position to the right. The last element becomes the new first element.

## Algorithm Overview

Here's how the code achieves this:

1. Preprocessing (main function):

- Reads input: Reads the array size n and its elements from the file "Rotate_Function_input1.txt".
- Initializes vector: Creates a vector nums to store the input array elements.

2. rotateFunction Function:

- Parameters: Takes the input vector nums and its size n.
- Calculates Initial Values:
  - sum: Stores the sum of all elements in the array.
  - f: Represents the initial function value (defined as the sum of i \* nums[i] for each element i and its corresponding value nums[i]).
- Iterates through the array (except the first element):
  - Updates f efficiently by leveraging the previously calculated sum and current element nums[i - 1]. This avoids recalculating the entire sum in each iteration.
  - Compares the updated f with the current maxSum and updates maxSum if necessary.
- Returns: The final maxSum, representing the maximum sum achievable after rotations.
  
3. Main Function:

- Calls rotateFunction: Finds the maximum sum after rotations using the input vector nums and its size n.
- Prints result: Outputs the maximum sum to the file "Rotate_Function_output1.txt".

Time Complexity: ```O(n)```
Space Complexity: ```O(1)``` (uses constant extra space)