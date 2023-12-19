#include<stdio.h>

int main(){
    int c;
    FILE *ent;
    
    ent = fopen("./prueba01.txt", "r");
    
    while((c = getc(ent)) != EOF)
             if('A' <= (char)c && (char)c <= 'Z')
                    putchar(c + (int)('a' - 'A'));
             else
                 putchar(c);
    
    fclose(ent);
    return 0;
}
