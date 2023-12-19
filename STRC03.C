#include<stdio.h>
#define TAM 2

extern void _floatconvert();
#pragma extref _floatconvert

struct persona {
  char nombre[30];
  int edad;
  float altura;
  char letra;
};

int main(){
  struct persona gente[TAM], *ptr;

  for(ptr=gente; ptr<&gente[TAM]; ptr=ptr+1){
    printf("\nintroduzca su nombre usuario %d : ", (int)(ptr-gente+1));
    fgets(ptr->nombre, 30, stdin);
    printf("\nintroduzca su edad usuario %d : ", (int)(ptr-gente+1));
    scanf("%d", &ptr->edad);
    printf("\nintroduzca su altura usuario %d : ", (int)(ptr-gente+1));
    scanf("%f", &ptr->altura);
    printf("\nintroduzca su letra usuario %d : ", (int)(ptr-gente+1));
    fflush(stdin);
    scanf("%c", &ptr->letra);
    fflush(stdin);
  }

  for(ptr=gente; ptr<&gente[TAM]; ptr=ptr+1){
    printf("\n\nusuario %d", (int)(ptr-gente+1));
    printf("\nnombre usuario : %s", ptr->nombre);
    printf("edad usuario : %d", ptr->edad);
    printf("\naltura usuario : %f", ptr->altura);
    printf("\nletra usuario : %c", ptr->letra);
  }

  return 0;
}