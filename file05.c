#include<stdio.h>

int main(){
    int c;
    FILE *sal;
    
    sal = fopen("./salida04.txt", "w");
    
    while((c = getc(stdin)) != '\n')
             putc(c, sal);
    
    fclose(sal);
    return 0;
}
