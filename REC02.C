#include<stdio.h>

int power(int m, int n);

int main(){
	int m, n, p;

	printf("\nm elevado a la n");
	printf("\ningrese m : ");
	scanf("%d", &m);
	printf("\ningrese n : ");
	scanf("%d", &n);

	if(m > 0 && n >= 0){
		p = power(m, n);
		printf("\nrespuesta : %d", p);
	}
	else
		printf("\nerror");
	return 0;
}

int power(int m, int n){
	if(n==0)
		return 1;
	else
		return (m * power(m, n-1));
}