#include "sum.h"

#include<stdio.h>
#include<assert.h>

/* Sum integers 1 to n */
int sum (int n)
{
/* pre-condition */
  assert (n >= 1);
/* post-condition */
  if (n > 1)
    return n + sum (n - 1);
  else
    return 1;
}

/* Sum integers 1 to n */
int sumtail (int n, int total) {
/* pre-condition */
  assert (n >= 1); /* Assert that start value is 1. */
/* Post-condition */
  if(n > 1) {
    return sumtail(n - 1, n + total); /* Recursively returns the sum by saving value each run in total. */
  }
  else {
    return 1 + total; /* Return the value, 1 if total is 0. */
  }
}

/* Sum integers 1 to n */
int sumwhile (int n) {
int i = 1; 
/* pre-condition */
  assert (n >= 1); /* Start value is 1. */
/* post-condition */
int sum = 0;
  while(i <= n) {
    sum = sum + i; /* Calculate the sum with previous sum plus counted i. */
    i++; /* Add +1 to i. */
  }
return sum; /* Returns final value */
}

