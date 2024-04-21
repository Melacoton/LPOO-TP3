/*6. Contar el número de ocurrencias de un elemento en un arreglo usando
puntero y funciones*/

#include <stdio.h>
int arr[]={2,5,6,2,4,2};
int n=6, num=2, cont=0;
void ocurrencia(int *arr, int n, int *num, int *cont);

main(){
	ocurrencia(arr, n, &num, &cont);
	printf("\nEl numero de ocurrencias de 2 es %d", cont);
}

void ocurrencia(int *arr, int n, int *num, int *cont){
	int i;
	for(i=0;i<n;i++){
		if(*num == *(arr+i)){
			(*cont)++;
		}
	}
}