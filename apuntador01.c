#include<stdio.h>

int main(){
    int a, b;
    int *ptr;
    
    a = 5;
    printf("\nla variable 'a' vale %d y tiene su direccion en %lu", a, &a);
    
    ptr = &a;
    printf("\nla variable apuntador vale %lu y tiene su direccion en %lu", ptr, &ptr);
    
    b = *ptr;
    printf("\nla variable b vale %d y tiene su diceccion en %lu", b, &b);
    
    return 0;
}
