#include<stdio.h>

int times(int m, int n);

int main(){
	int m, n, t;

	printf("\nm por n");
	printf("\ningrese m : ");
	scanf("%d", &m);
	printf("\ningrese n : ");
	scanf("%d", &n);

	if(m >= 0 && n >= 0){
		t = times(m, n);
		printf("\nrespuesta : %d", t);
	}
	else
		printf("\nerror");
	return 0;
}

int times(int m, int n){
	if(n == 0 || m == 0)
		return 0;
	else if (n == 1)
		return m;
	else
		return (m + times(m, n-1));
}