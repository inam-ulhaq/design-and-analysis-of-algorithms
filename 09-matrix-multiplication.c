/*
 Title: Matrix Multiplication
 Author: Inam Ul Haq
 Description:
    This algorithm multiplies two square matrices
    of size n x n and stores the result in a third matrix.

	Algorithm:
		1- START
		2- Read n
		3- Read matrix A of size n x n
		4- Read matrix B of size n x n
		5- for i = 1 to n
		       for j = 1 to n
		           C[i][j] = 0
		           for k = 1 to n
		               C[i][j] = C[i][j] + A[i][k] * B[k][j]
		6- Display matrix C
		7- STOP

	Time Frequency Count:

		Operation                               Frequency
		-----------------------------------------------
		Read n                                  1
		Read matrix A                           n^2
		Read matrix B                           n^2
		Outer loop (i)                          n + 1
		Middle loop (j)                         n(n + 1)
		Inner loop (k)                          n^2(n + 1)
		Multiplication and addition             n^3
		Display matrix C                        n^2

		T(n) = n^3 + lower terms
		Time Complexity = O(n^3)

	Space Frequency Count:

		Memory Component           words
		--------------------------------
		n                          1
		matrix A                  n^2
		matrix B                  n^2
		matrix C                  n^2
		i                          1
		j                          1
		k                          1

		S(n) = 3n^2 + 4
		Space Complexity = O(n^2)
*/
