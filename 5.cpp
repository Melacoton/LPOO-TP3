/*5. Concatenar dos cadenas usando punteros y funciones.*/

#include <stdio.h>
#include <string.h>
char cadena1[] = "Nombre ";
char cadena2[] = "Apellido";
void concat(char *cadena1, char *cadena2);

main(){
	concat(cadena1, cadena2);
	printf("Cadenas concatenadas: %s\n", cadena1);
	
	return 0;
}

void concat(char *cadena1, char *cadena2){
	strcat(cadena1, cadena2); 
}
