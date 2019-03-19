#include<stdio.h>

int main(void) {

  int a = 55;
  int b = 45;
  int c = 5;

  while (a != b) {
    b++;
    a--;
    c = 5 * a * b;
  }
  return c;
}
