#include<stdio.h>
#include<string.h>

struct dato{
  char nombre[30];
  int edad;
  float est;
  char genero;
};

int main(){
  struct dato var1, var2;
  struct dato *ptr1, *ptr2;

  ptr1 = &var1;
  ptr2 = &var2;

  printf("\ningrese nombre 1 :");
  fgets(ptr1->nombre, 30, stdin);
  printf("\ningrese edad 1 :");
  scanf("%d", &ptr1->edad);
  printf("\ningrese estatura 1 :");
  scanf("%f", &ptr1->est);
  printf("\ningrese caracter :");
  fflush(stdin);
  ptr1->genero = getchar();
  fflush(stdin);

  strcpy(ptr2->nombre, ptr1->nombre);
  ptr2->edad = ptr1->edad;
  ptr2->est = ptr1->est;
  ptr2->genero = ptr1->genero;

  printf("\nptr2 %s %d %f %c", ptr2->nombre, ptr2->edad, ptr2->est, ptr2->genero);
  return 0;
}