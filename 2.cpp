/*2. Encontrar la suma y el promedio de los elementos de un arreglo usando
punteros y funciones.*/

#include <stdio.h>
int suma;
float promedio;
int n=5;
int arr[] = {1, 10, 3, 4, 8,};
void sumaPromedio(int *arr, int n, int *suma, float *promedio);

int main(){
	sumaPromedio(arr, n, &suma, &promedio);
	printf("La suma es %d\n", suma);
	printf("El promedio es %.2f\n", promedio);
	return 0;
}

void sumaPromedio(int *arr, int n, int *suma, float *promedio){
int i;
*suma=0;
  for(i=0;i<n;i++){
	*suma= *suma + *(arr + i);
}
*promedio=(float)*suma/n;
}