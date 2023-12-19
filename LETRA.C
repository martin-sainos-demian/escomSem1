#include<stdio.h>

struct persona{
	char nombre[64];
	int edad;
	float altura;
	char letra;
};

int buscarLetraDePer(struct persona *per, char letra);

int main(){
	struct persona per;
	char letra;
	int res;

	printf("\ningrese nombre : ");
	fgets(per.nombre, 64, stdin);
	printf("\ningrese edad : ");
	scanf("%d", &per.edad);
	printf("\ningrese altura : ");
	scanf("%f", &per.altura);
	printf("\ningrese letra favorita : ");
	fflush(stdin);
	scanf("%c", &per.letra);
	fflush(stdin);

	printf("\ningrese letra a buscar : ");
	fflush(stdin);
	scanf("%c", &letra);
	fflush(stdin);

	res = buscarLetraDePer(&per, letra);
	printf("\nresultado : %d", res);

	return 0;
}

int buscarLetraDePer(struct persona *per, char letra){
	char *ptr;
	int res = 0;

	for(ptr=(*per).nombre; *ptr!='\n'; ptr++)
		if(*ptr==letra)
			res++;

	return res;
}