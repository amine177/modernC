#include <stdio.h>
#include <stdlib.h>



int main(int argc, char* argv[argc+1]) {
  int i;
  i = strtod(argv[1], 0);
  printf("The hour is %u past 12\n", i % 12);
  return EXIT_SUCCESS;
}
