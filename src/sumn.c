#include "sumn.h"

#include<stdio.h>

int sumn (int n) {
    if(n > 1) {
        return sumn(n - 1)+(2 * n - 1); /* Recursively calculate the sumn, by calculating then multiplying by previous. */
    }
    else {
        return 1; /* Otherwise return 1. */
    }
}