#include<stdio.h>
#define MAX 32

int isPalindrome(char *text){
	char *ptr;
	int length;

	for(ptr=text; *ptr!='\n'; ptr=ptr+1);
	length = (int)(ptr - text);

	for(ptr=text; (int)(ptr-text)<=length/2; ptr=ptr+1){
		if(*ptr != *((long)(length) + text-ptr+text-1))
			return 0;
		}
	return 1;
}

int main(){
	char text[MAX];

	printf("\nintroduzca una palabra : ");
	fgets(text, MAX, stdin);

	if(isPalindrome(text)==0)
		printf("\nno es palindromo");
	else
		printf("\nes palindromo");

	return 0;
}