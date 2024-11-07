#include <stdio.h>

void introduce() {
  char name[] = "Shamim";
  int age = 20;
  printf("Hello, I am %s. My age is %d", name, age);
  return 0;
}

int main() {
  introduce();
}