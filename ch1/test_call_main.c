#include <stdio.h>



void fun(int (*)(void));


int main(void) {
  fun(&main);
}

void fun(int (*ptr)(void)) {
  printf("fun\n");
  (*ptr)();
}


