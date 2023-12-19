#include<stdio.h>

int main(){
    char nombre[30];
    
    printf("\ningresa tu nombre");
    fgets(&nombre[0], 30, stdin);
    
    printf("\nusted se llama %s", &nombre);
    
    return 0;
}
