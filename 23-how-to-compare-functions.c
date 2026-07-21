 Title: Comparision of Functions
 Author: Inam Ul Haq
 Description:
	When we are anlaysing algorithms we are getting different multiple functions
	i.e like time function, space function etc. We are comparing different algorithms
	to their details but the main thing is to compare it with other algorithms so we
	can chose the right choice for spcific time.
	
	Now there are tow main question the first one is how we know the details about
	the aglorithm form a given function? That show the function itself i.e 
	f(n)=O(n), assume that this is the time function of an algorithm then it shows 
	itself the upper bound of the the fastest growth of that algorithm is n or linear.
	
	Now the second question is, hwo we are comparing functions of different algorithms?
	So for some time functions that are very simple we can decide it directly by just 
	looking to it i.e 
	
	f(n)=O(n)  < f(n)=O(n^2)
	
	or we can put some values their and decide form it i.e 
	
	n     n^2
	---------
	2     2^2=4
	3     3^2=9
	4     4^2=16
	So if you analyse this then you can clearly see that which function is greatr, 
	so as the n^2 always give greater value after some point so n^2 is greater then 
	n.
	
	The thrid method which is mostly used and very usefule for specily for complex 
	functions is apply log to functions.
	
	i.e the functions are:
		
	1) f(n)=n    2) f(n)=n^2
	so it's  comparision again between n and n^2, so apply log to both the functions
	i.e:
	log(n)     log(n^2)
	=> log(n)	2log(n)
	so log(n) < 2log(n)
	Now we are clarly seeing that  the first one is only log(n) while the second one 
	2log(n) which is greater. 
	
	Remember one thing here is you can't ignore the constant term after applying
	the log, so it must be consider i.e you can't say log(n) instead of 2log(n)
	because the log(n) we get in the result of applying log to just n, while 2log(n)
	we get in the result of applying log to n^2, so both are different now.
	
	Since we are applying log so there are different laws uesd with log that can help
	us in simplifying the funtions i.e:
	1)	log(ab) 	= log(a)+log(b)
	2)	log(a/b)	= log(a)-log(b)
	3)	log(a^b)	= blog(a)
	4)	a^(log(c^b))= b^(log(c^a))
	
	These are some laws that can help us to simplifying functions.