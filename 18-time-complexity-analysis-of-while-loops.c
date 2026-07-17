/*
 Title: Step by Step Time Complexity Analysis of While Loops
 Author: Inam Ul Haq
 Description:
    Step by step analysis of common while loop structures,
    similar to the analysis done for for-loops.


	Example 1: Simple While Loop

	Code:
        int i = 0;
        while(i < n)
        {
            statements;
            i++;
        }

	Step by Step Analysis:
        Initialization:
            i = 0            -> 1 time

        Condition Check:
            i < n            -> n + 1 times

        Loop Body:
            statements       -> n times

        Update:
            i++              -> n times

	Time Function:
        T(n) = 1 + (n + 1) + n + n
        T(n) = 3n + 2

	Final Result:
        T(n) = O(n)



	Example 2: While Loop with Exponential Growth

	Code:
        int i = 1;
        while(i < n)
        {
            statements;
            i = i * 2;
        }

	Step by Step Analysis:
        Initialization:
            i = 1            -> 1 time

        Condition Check:
            i < n            -> log(n) + 1 times

        Loop Body:
            statements       -> log(n) times

        Update:
            i = i * 2        -> log(n) times

	Stopping Condition:
        2^k >= n
        k = log2(n)

	Time Function:
        T(n) = 1 + (log n + 1) + log n + log n
        T(n) = 3 log(n) + 2

	Final Result:
        T(n) = O(log n)



	Example 3: While Loop with Quadratic Condition

	Code:
        int i = 1;
        while(i * i < n)
        {
            statements;
            i++;
        }

	Step by Step Analysis:
        Initialization:
            i = 1                -> 1 time

        Condition Check:
            i * i < n            -> sqrt(n) + 1 times

        Loop Body:
            statements           -> sqrt(n) times

        Update:
            i++                  -> sqrt(n) times

	Stopping Condition:
        i^2 >= n
        i = sqrt(n)

	Time Function:
        T(n) = 1 + (sqrt(n) + 1) + sqrt(n) + sqrt(n)
        T(n) = 3 sqrt(n) + 2

	Final Result:
        T(n) = O(sqrt(n))



	Example 4: Nested While Loops (n × n)

	Code:
        int i = 0;
        while(i < n)
        {
            int j = 0;
            while(j < n)
            {
                statements;
                j++;
            }
            i++;
        }

	Step by Step Analysis:

	Outer Loop:
        Initialization:
            i = 0                -> 1 time
        Condition:
            i < n                -> n + 1 times
        Update:
            i++                  -> n times

	Inner Loop:
        Initialization:
            j = 0                -> n times
        Condition:
            j < n                -> n(n + 1) times
        Update:
            j++                  -> n^2 times
        Statements:
            statements           -> n^2 times

	Time Function:
        T(n) = n^2 + lower order terms

	Final Result:
        T(n) = O(n^2)



	Example 5: Nested While Loops (n × log n)

	Code:
        int i = 1;
        while(i < n)
        {
            int j = 1;
            while(j < n)
            {
                statements;
                j = j * 2;
            }
            i++;
        }

	Step by Step Analysis:

	Outer Loop:
        Initialization:
            i = 1                -> 1 time
        Condition:
            i < n                -> n + 1 times
        Update:
            i++                  -> n times

	Inner Loop:
        Initialization:
            j = 1                -> n times
        Condition:
            j < n                -> n(log n + 1) times
        Update:
            j = j * 2            -> n log(n) times
        Statements:
            statements           -> n log(n) times

	Time Function:
        T(n) = n log(n) + lower order terms

	Final Result:
        T(n) = O(n log n)



	Example 6: Dependent While Loops (log log n)

	Code:
        int p = 0;
        int i = 1;
        while(i < n)
        {
            p++;
            i = i * 2;
        }

        int j = 1;
        while(j < p)
        {
            statements;
            j = j * 2;
        }

	Step by Step Analysis:

	First Loop:
        i doubles each iteration
        Number of iterations = log(n)
        Therefore:
            p = log(n)

	Second Loop:
        j doubles until j >= p
        Number of iterations = log(p)
        Since p = log(n):
            log(p) = log(log(n))

	Time Function:
        T(n) = log(n) + log(log(n))

	Final Result:
        T(n) = O(log log n)
*/
