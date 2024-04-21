/*4. Copiar un arreglo en otro arreglo usando punteros y funciones. Mostrando
el resultado final.*/
#include <stdio.h>
int arr1[] = {3, 8, 1, 2};
int arr2[] = {5, 2, 0, 4};
int n = 4, i;
void intercambio(int *arr1, int *arr2, int n);

main(){
	printf("Arr1 antes: ");
    for (i = 0; i < n; i++) {
        printf(" %d", arr1[i]);
    }
    printf("\n");
    printf("Arr2 antes: ");
    for (i= 0;i<n;i++) {
        printf(" %d", arr2[i]);
    }
    intercambio(arr1, arr2, n);
     
    printf("\n");
    printf("Arr1 después: ");
    for (i=0;i<n;i++) {
        printf(" %d", arr1[i]);
    }
    printf("\n");
    printf("Arr2 después: ");
    for (i=0; i<n;i++) {
        printf(" %d", arr2[i]);
    }
    return 0;
}

void intercambio(int *arr1, int *arr2, int n){
	int aux;
    for (i = 0; i < n; i++) {
        aux = arr2[i];
        arr2[i] = arr1[i];
        arr1[i] = aux;
    }
}
