#include<stdio.h>

int main(){
    char cadena[30], *ptr;
    
    printf("\nintroduzca una cadena : ");
    fgets(cadena, 30, stdin);
    
    for(ptr = &cadena[0]; *ptr != '\n'; ptr = ptr + 1)
        printf("\nen la celda %d se encuentra la letra %c", (int) (ptr - cadena), *ptr);
    
    return 0;
}
