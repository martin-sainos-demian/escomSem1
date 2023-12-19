#include<stdio.h>

int main(){
  char cadena[40], *ptr1, **ptr2;

  printf("\nintroduzca cadena : ");
  fgets(cadena, 40, stdin);

  ptr1 = cadena;
  for(ptr2=&ptr1; **ptr2!='\n';*ptr2=*ptr2+1)
    if(**ptr2>='a' && **ptr2<='z')
      **ptr2 = **ptr2 - ('a' - 'A');

  printf("\nresultado : %s", cadena);

  return 0;
}