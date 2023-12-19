#include<stdio.h>
#include<math.h>
#define MAX 64

struct estadistica{
			float nums[MAX];
			float *fPtr;
			int length;
			float promedio;
			float desStd;
};

int getNums(struct estadistica *ptr);
int calcProm(struct estadistica *ptr);
int calcDesStd(struct estadistica *ptr);
int show(struct estadistica *ptr);
int menu(struct estadistica *ptr);

int main(){
		struct estadistica stad;

		stad.length = 0;

		while(menu(&stad));

		return 0;
}

int getNums(struct estadistica *ptr){
	int bigger;

	bigger = 1;
	while(bigger){
		printf("\ncuantos numeros? : ");
		scanf("%d", &ptr->length);
		bigger = ptr->length > MAX;
		if(bigger)
			printf("\ndemasiados numeros");
	}

	ptr->promedio = 0;
	for(ptr->fPtr = ptr->nums; ptr->fPtr - ptr->nums < ptr->length; ptr->fPtr++){
		printf("\nnumero %d : ", (int)(ptr->fPtr - ptr->nums) + 1);
		scanf("%f", ptr->fPtr);
		ptr->promedio = ptr->promedio + *(ptr->fPtr);
	}

	return 0;
}

int calcProm(struct estadistica *ptr){
	if(ptr->length > 0){
		//dividir
		ptr->promedio = ptr->promedio / ptr->length;

		printf("\npromedio : %f", ptr->promedio);
		return 1;
	}
	else
		printf("\nprimero introduzca numeros");
	return 0;
}

int calcDesStd(struct estadistica *ptr){
	if(calcProm(ptr)){

		//sumar desviaciones al cuadrado
		ptr->desStd = 0;

		for(ptr->fPtr = ptr->nums; ptr->fPtr - ptr->nums < ptr->length; ptr->fPtr++)
			ptr->desStd = ptr->desStd + pow((ptr->promedio - *(ptr->fPtr)), 2);

		//dividir
		ptr->desStd = ptr->desStd / ptr->length;

		//raiz
		ptr->desStd = pow(ptr->desStd, 0.5);

		printf("\ndesviacion estandar : %f", ptr->desStd);
	}
	return 0;
}

int show(struct estadistica *ptr){

	for(ptr->fPtr = ptr->nums; ptr->fPtr - ptr->nums < ptr->length; ptr->fPtr++)
		printf("\nnumero %d : %f", (int)(ptr->fPtr - ptr->nums) + 1, *ptr->fPtr);
	printf("\nlongitud : %d", ptr->length);
	printf("\napuntador : %lu", ptr->fPtr);
	printf("\npromedio : %f", ptr->promedio);
	printf("\ndesviacion estandar : %f", ptr->desStd);
	return 0;
}

int menu(struct estadistica *ptr){
	int select;

	printf("\nopciones : ");
	printf("\n1.introducir numeros");
	printf("\n2.calcular promedio");
	printf("\n3.calcular desviacion estandar");
	printf("\n4.mostar datos");
	printf("\n5.salir\n");
	scanf("%d", &select);

	switch(select){
		case 1:
			getNums(ptr);
			break;
		case 2:
			calcProm(ptr);
			break;
		case 3:
			calcDesStd(ptr);
			break;
		case 4:
			show(ptr);
			break;
		case 5:
			printf("\nsaliendo...");
			return 0;
		default:
			printf("\nopcion invalida");
	}

	return 1;
}