#include <stdio.h>
#include <stdlib.h>



int main(int argc, char* argv[argc + 1]) {
  char const* const names[4] = {
				"Go",
				"Jalel Brik",
				"Harissa",
  };

  for (size_t i = 0; i < 3; i++)
    printf("Name %zu is %s\n", i, names[i]);

  return EXIT_SUCCESS;
}
