#include<stdio.h>

int main(int argc, char *argv[]){
    int i;
    
    printf("\nargc : %d", argc);
    
    for(i = 0; i < argc; i++)
          printf("\nargv en %d : %s", i, argv[i]);
    
    return 0;
}
