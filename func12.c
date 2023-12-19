#include<stdio.h>

int length(char *ptr);

int main(){
	char text[40];
	
	printf("\nintroduzca el texto : ");
	fgets(text, 40, stdin);
	
	printf("\la cadena %s mide %d caracteres", text, length(text));
	return 0;
}


int length(char *text){
	char *ptr;
	
	for(ptr = text; *ptr != '\n'; ptr = ptr + 1);
	return (int)(ptr - text);
}
