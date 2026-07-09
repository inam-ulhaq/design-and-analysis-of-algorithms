/*
 Title: Example Swapping Two numbers without Temp Variable
 Author: Inam Ul Haq
 Description:
    This document explains how to write a simple algorithm and
    how to analyse it using different performance parameters.

 Writing an Algorithm:
    Algorithm Name: SwapWithoutTemp
    Purpose: To swap two numbers without using a temporary variable

    Input:
        A, B

    Output:
        A, B (after swapping)

    Steps:
        1. START
        2. Read A, B
        3. A <- A + B
        4. B <- A - B
        5. A <- A - B
        6. Display A, B
        7. STOP

 Analysing the Algorithm:

    1. Time Analysis:
        The algorithm executes a fixed number of steps.
        Its execution time does not depend on input size.
        Time Complexity = O(1)

    2. Space Analysis:
        The algorithm does not use any extra memory.
        Only input variables are used.
        Space Complexity = O(1)

    3. Network Consumption / Data Transfer:
        No data is transmitted over a network.
        Network cost = 0

    4. Power Consumption:
        Due to very few arithmetic operations,
        the power consumption is minimal.

    5. CPU Register Usage:
        Uses a small number of CPU registers.
        Processor resource usage is efficient.
*/
