/*1. Intercambiar el valor de dos variables usando punteros y funciones.
Mostrando los valores iniciales y valores finales.*/

#include <stdio.h>
void intercambio(int *a, int *b);
main(){
	int x=5, y=10;
	printf("Valores iniciales: x=%d, y=%d", x, y);
	intercambio (&x, &y);
	printf("\nValores finales: x=%d, y=%d ", x, y);
	
	return 0;
}

void intercambio(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
