#include<stdio.h>

int main(){
    int c;
    FILE *ent, *sal;
    
    ent = fopen("./prueba01.txt", "r");
    sal = fopen("./salida01.txt", "w");
    
    while((c = getc(ent)) != EOF){
             if('A' <= (char)c && (char)c <= 'Z')
                    c += (int)('a' - 'A');
             putc(c, sal);
    }
    
    fclose(ent);
    return 0;
}
