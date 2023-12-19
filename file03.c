#include<stdio.h>

int main(){
    int c;
    FILE *ent;
    
    ent = fopen("./prueba01.txt", "r");
    
    while((c = getc(ent)) != EOF){
             if('A' <= (char)c && (char)c <= 'Z')
                    c += (int)('a' - 'A');
             putc(c, stdout);
    }
    
    fclose(ent);
    return 0;
}
