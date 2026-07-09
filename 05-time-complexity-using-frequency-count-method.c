/*
 Title: How to Analyse Time Complexity using Frequency Count Method
 Author: Inam Ul Haq
 Description:
    The Frequency Count Method is a technique used in algorithm analysis
    to measure the time complexity of an algorithm by counting how many
    times each statement or operation is executed.

	What is Frequency Count Method:
		- It counts the number of basic operations performed by an algorithm
		- Each statement is assigned a frequency based on how often it runs
		- Helps in estimating the running time of an algorithm

	How it Works:
		1- Identify basic operations (assignment, comparison, arithmetic, etc.)
		2- Count how many times each operation executes
		3- Add all counts to get total execution cost
		4- Express the result as a function of input size (n)

	Why it is Used:
		- To analyse time complexity before writing code
		- To compare efficiency of different algorithms
		- To derive Big-O notation
		
	Key Points:
		- Machine independent
		- Focuses on logic, not actual execution time
		- Used in Priori (theoretical) analysis
		
	Example:
		- If a loop runs n times, its frequency count is n
		- If a statement runs once, its frequency count is 1
		
	Conclusion:
		The Frequency Count Method provides a clear and systematic way
		to analyse the time complexity of an algorithm by counting
		how frequently operations are executed.
*/
