/*
 Title: Types of Time Functions in Algorithm Analysis
 Author: Inam Ul Haq
 Description:
    Time functions represent how the running time of an algorithm
    grows with respect to input size (n). They are used to classify
    algorithms based on efficiency.

		Types of Time Functions:

	1- Constant Time Function:
		- Execution time does not depend on input size
		- Same time for any value of n
		- Example form: T(n) = c
		- Time Complexity: O(1)

	2- Linear Time Function:
		- Execution time grows linearly with input size
		- One loop over n elements
		- Example form: T(n) = an + b
		- Time Complexity: O(n)

	3- Quadratic Time Function:
		- Execution time grows with square of input size
		- Usually involves two nested loops
		- Example form: T(n) = an^2 + bn + c
		- Time Complexity: O(n^2)
		
	4- Cubic Time Function:
		- Execution time grows with cube of input size
		- Usually involves three nested loops
		- Example form: T(n) = an^3 + bn^2 + cn + d
		- Time Complexity: O(n^3)
		
	5- Logarithmic Time Function:
		- Execution time grows logarithmically
		- Input size is reduced in each step
		- Example form: T(n) = a log n
		- Time Complexity: O(log n)
		
	6- Linearithmic Time Function:
		- Combination of linear and logarithmic growth
		- Common in efficient sorting algorithms
		- Example form: T(n) = n log n
		- Time Complexity: O(n log n)
		
	7- Exponential Time Function:
		- Execution time doubles with each increase in n
		- Very inefficient for large inputs
		- Example form: T(n) = 2^n
		- Time Complexity: O(2^n)

*/
