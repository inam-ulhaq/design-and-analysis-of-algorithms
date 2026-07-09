/*
 Title: Addition of Two Matrices
 Author: Inam Ul Haq
 Description:
    This algorithm adds two square matrices
    of size n x n and stores the result in a third matrix.

	Algorithm:
		1- START
		2- Read n
		3- Read matrix A of size n x n
		4- Read matrix B of size n x n
		5- for i = 1 to n
		       for j = 1 to n
		           C[i][j] = A[i][j] + B[i][j]
		6- Display matrix C
		7- STOP

	Time Frequency Count:

		Operation                         Frequency
		-------------------------------------------
		Read n                            1
		Read matrix A                     n^2
		Read matrix B                     n^2
		Outer loop (i)                    n + 1
		Inner loop (j)                    n(n + 1)
		Addition statement                n^2
		Display matrix C                  n^2

		T(n) = 3n^2 + lower terms
		Time Complexity = O(n^2)

	Space Frequency Count:

		Memory Component           words
		--------------------------------
		n                          1
		matrix A                  n^2
		matrix B                  n^2
		matrix C                  n^2
		i                          1
		j                          1

		S(n) = 3n^2 + 3
		Space Complexity = O(n^2)
*/
//