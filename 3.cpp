/*3. Encontrar el mayor y el menor elemento de un arreglo usando punteros y
funciones.*/
#include <stdio.h>
int arr[]={3,6,8,1};
int mayor=arr[0], menor=arr[0], n=4;
void menorMayor(int *arr, int *mayor, int *menor, int n);

main(){
	menorMayor(arr, &mayor, &menor, n);
	printf("\nEl numero mayor es %d", mayor);
	printf("\nEl numero menor es %d", menor);
	return 0;
}

void menorMayor(int *arr, int *mayor, int *menor, int n){
	int i;
	for(i=0;i<n;i++){
		if(*mayor<*(arr+i)){
			*mayor=*(arr+i);
		}
		if(*menor>*(arr+i)){
			*menor=*(arr+i);
		}
	}
}
