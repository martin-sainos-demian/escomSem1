#include<stdio.h>

int menu(){
  int eleccion;

  printf("\nmenu de seleccion :3");
  printf("\n1.suma");
  printf("\n2.resta");
  printf("\n3.multiplicar");
  printf("\n4.salir");
  scanf("%d", eleccion);

  return eleccion;
}