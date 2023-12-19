#include<stdio.h>

int main(int argc, char *argv[]){
    int c;
    FILE *ent, *sal;
    
    if(argc == 3){
         ent = fopen(argv[1], "r");
         sal = fopen(argv[2], "w");
    
         if(ent != NULL)
                if(sal != NULL){
                       while((c = getc(ent)) != EOF)
                                putc(c, sal);
                       printf("\ncopia realizada con exito");
                       }
                else
                    printf("\nruta de salida incorrecta");
         else
             printf("\nruta de entrada incorrecta");
     
     fclose(ent);
     fclose(sal);
    }
    else
        printf("\ncantidad incorrecta de argumentos");
    return 0;
}
