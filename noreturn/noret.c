#include <stdio.h>

void __attribute__ ((noreturn)) noret() {
  printf("No Ret Value\n");
}

int __attribute__ ((noreturn)) t1() {
  printf("Nothing\n");
  return 10;
}

int main() {
  int v1;
  noret();
  t1();
  v1 = t1();
  printf("v1: %d\n", v1);
}
