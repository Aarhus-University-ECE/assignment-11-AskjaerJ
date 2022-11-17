/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp) {
/* pre-condition */
    assert(n >= 0); /* Starts at 0 */
    if(n == 0){ /* Assuming start is Fib_0 = 0 is first value. */
        return p; /* Returns p value in the end. */
    }
    else {
        return fib(n - 1, pp, p + pp); /* Calculates fib using tail recursion. */
    }
}
