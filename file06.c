#include<stdio.h>

int main(){
    int c;
    FILE *ent, *sal;
    
    ent = fopen("./prueba01.txt", "r");
    sal = fopen("./salida05.txt", "w");
    
    while(fread(&c, sizeof c, 1, ent) > 0)
             fwrite(&c, sizeof c, 1, sal);
    
    fclose(ent);
    fclose(sal);
    return 0;
}
