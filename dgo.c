#include <stdio.h>

int main () {
	int numero;
	int suma = 0;
	
	printf("Ingrese una serie de numeros (ingrese -1 para finalizar):\n");
	
	while (1) {
		scanf("%d", &numero);
		
		if (numero == -1) {
		    break;
		}
		suma += numero;
	}
	printf("La suma de los numeros ingresados es: %d\n", suma);
	
	return 0;
}
