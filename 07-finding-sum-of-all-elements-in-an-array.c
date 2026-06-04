/*
 Title: Sum of All Elements in an Array
 Author: Inam Ul Haq
 Description:
    This algorithm calculates the sum of all elements
    in a one-dimensional array of size n.

	Algorithm:
		1- START
		2- Read n
		3- Read array A of size n
		4- sum = 0
		5- for i = 1 to n
		       sum = sum + A[i]
		6- Display sum
		7- STOP

	Time Frequency Count:

		Operation                 Frequency
		-----------------------------------
		Read n                    1
		Read array A              n
		sum = 0                   1
		for loop                  n + 1
		sum = sum + A[i]          n
		Display sum               1

		T(n) = 3n + 4
		Time Complexity = O(n)

	Space Frequency Count:

		Memory Component           words
		--------------------------------
		n                          1
		array A                   n
		sum                        1
		i                          1

		S(n) = n + 3
		Space Complexity = O(n)
*/
