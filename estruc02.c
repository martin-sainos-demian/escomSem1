#include<stdio.h>
#include<math.h>
#define MAX 64

struct estadistica{
      float nums[MAX];
      float *fPtr;
      int length;
      float promedio;
      float desStd;
};

int calc(struct estadistica *ptr);

int main(){
    struct estadistica stad;
    
    printf("\n-promedio y desviacion estandar-");
    calc(&stad);
    printf("\npromedio : %f", stad.promedio);
    printf("\ndesviacion estandar : %f", stad.desStd);
    
    return 0;
}

int calc(struct estadistica *ptr){
    printf("\ncuantos numeros? : ");
    scanf("%d", &ptr->length);
    
    //obtener numeros y sumarlos
    ptr->promedio = 0;
    
    for(ptr->fPtr = ptr->nums; ptr->fPtr - ptr->nums < ptr->length; ptr->fPtr++){
                  printf("\nnumero %d : ", (int)(ptr->fPtr - ptr->nums) + 1);
                  scanf("%f", ptr->fPtr);
                  ptr->promedio = ptr->promedio + *(ptr->fPtr);
    }
    
    //dividir
    ptr->promedio = ptr->promedio / ptr->length;
    
    //sumar desviaciones al cuadrado
    ptr->desStd = 0;
    
    for(ptr->fPtr = ptr->nums; ptr->fPtr - ptr->nums < ptr->length; ptr->fPtr++)
                  ptr->desStd = ptr->desStd + pow((ptr->promedio - *(ptr->fPtr)), 2);
    
    //dividir
    ptr->desStd = ptr->desStd / ptr->length;
    
    //raiz
    ptr->desStd = pow(ptr->desStd, 0.5);
    
    return 0;
}
