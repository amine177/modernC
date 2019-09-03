#include <stdlib.h>
#include <stdio.h>


int main(void) {

  double A[5] = {
    [0] = 1,
    [1] = 3.E+2,
    [3] = .00007,
    [4] = 9,
  };

  for (size_t i = 0; i < 5; ++i) {
    if (i) {
      printf("element %zu is %g, \tits square is %g\n",
          i,
          A[i],
          A[i]*A[i]);
    }
  }

  return EXIT_SUCCESS;
}
