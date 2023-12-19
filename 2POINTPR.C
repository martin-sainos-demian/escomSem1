#include<stdio.h>

int main(){
  int a, b;
  int *ptr1, **ptr2;

  a = 5;
  ptr1 = &a;
  ptr2 = &ptr1;

  b = **ptr2;

  printf("\nla variable 'a' tiene su direccion %lu", &a);
  printf("\nla variable 'b' tiene su direccion %lu", &b);
  printf("\nptr1 vale %lu y ptr2 vale %lu", ptr1, ptr2);
  printf("\nla direcion de ptr1 es %lu", &ptr1);
  printf("\nla direccion de ptr2 es %lu", &ptr2);
  printf("\n*ptr1 vale %d y *ptr2 vale %lu", *ptr1, *ptr2);
  return 0;
}                                                        f