/*
 Title: Time of Different Syntaxes in Single "for" Loop
 Author: Inam Ul Haq
 Description:
 	
	for(int i=0;i<n;i++) 
	{
		statments;
	}
	
 Operation Analysis:
    Initialization (i = 0)        -> 1 time
    Condition check (i < n)       -> n + 1 times
    Increment (i++)               -> n times
    statements                    -> n times

 Time Function
	T(n) =1+(n+1)+n+n
	T(n) =3n+2
	
 Simplification:
	Ignore the constants and lower order terms.
	
 Final Result:
	T(n)= O(n)

-------------------------------------------------------------------

	for(int i=n;i>0;i++) 
	{
		statments;
	}
	
 Operation Analysis:
    Initialization (i = n)        -> 1 time
    Condition check (i >0)       -> n + 1 times
    Increment (i--)               -> n times
    statements                    -> n times

 Time Function
	T(n) =1+(n+1)+n+n
	T(n) =3n+2
	
 Simplification:
	Ignore the constants and lower order terms.
	
 Final Result:
	T(n)= O(n)

-------------------------------------------------------------------

	for(int i=0;i<n;i=i+2) 
	{
		statments;
	}
	
 Operation Analysis:
    Initialization (i = 0)        -> 1 time
    Condition check (i < n)       -> (n/2) + 1 times
    Increment (i=i+2)             -> (n/2) times
    statements                    -> (n/2) times

 Time Function
	T(n) =1+((n/2)+1)+(n/2)+(n/2)
	T(n) =(3n/2)+2
	
 Simplification:
	Ignore the constants and lower order terms.
	
 Final Result:
	T(n)= O(n)

-------------------------------------------------------------------

	for(int i=0;i<n;i=i+20) 
	{
		statments;
	}
	
 Operation Analysis:
    Initialization (i = 0)        -> 1 time
    Condition check (i < n)       -> (n/20) + 1 times
    Increment (i=i+20)            -> (n/20) times
    statements                    -> (n/20) times

 Time Function
	T(n) =1+((n/20)+1)+(n/20)+(n/20)
	T(n) =(3n/20)+2
	
 Simplification:
	Ignore the constants and lower order terms.
	 
 Final Result:
	T(n)= O(n)

*/
