#include<stdio.h>
#define MAX_L 64

int menu(char *text);
int ingresarCadena(char *text);
int contarLetras(char *text);
int contarDigitos(char *text);

int main(){
    char text[MAX_L];
    int running;
    
    text[0] = '\n';
    running = 1;
    while(running){
        running = menu(text);
    }
    return 0;
}

int menu(char *text){
    int select;
    
    printf("\nopciones : ");
    printf("\n1.ingresar cadena");
    printf("\n2.contar mayusculas y minusculas");
    printf("\n3.contar digitos");
    printf("\n4.salir\n");
    scanf("%d", &select);
    
    switch(select){
        case 1:
             ingresarCadena(text);
             break;
        case 2:
             contarLetras(text);
             break;
        case 3:
             contarDigitos(text);
             break;
        case 4:
             printf("\nsaliendo...");
             return 0;
        default:
             printf("\nelija una opcion valida");
    }
    return 1;
}

int ingresarCadena(char *text){
    printf("\nintroduzca la cadena : ");
    fflush(stdin);
    fgets(text, MAX_L, stdin);
    return 0;
}

int contarLetras(char *text){
    char *ptr;
    int i = 0;
    
    for(ptr = text; *ptr != '\n'; ptr = ptr + 1)
         if(('A' <= *ptr && *ptr <= 'Z')
              || ('a' <= *ptr && *ptr <= 'z'))
              i = i + 1;
              
    printf("\ncadena : %s", text);
    printf("\nresultado : %d", i);
    return i;
}


int contarDigitos(char *text){
    char *ptr;
    int i = 0;
    
    for(ptr = text; *ptr != '\n'; ptr = ptr + 1)
         if('0' <= *ptr && *ptr <= '9')
              i = i + 1;
              
    printf("\ncadena : %s", text);
    printf("\nresultado : %d", i);
    return i;
}
