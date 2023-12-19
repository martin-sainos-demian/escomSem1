#include<stdio.h>
#include<stdlib.h>

int menu();

int main(){
	while(1){
		switch(menu()){
			case 1:		//bienvenida
			    printf("\nbienvenidos al curso");
	 		    break;
			case 2:		//despedida
		        printf("\nvuelva pronto");
				break;
			case 3:		//exit
		 	    printf("\nadios");
				exit(0);
			default:
				printf("\nescoja una opcion valida");
		}
	}
		
	return 0;
}


int menu(){
	int eleccion;
	printf("\nmenu");
	printf("\n1.bienvenida");
	printf("\n2.despedida");
	printf("\n3.salir");
	printf("\nseleccione una opcion : ");
	scanf("%d", &eleccion);
	return eleccion;
}
