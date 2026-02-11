/* YOU MUST MODIFY THIS FILE */
// Read "hw3.h" to learn about the two data types: `Range` and `RangeAnswer`

#include "hw3.h"

double integrate1(Range rng)
{
  /* Fill in for Part 1 */
  // calculate the numerical integration of the function func
  // based on the three attributes (`lowerlimit`, `upperlimit`, and `intervals`) of the type `Range`.
  // the return value of function `integrate1` should be the numerical integration (return type is double)
  double uL = rng.upperlimit;
  double lL = rng.lowerlimit;
  int n = rng.intervals;
  double steps = (uL - lL) / n;
  double result = 0.0;
  for (int i = 0; i < n; i++) {
    result += func(lL + (i * steps));
  }
  return result * steps;
}

void integrate2(RangeAnswer * rngans)
{
  /* Fill in for Part 2 */
  // run `integrate1` function
  // take the return value from `integrate1` function 
  // and assign it to attribute `answer` of the type `RangeAnswer`
  if (rngans != NULL) {
    rngans -> answer = integrate1(rngans -> rng);
  }
}
