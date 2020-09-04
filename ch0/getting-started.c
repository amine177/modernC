#include <stdlib.h>
#include <stdio.h>


int main(void) {
  double A[5] = {
    [0] = 9.0,
    [1] = 2.9,
    [4] = 3.E+25,
    [3] = .00007,
  };

  for (size_t i = 0; i < 5; ++i) {
    printf("A[%zu] = %g, A[%zu]^2 = %g\n",
        i,
        A[i],
        i,
        A[i]*A[i]);
  }
}
