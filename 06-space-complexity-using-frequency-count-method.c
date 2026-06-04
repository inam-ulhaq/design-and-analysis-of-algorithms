/*
 Title: How to Calculate Space Complexity Using Frequency Count Method
 Author: Inam Ul Haq
 Description:
	This section explains the general procedure for calculating
	space complexity using the Frequency Count Method.
	It focuses on counting memory usage instead of execution time.

	What is Space Frequency Count:
		- It counts the memory locations used by an algorithm
		- Each variable, constant, and data structure is counted
		- Used to analyse space complexity theoretically (Priori analysis)
		
	Steps to Calculate Space Complexity:
		
		1- Identify Memory Components:
		    - Input variables
		    - Output variables
		    - Temporary (auxiliary) variables
		    - Data structures (arrays, lists, etc.)
		
		2- Assign Space to Each Component:
		    - Each variable occupies constant space
		    - Arrays or structures depend on input size (n)
		
		3- Count Frequency of Memory Usage:
		    - Count how many memory locations are required
		    - Ignore how many times a variable is accessed
		    - Count only allocation, not execution
		
		4- Form Space Function:
		    - Add all memory requirements
		    - Express total space as S(n)
		
		5- Determine Space Complexity:
		    - Remove constants
		    - Consider highest order term
		    - Express in Big-O notation

	Important Rules:
		- Loop iterations do NOT affect space complexity
		- Reuse of variables does NOT increase space
		- Only extra (auxiliary) memory matters

	Example:
		- If an algorithm uses 3 variables -> S(n) = O(1)
		- If it uses an array of size n -> S(n) = O(n)

	Conclusion:
		Space complexity using the Frequency Count Method
		is calculated by counting memory allocation,
		not the number of operations.
*/
