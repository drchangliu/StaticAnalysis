/**
 * @file main.cc
 * @author Krerkkiat Chusap
 * @brief The main() function as an example to test the fibonacci function.
 */
#include <iostream>

#include "fib.h"
#include "fib_cache.h"
#include "fib_fast_double.h"

int main() {
    int n;
    std::cout << "Please enter n: ";
    std::cin >> n;

    std::cout << "Fib(n) is " << fib_recursive(n) << std::endl;

    FibCache fib_cache(5);
    std::cout << "FibCache(n) is " << fib_cache.get(n) << std::endl;

    FibFastDouble fib_fast_double;
    std::cout << "FibFastDouble(n) is " << fib_fast_double.fib_fast_double(n) << std::endl;
    
    return EXIT_SUCCESS;
}
