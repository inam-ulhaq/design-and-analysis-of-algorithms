/* 
 Title: Properties of Asymptotic Notations
 Author: Inam Ul Haq
 Description:
	1- if f(n) is O(g(n)) then a*f(n) is O(g(n))
	i.e. f(n)=n + 5 -> O(n) then
		8*f(n)=8*(n+5) = 8n+40 -> O(n)
		- This is true for all other notations also.
	
	2- Reflexive Property:
		if f(n) is given then f(n) is Big-oh(f(n))
		i.e. f(n)= n then big-Oh is O(n). Because big-oh is equal or greater then f(n).
		
	3 Transitive Property:
		if f(n) is g(n) and g(n) is h(n) then f(n) is h(n)
		i.e f(n)=n  and g(n)= n^2 and h(n)=n^3 then
		n is O(n^2) and O(n^2) is O(n^3) then n is O(n^3) 
		mean if for n upper bound is n^2 and for n^2 upper bound is n^3 then for
		n upper bound can be also n^3.
		
	4- Symatric Property:
		if f(n) is theta(g(n)) then theta of g(n) is theta(f(n)).
		i.e f(n)= 0(n)
			g(n)= 0(n)
			- This is true only for theta notation.
		
	5- Transpose Symatric Property:
		if f(n)=O(g(n)) then g(n)=omega(f(n)) 
		i.e. f(n)=O(n) and g(n)=n^2 
		then n is O(n^2) and n^2 is omega(n)
		mean if g(n) is upper bound for f(n) then f(n) is lower bound for g(n).
		
	6- if f(n)= O(g(n)) and f(n)=Omega(g(n)) then f(n)=theta(g(n)).
	
	7- if f(n) is O(g(n)) and d(n) is O(e(n)) then 
		f(n)+d(n)=O(max(g(n),e(n))).
		
	8- if f(n) is O(g(n)) and d(n) is O(e(n)) then 
		f(n)*d(n)=O(g(n)*e(n)).	
