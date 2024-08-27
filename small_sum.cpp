You will be given a integer n, which denotes the number of elements in an array, and the whole array too.

Then you will be asked to perform q operations. Each operation is either of type 1 or type 2.

- Type 1: Chose an index i and half the element at postion i. You have to consider the floor value if the number is odd.

- Type 2: Chose an index i and twice the element at position i.

You have to print the sum of the array after all those operations. But you need to chose index wisely such that after doing q operations, the sum becomes minimum possible.

Input

The first line will contain an integer n.

The second line will contain n integers representing the whole array.

The next line will contain an integer q, denoting the number of the operations. 

The next line will contain q integers, each will be either 1 or 2 denoting the operation type.

1 <= n <= 105

1 <= arri <= 105

1 <= q <= 105

Additionally, you can safely assume that the number of type 2 queries will be no more than 32.

Output

Output a Single integer which is the minimum sum of the array elements after all operations are done. 

Example

Input

5

1 2 3 4 5

3

1 2 1

Output

11
