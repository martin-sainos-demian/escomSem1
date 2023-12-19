#include<stdio.h>

int main(){
    char cadena1[60], cadena2[30], *ptr1, *ptr2;
    
    printf("\nintroduzca la primera cadena : ");
    fgets(cadena1, 60, stdin);
    
    printf("\nintroduzca la segunda cadena : ");
    fgets(cadena2, 30, stdin);
    
    for(ptr1 = &cadena1[0]; *ptr1 != '\n'; ptr1 = ptr1 + 1);
    *ptr1 = '-';
    
    for(ptr2 = &cadena2[0]; *ptr2 != 'n'; ptr1 = ptr1 + 1, ptr2 = ptr2 + 1);
             *ptr1 = *ptr2;
    *ptr1 = '\0';
    printf("\nla cadena resultante es %s", cadena1);
    
    return 0;
}
