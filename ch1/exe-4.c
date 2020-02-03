#include <stdio.h>


int main(void) {
  size_t i;
  double A[5] = {
		 9.0,
		 2.0,
		 3.E+25,
		 .000007,
  };

  for (i = 0; i < 5; i++) {
    printf("element %zu is %g, \tits square is %g\n",
	   i,
	   A[i],
	   A[i]*A[i]);
  }

  return 0;
}
