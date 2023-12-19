#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node * ptrNext;
};

struct node * createNode(int data);
void insertNode(struct node *ptrRef, int data);
void printNodes(struct node *ptrRef);
void deleteNode(struct node *ptrRef, int data);
int menu();

int main(){
	struct node *ptrRef;
	int data;

	ptrRef = createNode(-42);

	for(;;){
		switch(menu()){
			case 1:
				printf("\ningrese entero : ");
				scanf("%d", &data);
				insertNode(ptrRef, data);
				break;
			case 2:
				printNodes(ptrRef);
				break;
			case 3:
				printf("\nnumero de nodo : ");
				scanf("%d", &data);
				deleteNode(ptrRef, data);
				break;
			case 4:
				printf("\nsaliendo...");
				exit(0);
			default:
				printf("\nopcion no valida");
		}
	}
}

struct node * createNode(int data){
	struct node *ptrN;

	ptrN = (struct node *) malloc(sizeof(struct node));
	ptrN->data = data;
	ptrN->ptrNext = NULL;

	return ptrN;
}

void insertNode(struct node *ptrRef, int data){
	struct node *ptrN;

	ptrN = createNode(data);
	if(ptrRef->ptrNext != NULL)
		ptrN->ptrNext = ptrRef->ptrNext;

	ptrRef->ptrNext = ptrN;
}

void printNodes(struct node *ptrRef){
	struct node *ptrGet;
	int i = 0;

	ptrGet = ptrRef->ptrNext;
	while(ptrGet != NULL){
		i++;
		printf("\nnodo %d : %d", i, ptrGet->data);
		ptrGet = ptrGet->ptrNext;
	}
	if(i == 0)
		printf("\nno hay nodos");
}

void deleteNode(struct node *ptrRef, int index){
	struct node *ptrGet, *ptrTemp;
	int i;

	ptrGet = ptrRef;
	for(i=1; i < index && ptrGet->ptrNext != NULL; i++)
		ptrGet = ptrGet->ptrNext;

	if(ptrGet->ptrNext == NULL)
		printf("\nno hay tantos elementos");
	else{
		ptrTemp = ptrGet->ptrNext->ptrNext;
		free(ptrGet->ptrNext);
		ptrGet->ptrNext = ptrTemp;
		printf("\nelemento %d eliminado", index);
	}
}

int menu(){
	int select;
	printf("\n1.meter nodo");
	printf("\n2.consultar datos");
	printf("\n3.eliminar nodo");
	printf("\n4.salir\n");
	scanf("%d", &select);
	return select;
}