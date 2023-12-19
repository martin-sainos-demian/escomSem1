#include<stdio.h>

int main(){
	char text[40], *ptr;
	
	printf("\nintroduzca el texto : ");
	fgets(text, 40, stdin);
	
	for(ptr = text; *ptr != '\n'; ptr = ptr + 1);
	
	printf("\la cadena mide %d caracteres", (int)(ptr - text));
	return 0;
}
