#include<stdio.h>

int main(){
    char c;
    FILE *ent, *sal;
    
    ent = fopen("./prueba01.txt", "r");
    sal = fopen("./salida06.txt", "w");
    
    while(fread(&c, sizeof c, 1, ent) > 0){
             if('A' <= c && c <= 'Z')
                    c += 'a' - 'A';
             fwrite(&c, sizeof c, 1, sal);
    }
    
    fclose(ent);
    fclose(sal);
    return 0;
}
