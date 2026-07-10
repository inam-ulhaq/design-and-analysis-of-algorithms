/*
 Title: Time Complexity Analysis of Loop with Quadratic Condition
 Author: Inam Ul Haq
 Description:

	Code:

        for(int i = 1; i * i < n; i++)
        {
            statements;
        }

	Explanation:
        In each iteration, the value of i increases by 1.
        The loop continues as long as:
            i * i < n

        This means the loop runs until:
            i^2 >= n

	Stopping Condition Analysis:
        Let the number of iterations be k.

            k^2 >= n

        Taking square root on both sides:
            k >= sqrt(n)

        Therefore, the loop executes approximately sqrt(n) times.

	Operations Analysis:
        Initialization (i = 1)        -> 1 time
        Condition (i * i < n)         -> sqrt(n) + 1 times
        Increment (i++)               -> sqrt(n) times
        Statements                    -> sqrt(n) times

	Time Function:
        T(n) = 1 + (sqrt(n) + 1) + sqrt(n) + sqrt(n)
        T(n) = 3sqrt(n) + 2

	Simplification:
        Ignore constants and lower-order terms.

	Final Result:
        T(n) = O(sqrt(n))
*/
