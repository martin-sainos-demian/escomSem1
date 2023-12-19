#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 10000

int menu();
int fill(int *nums);
void printNums(int *nums, int l);
void sort(int *nums, int l);

int main(){
	int nums[MAX];
	int l, run;
	time_t t1, t2;

	l = 0;
	run = 1;
	while(run){
		switch(menu()){
			case 1:
				l = fill(nums);
				break;
			case 2:
				printNums(nums, l);
				break;
			case 3:
				time(&t1);
				sort(nums , l);
				time(&t2);
				printf("\ntiempo : %f", difftime(t1, t2));
				break;
			case 4:
				run = 0;
				break;
			default:
				printf("\neliga una opcion valida");
		}
	}

	return 0;
}

int menu(){
	int res;

	printf("\n1. llenar arreglo");
	printf("\n2. imprimir arreglo");
	printf("\n3. ordenar");
	printf("\n4. salir\n");

	scanf("%d", &res);

	return res;
}

int fill(int *nums){
	int l, *ptr;

	printf("\cuantos numeros?");
	scanf("%d", &l);

	if(l < MAX)
		for(ptr = nums; ptr - nums < l; ptr++)
			*ptr = rand();
	else
		printf("\ndemasiados numeros");

	return l;
}

void printNums(int *nums, int l){
	int *ptr;

	printf("\nnumeros :");
	for(ptr = nums; ptr - nums < l; ptr++)
		printf(" %d", *ptr);

}

void sort(int *nums, int l){
	int *ptr1, *ptr2, t;

	printf("\nordenando...");
	for(ptr1 = nums; ptr1 - nums < l; ptr1++)
		for(ptr2 = nums; ptr2 - nums < ptr1 - nums; ptr2++)
			if(*ptr2 > *ptr1){
				t = *ptr1;
				*ptr1 = *ptr2;
				*ptr2 = t;
			}
	printf("\nordenamiento burbuja terminado");
}