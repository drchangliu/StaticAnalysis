#include <iostream>

#include "fib_fast_double.h"

/** Needed for the recursive manipulation of res[]. 
 *  res = {0, 0} does not need to be exposed to the user.
 * @return int, int[2]
 * */
void FibFastDouble::fib_fast_double_req(int n, int res[])
{
    int a, b;
	if (n == 0) {
		res[0] = 0;
		res[1] = 1;
		return;
	}
	fib_fast_double_req((n / 2), res); // Goes to max depth (lg(n)) so evaluation starts at n == 0
	a = 2 * res[1] - res[0]; // Used in identity function
	a = (res[0] * a);
	b = (res[0] * res[0] + res[1] * res[1]);
	if (n&1) { // The identity defines different results depending on if k is even
		res[0] = b;
		res[1] = a + b;
	}
	else {
		res[0] = a;
		res[1] = b;
	}
}

/**
 * Calculates fibonacci number using the fast double algorithm
 * This is theoretically the fastest algorithm, but it's advantage
 * cannot be seen in integers, let alone long long ints.
 * 
 * @return int
 */
int FibFastDouble::FibFastDouble::fib_fast_double(int n){
    int res[2] = {0}; // Initialize to zero for manipulation by recursive algorithm
    fib_fast_double_req(n, res);
    return res[0];
}
