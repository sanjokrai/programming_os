#include <stdio.h>

int main() {
  printf("=== Data Type Size on This System ===\n\n");
  printf("char :    %zu bytes\n", sizeof(char));
  printf("int :     %zu bytes\n", sizeof(int));
  printf("float:    %zu byes\n", sizeof(float));
  printf("pointer:  %zu bytes\n", sizeof(int *));
  return 0;
}
