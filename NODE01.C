#include<stdlib.h>
#include<stdio.h>

struct node {
	int data;
	struct node *ptrNext;
};

int createNode(struct node **ptrRef, struct node **ptrNew){
	*ptrNew = (struct node *)malloc(sizeof(struct node);

	printf("\ningresa un entero : ");
	scanf("%d", &(*ptrNew)->data);
	*ptrNew->ptrNext = *ptrRef;

	*ptrRef = *ptrNew;
	return 0;
}

int deleteNode(struct node **ptrRef, struct node **ptrTrash){
	*ptrTrash = *ptrRef;
	*ptrRef = (*ptrRef)->ptrSig;
	free(*ptrTrash);
	return 0;
}

int main(){
	struct node *ptrRef, *ptrNext, *ptrMove, *ptrTrash;

	ptrRef = NULL;

	createNode(&ptrRef, &ptrNew);

	ptrMove = ptrRef;
	while(ptrMove != NULL){
		printf("%d", ptrMove->dato);
		ptrMove = ptrMove->ptrNext;
	}
}