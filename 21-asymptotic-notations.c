/*
 Title: Asymptotic Notations
 Author: Inam Ul Haq

 Description:
    Asymptotic notations belong to mathematics and are mainly used in
    algorithm analysis to describe time complexity.

    These notations are used to represent the simplified form of time
    functions or to show the class to which a function belongs.
    In other words, if we have a time function of an algorithm,
    asymptotic notation helps us classify it (for example, linear,
    quadratic, logarithmic, etc.).

    We use asymptotic notations instead of exact time functions
    for two main reasons:

    1) Time functions are usually very lengthy and complex.
       They include constants, lower-order terms, and machine-dependent
       details, which make comparison difficult.

    2) For the same algorithm, different analysts may derive
       different time functions depending on assumptions, hardware,
       or implementation details.

    Asymptotic notations solve these problems by ignoring constants
    and lower-order terms and focusing only on the growth rate.
    Because of this, the asymptotic representation of an algorithm
    remains simple, consistent, and the same for everyone.


    Types of Asymptotic Notations:

        1) Big-Oh (O)     -> Upper Bound
        2) Big-Omega      -> Lower Bound
        3) Big-Theta      -> Tight Bound


    Big-Oh Notation (O):

        Big-Oh notation represents the upper bound of a function.
        It describes the maximum growth rate of an algorithm
        as the input size grows.

    Mathematical Definition:

        A function f(n) = O(g(n)) if there exist positive constants
        c and n0 such that:

            f(n) <= c * g(n)   for all n >= n0


    Example:

        Let:
            f(n) = 2n + 3

        Choose:
            g(n) = n
            c = 5
            n0 = 1

        For all n >= 1:
            2n + 3 <= 5n

        Therefore:
            f(n) = O(n)


    Big-Omega Notation (Omega):

        Big-Omega notation represents the lower bound of a function.
        It describes the minimum growth rate of an algorithm
        as the input size grows.

    Mathematical Definition:

        A function f(n) = Omega(g(n)) if there exist positive constants
        c and n0 such that:

            f(n) >= c * g(n)   for all n >= n0


    Example:

        Let:
            f(n) = 2n + 3

        Choose:
            g(n) = n
            c = 1
            n0 = 1

        For all n >= 1:
            2n + 3 >= 1n

        Therefore:
            f(n) = Omega(n)


    Big-Theta Notation (Theta):

        Big-Theta notation represents the tight bound of a function.
        It gives both upper and lower bounds at the same time.
        It describes the exact growth rate of an algorithm.

    Mathematical Definition:

        A function f(n) = Theta(g(n)) if there exist positive constants
        c1, c2 and n0 such that:

            c1 * g(n) <= f(n) <= c2 * g(n)   for all n >= n0


    Example:

        Let:
            f(n) = 2n + 3

        Choose:
            g(n) = n
            c1 = 1
            c2 = 5
            n0 = 1

        For all n >= 1:
            1n <= 2n + 3 <= 5n

        Therefore:
            f(n) = Theta(n)


    Summary:

        Some people confuse Big-O, Omega, and Theta with worst, best, and average
        cases, but this is incorrect. These notations do not represent cases;
        instead, they represent mathematical bounds on the growth of a function.

        Big-O (O) gives an upper bound, meaning the function will not grow faster
        than this limit.

        Omega gives a lower bound, meaning the function will not grow slower than
        this limit.

        Theta gives a tight bound, meaning it describes the exact growth rate
        of the function.

        On the other hand, cases (worst, best, average) depend on different input
        scenarios for an algorithm.

        For example, in linear search, if the element is not present in the list,
        the algorithm performs n comparisons, which is the worst case.
        So the worst-case time complexity function is:

            T(n) = n

        Now we analyze this function using bounds:

            T(n) <= c * n -> T(n) = O(n)
            T(n) >= c * n -> T(n) = Omega(n)
            Therefore, T(n) -> Theta(n)

        Thus, the worst-case time complexity of linear search is Theta(n).

        The key point is that we apply O, Omega, and Theta to the function of
        a case i.e T(n)=O(n), not to the case itself like worst is the big oh.
*/