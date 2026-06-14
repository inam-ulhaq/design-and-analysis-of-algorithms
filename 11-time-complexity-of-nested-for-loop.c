 Title: Time complexity of Nested "for" Loops
 Author: Inam Ul Haq
 Description:
	If two loops are nested, their time complexities are multiplied.
	
	for(int i=0;i<n;i++) 
	{
		for(int j=0;j<n;j++){ 
			statements: 
		}
	}
	
	Operations Analysis
		Initialization(i=0)		-> 1 time
		Condition(i<n)          -> n+1 times
		Increment(i++)          -> n times
		Initialization(j=0)		-> n times
		Condition(j<n)          -> (n^2)+n times
		Increment(j++)			-> n^2 times
		Statements               -> n^2
		
		
	Time Function
		T(n) = 1+(n+1)+n+n+((n^2)+n)+n^2+n^2
		T(n) = (3n^2)+4n+2
	
	Simplification
		Ignore the constant and lower order terms.
		
	Final Result
		T(n)= O(n^2) 
		
