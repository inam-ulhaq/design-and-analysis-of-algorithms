/*
 Title: Time Complexity Analysis of Dependent Logarithmic Loops
 Author: Inam Ul Haq
 Description:

	Code:

        p = 0;

        for(int i = 1; i < n; i = i * 2)
        {
            p++;
        }

        for(int j = 1; j < p; j = j * 2)
        {
            statements;
        }

Explanation:

        First Loop Analysis:
            The value of i doubles in each iteration.
            Values of i are:
                1, 2, 4, 8, 16, ... , 2^k

            Loop stops when:
                2^k >= n

            Taking log on both sides:
                k = log2(n)

            Therefore:
                p = log2(n)

        Second Loop Analysis:
            The value of j also doubles in each iteration.
            Values of j are:
                1, 2, 4, 8, ... , 2^m

            Loop stops when:
                2^m >= p

            Since p = log(n):
                2^m >= log(n)

            Taking log on both sides:
                m = log2(log2(n))

            Therefore, the second loop executes log(log n) times.

	Operations Analysis:

        First Loop:
            Initialization (i = 1)        -> 1 time
            Condition (i < n)             -> log(n) + 1 times
            Update (i = i * 2)            -> log(n) times
            p++                           -> log(n) times

        Second Loop:
            Initialization (j = 1)        -> 1 time
            Condition (j < p)             -> log(log n) + 1 times
            Update (j = j * 2)            -> log(log n) times
            Statements                    -> log(log n) times

	Time Function:
        T(n) = log(n) + log(log n)

	Simplification:
        Ignore constants and lower-order terms.
        The dominant term is log(n), but since the second loop
        depends on the logarithmic result of the first loop,
        the effective execution of the statements is log(log n).

	Final Result:
        T(n) = O(log(log n))
*/
