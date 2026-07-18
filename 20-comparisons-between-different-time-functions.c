/*
 Title: Comparisons Between Different Time Functions
 Author: Inam Ul Haq
 Description:
    Time functions are used to compare how different algorithms
    grow with respect to input size (n). This comparison helps
    in selecting efficient algorithms.

	Comparison of Time Functions:

		1- O(1) vs O(log n):
			- O(1) remains constant for all input sizes
			- O(log n) grows slowly as input increases
			- O(1) is faster than O(log n)

		2- O(log n) vs O(n):
			- O(log n) grows much slower than O(n)
			- O(n) increases directly with input size
			- O(log n) is more efficient than O(n)

		3- O(n) vs O(n log n):
			- O(n) grows linearly
			- O(n log n) grows faster than O(n) but slower than O(n^2)
			- O(n) is more efficient than O(n log n)

		4- O(n log n) vs O(n^2):
			- O(n log n) grows slower than O(n^2)
			- O(n^2) increases rapidly for large n
			- O(n log n) is more efficient

		5- O(n^2) vs O(n^3):
			- O(n^3) grows much faster than O(n^2)
			- O(n^2) is more efficient

	    6- Polynomial vs Exponential:
			- Polynomial functions grow at manageable rates
			- Exponential functions grow extremely fast
			- Polynomial algorithms are always preferred

	Overall Order (Best to Worst):
		O(1) < O(log n) < O(n) < O(n log n) < O(n^2) < O(n^3) < O(2^n)

	Conclusion:
		Lower growth time functions indicate better algorithm
		performance and scalability.
*/
