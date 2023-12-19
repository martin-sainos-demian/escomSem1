#include<stdio.h>

int main(){
    int i;
    char nombre[30];
    
    printf("\ningrese su nombre : ");
    fgets(&nombre[0], 30, stdin);
    for(i = 0; nombre[i] != '\n'; i=i+1)
          printf("\nen la celda %d esta la letra %c en la direccion %p", i, nombre[i], &nombre[i]);
    
    return 0;
}
