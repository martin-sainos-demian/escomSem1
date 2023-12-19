#include<stdio.h>

int cmpBanner(char *banner, char *text){
	char *ptr1, *ptr2;
	for(ptr1 = banner, ptr2 = text; *ptr1 != '\n' && *ptr2 != ' '; ptr1++, ptr2++)
		if(*ptr1 != *ptr2)
			return 0;
	return 1;
}

void copy(char *fileIn, char *fileOut, int mode){
	char c;
	FILE *ent, *sal;

	ent = fopen(fileIn, "r");
	sal = fopen(fileOut, "w");

	if(ent != NULL)
		if(sal != NULL){
			while(fread(&c, sizeof c, 1, ent) > 0){
				if(mode == 1)
					if('a' <= c && c <= 'z')
						c -= 'a' - 'A';
				if(mode == 2)
					if('A' <= c && c <= 'Z')
						c += 'a' - 'A';

				fwrite(&c, sizeof c, 1, sal);
			}
			printf("\ncopia exitosa");
		}
		else
			printf("\narchivo de salida invalido");
	else
		printf("\narchivo de entrada invalido");

	fclose(ent);
	fclose(sal);
}

int main(int argsL, char * args[]){
	if(argsL >= 3)
		if(*args[1] == '-'){
			if(cmpBanner("-mM\n", args[1]))
				copy(args[2], args[3], 1);
			else if(cmpBanner("-Mm\n", args[1]))
				copy(args[2], args[3], 2);
			else
				printf("\nbandera invalida");
		}
		else {
			copy(args[1], args[2], 0);
		}
	else
		printf("\nargumentos insuficientes");

	return 0;
}
