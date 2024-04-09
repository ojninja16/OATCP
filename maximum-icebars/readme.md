# Maximum Ice Bars

## Approach

The problem of finding the maximum number of ice cream bars a boy can purchase given his budget and the prices of available ice cream bars can be efficiently solved by sorting the prices in ascending order and iterating through them while subtracting from the budget.

## Steps

1. **Sort Prices:**

   - Arrange the array `costs` in ascending order to have the ice cream bars sorted by price.

2. **Initialize Variables:**

   - Initialize a variable `ans` to 0 to track the quantity of ice cream bars purchased.

3. **Purchase Ice Cream Bars:**

   - Iterate through each ice cream bar price in the sorted `costs` array.
   - Check if the boy's current amount of coins is less than or equal to the cost of the ice cream bar.
     - If so, increase `ans` by 1 and deduct the price of the ice cream bar from the boy's total coin count.
   - Repeat the above step until the boy runs out of coins or there are no more ice cream bars available for purchase.

4. **Result:**
   - Finally, return the value of `ans` as the maximum allowed amount of ice cream bars the boy can buy.

## Implementation Details

The implementation can be done in any programming language, such as C++, Python, or Java. Here are the key points:

- Read the number of ice cream bars available and the boy's budget.
- Read the prices of the ice cream bars into an array `costs`.
- Implement the algorithm to determine the maximum number of ice cream bars the boy can buy.
- Output the result, i.e., the maximum allowed amount of ice cream bars.

## Complexity Analysis

- **Time Complexity:**
  - Sorting the prices takes O(n log n) time, where n is the number of ice cream bars available.
  - Iterating through the sorted array and purchasing ice cream bars takes O(n) time in the worst case.
  - Overall, the time complexity is dominated by the sorting step, so it's O(n log n).

- **Space Complexity:**
  - Sorting the array usually requires O(n) extra space.
  - The additional space complexity is O(1) for other variables used in the algorithm.
  - Overall, the space complexity is O(n).

This algorithm efficiently solves the problem of maximizing the number of ice cream bars the boy can buy given his budget and the prices of available ice cream bars.