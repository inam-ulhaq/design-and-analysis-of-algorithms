/*
 Title: Time Complexity of Nested "for" Loops (Dependent Inner Loop)
 Author: Inam Ul Haq
 Description:
   The inner loop depends on the value of the outer loop variable.
	
	for(int i = 0; i < n; i++)
	{
	    for(int j = 0; j < i; j++)
	    {
	        statements;
	    }
	}
	
	Tracing of i and j
	
		for i        number of times j executes
		--------------------------------------
		0            0
		1            1
		2            2
		3            3
		.            .
		.            .
		n - 1        n - 1
		
		Total executions of inner loop
		= 0 + 1 + 2 + ... + (n - 1)
		= n(n - 1) / 2


	Operations Analysis
	
		Initialization (i = 0)        -> 1 time
		Condition (i < n)             -> n + 1 times
		Increment (i++)               -> n times

		Initialization (j = 0)        -> n times
		Condition (j < i)             -> n(n + 1) / 2 times
		Increment (j++)               -> n(n - 1) / 2 times

		statements                    -> n(n - 1) / 2 times

	Time Function
	
		T(n) = 1 + (n + 1) + n
		       + n
		       + n(n + 1)/2
		       + n(n - 1)/2
		       + n(n - 1)/2
		T(n) = (3/2)n^2 + O(n)

	Simplification
	    Ignore constants and lower-order terms.



	Final Result
    	T(n) = O(n^2)
*/
