/**
 * @file fib.h
 * @brief Class for fast double implementation of fibonacci
 * 
 * This algorithm uses the following identity:
 * Given F(k) and F(k+1)
 * F(2k) = F(k)[2F(k+1)−F(k)]
 * F(2k+1) = F(k+1)2 + F(k)2
 * 
 * @author Eric Nelson
 */
#ifndef FIB_FAST_DOUBLE_H
#define FIB_FAST_DOUBLE_H
#include <iostream>


class FibFastDouble {
private:
    // used internally
    void fib_fast_double_req(int n, int res[]);
public:
    /**
     * Calculates fibonacci number using the fast double algorithm
     * This is theoretically the fastest algorithm, but it's advantage
     * cannot be seen in integers, let alone long long ints.
     * 
     * @return int
     */
    int fib_fast_double(int n);
};

#endif