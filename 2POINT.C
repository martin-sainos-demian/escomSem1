#include<stdio.h>

int main(){
  int a,b;
  int *ptr1;
  int **ptr2;

  a=5;
  ptr1 = &a;
  ptr2 = &ptr1;
  b = **ptr2;
  printf("b = %d", b);
  return 0;
}