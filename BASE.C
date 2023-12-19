#include<stdio.h>

void invert(char *text){
	char c, *ptr1, *ptr2;
	for(ptr1 = text; *ptr1 != '\n'; ptr1++);

	for(ptr2 = text; ptr2 < ptr1; ptr2++){
		ptr1--;
		printf("\n%c %c", *ptr1, *ptr2);
		c = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = c;
	}

}

int main(){
	char res[100], c;
	int base, num, t, q, r, run, i;

	printf("\nbase : ");
	scanf("%d", &base);

	printf("\nnumero : ");
	scanf("%d", &num);

	t = num;
	i = 0;
	while(t != 0){
		q = t / base;
		r = t % base;
		printf("\n%d = %d(%d) + %d", t, q, base, r);

		c = (char)r;
		if(0 <= r && r <= 9)
			c += '0';
		else
			c += 'A' - 10;
		res[i] = c;

		t = q;
		i++;
	}
	res[i] = '\n';

	invert(res);
	printf("\nres : %s", res);

	return 0;
}