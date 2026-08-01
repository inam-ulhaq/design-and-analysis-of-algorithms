 Title: Examples of Functions Comparision
 Author: Inam Ul Haq
 Description:
 	Below are some examples of functions comparision:
 	
 	1) f(n)=n^2log(n)  g(n)=n(log(n))^10
 	Apply log
 	
 	f(n)=log(n^2log(n))    		 g(n)=log(n(log(n))^10)
 	f(n)=log(n^2)+log(log(n))	 g(n)=log(n)+log((log(n))^10)
 	f(n)=2log(n)+log log(n)		 g(n)=log(n)+10log log(n)
 	Here the dominaint term is log(n) and in f(n) it's 2log(n) while in g(n) it
 	is only log(n)
 	So
 		f(n) > g(n)
 	
 	
 	2) f(n)= 3n^(root(n))  		g(n)= 2^(root(n)log(n))
 		
 		3n^(root(n))			n^(root(n)log(2))		as log(2)=1
 	So	
 		3n^(root(n))			n^(root(n))
 	And	
 		3n^(root(n))	>		n^(root(n))
 	So	
 		f(n)			>		g(n)
 		
 	
 	3) f(n)=n^(log(n))			g(n)=2^(root(n))
 	
 	Apply log on both
 	
 	f(n)=log(n^(log(n)))			g(n)=log(2^(root(n)))
 	f(n)=log(n)log(n)				g(n)=root(n)log(2)
 	Now as log of 2 base 2 i.e log(2) is equal to 1 
 	So,
 	f(n)=log^2 (n)				g(n)=root(n)
 	Now which one is greater? if still unable to decaide the agin apply log
 	
 	f(n)=log(log^2 (n))	 		g(n)=log(n^(1/2))
 	f(n)=2loglog(n)				g(n)=(1/2)log(n)
 	
 	As log(n) is greater then loglog(n), So
 	f(n)=2loglog(n)     <   	g(n)=(1/2)log(n)
 	
 	
 	4) f(n)=2^n	 		g(n)=2^(2n)
 	Apply log on both
 	
 	f(n)=log(2^n)		g(n)=log(2^(2n))
 	f(n)=nlog(2)		g(n)=2nlog(2)         as log(2)=1
 	So
 	f(n)=n				g(n)=2n
 	And 
 	f(n)n       <       g(n)=2n
 	
	So these some examples of function comparision
 	
	

 	