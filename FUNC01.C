#include<stdio.h>

int suma(int a, int b);

int main(){
  int x, y, z;

  printf("\n-- suma de 2 numeros :3 --");
  printf("\ningrese el primer numero : ");
  scanf("%d", &x);
  printf("\ningrese el segundo numero : ");
  scanf("%d", &y);

  z = suma(x, y);

  printf("\nel resultado es : %d", z);
  return 0;
}

int suma(int a, int b){
  int c;

  c = a + b;

  return c;
}