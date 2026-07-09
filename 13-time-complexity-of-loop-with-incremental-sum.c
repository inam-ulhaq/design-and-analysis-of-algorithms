```c
/*
 Title: Time Complexity Analysis of Loop with Incremental Sum
 Author: Inam Ul Haq

 Code:

	for(int i = 1; p <= n; i++)
	{
	    p = p + i;
	}

 Description:
	In this loop, variable i starts from 1 and increases by 1 in each iteration.
	Variable p keeps accumulating the sum of integers:
	p = 1 + 2 + 3 + ... + i
	After k iterations:
	    p = k(k + 1) / 2
	
	The loop continues while p <= n and stops when p becomes greater than n.
	
	Stopping Condition Analysis:
	    k(k + 1) / 2 <= n
	
	    Ignoring lower-order terms:
	        k^2 / 2 <= n
	        k^2 <= 2n
	        k <= sqrt(2n)
	
	    Therefore, the loop executes approximately sqrt(n) times.
	
	Operations Analysis:
	    Initialization (i = 1)     -> 1 time
	    Condition (p <= n)         -> sqrt(n) + 1 times
	    Increment (i++)            -> sqrt(n) times
	    Statement (p = p + i)      -> sqrt(n) times
	
	Time Function:
	    T(n) = 1 + (sqrt(n) + 1) + sqrt(n) + sqrt(n)
	    T(n) = 3sqrt(n) + 2
	
	Simplification:
	    Ignore constants and lower-order terms.
	
	Final Result:
	    T(n) = O(sqrt(n))
*/
