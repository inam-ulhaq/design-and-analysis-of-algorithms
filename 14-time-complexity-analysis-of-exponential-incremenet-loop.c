/*
 Title: Time Complexity Analysis of Exponential Increment Loop
 Author: Inam Ul Haq
 Description:

	Code:

	    for(int i = 1; i < n; i *= 2)
	    {
	        statements;
	    }

	Explanation:
	    In each iteration, the value of i is multiplied by 2.
	    So the values of i are:
	        1, 2, 2^2, 2^3, 2^4, ... , 2^k

	Stopping Condition Analysis:
	    The loop stops when:
	        2^k >= n

	    Taking log on both sides:
	        k = log2(n)

    	erefore, the loop executes approximately log2(n) times.

	Operations Analysis:
	    Initialization (i = 1)        -> 1 time
	    Condition (i < n)             -> log(n) + 1 times
	    Increment (i *= 2)            -> log(n) times
	    Statements                    -> log(n) times

	Time Function:
	    T(n) = 1 + (log n + 1) + log n + log n
	    T(n) = 3 log(n) + 2

	Simplification:
	    Ignore constants and lower-order terms.

	Final Result:
	    T(n) = O(log n)
*/
