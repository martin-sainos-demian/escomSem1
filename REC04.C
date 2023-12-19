#include<stdio.h>

int add(int m, int n);

int main(){
	int m, n, a;

	printf("\nm mas n");
	printf("\ningrese m : ");
	scanf("%d", &m);
	printf("\ningrese n : ");
	scanf("%d", &n);

	if(m >= 0 && n >= 0){
		a = add(m, n);
		printf("\nrespuesta : %d", a);
	}
	else
		printf("\nerror");
	return 0;
}

int add(int m, int n){
	if(n == 1)
		return m+1;
	if(n == 0)
		return m;
	else
		return (add(m+1, n-1));
}