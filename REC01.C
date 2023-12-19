#include<stdio.h>

int fact(int n);

int main(){
	int n, f;

	printf("\ningrese un entero positivo : ");
	scanf("%d", &n);

	if(n >= 0){
		f = fact(n);
		printf("\nrespuesta : %d", f);
	}
	else
		printf("\nerror");
	return 0;
}

int fact(int n){
	if(n==0)
		return 1;
	else
		return (n * fact(n-1));
}