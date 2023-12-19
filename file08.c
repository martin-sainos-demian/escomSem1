#include<stdio.h>

int main(){
    char c;
    int l;
    FILE *ent, *sal;
    
    ent = fopen("./prueba01.txt", "r");
    
    while(fread(&c, sizeof c, 1, ent) > 0)
                    l++;
    
    printf("\nnumero de caracteres : %d", l);
    
    fclose(ent);
    return 0;
}
