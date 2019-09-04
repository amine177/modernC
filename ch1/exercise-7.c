#include <stdio.h>
#include <stdlib.h>

/* swtich is a branching operator, therfore
 * it takes the execution flow to a certain point from
 * which execution resumes. A break statement is needed
 * in order to stop the execution within the switch block
 * and go to the first instruction after that block.
 * In the case of this exercise if count is 2 we will get
 * printed into stdin this : ++\n+++\n++++
 */
int main(int argc, char* argv[argc+1]) {
  int count;

  if (argc > 1) {
  count = strtod(argv[1], 0);

  switch (count) {
    default: puts("this is the default position\n");
    case 1: puts("+");
    case 2: puts("++");
    case 3: puts("+++");
    case 4: puts("++++");
  }
  }


  return EXIT_SUCCESS;
}
