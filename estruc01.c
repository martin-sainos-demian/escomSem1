#include<stdio.h>

struct persona {
        char nombre[30];
        int edad;
        float altura;
        char letra;
        };

int main(){
    struct persona usuario[2];
    int i;
    
    for(i = 0; i < 2; i = i + 1){
          printf("\nusuario %d", (i + 1));
          printf("\nintroduzca su nombre : ");
          fgets(usuario[i].nombre, 30, stdin);
          printf("\nintroduzca su edad : ");
          scanf("%d", &usuario[i].edad);
          printf("\nintroduzca su altura en metros : ");
          scanf("%f", &usuario[i].altura);
          printf("\nintroduzca su letra favorita : ");
          fflush(stdin);
          scanf("%c", &usuario[i].letra);
          fflush(stdin);
    }
    
    for(i = 0; i < 2; i = i + 1){
          printf("\ndireccion del usuario %d : %x", (i + 1), &usuario[i]);
          printf("\nnombre del usuario %d : %s", (i + 1), usuario[i].nombre);
          printf("direccion en memoria : %x", &usuario[i].nombre);
          printf("\nedad del usuario %d   : %d", (i + 1), usuario[i].edad);
          printf("\ndireccion en memoria : %x", &usuario[i].altura);
          printf("\naltura del usuario %d : %f", (i + 1), usuario[i].altura);
          printf("\ndireccion en memoria : %x", &usuario[i].edad);
          printf("\nletra favorita del usuario %d   : %c", (i + 1), usuario[i].letra);
          printf("\ndireccion en memoria : %x", &usuario[i].letra);
          printf("\n");
    }
    
    return 0;
}
