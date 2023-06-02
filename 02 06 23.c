/* desarrolla un programa que diga si un numero es mayor, menor o igual a 0 con la funcion si simple
	02//06/23*/
#include <stdio.h>
int main ()
{
	int numero;
	
	printf("ingresa el numero:  ");
	scanf("%d", &numero);
	
	if (numero > 0) {
		printf("El numero es mayor a 0.\n");
	}	else if (numero < 0) {
			printf("el numero es menor a 0.\n");
	}		else {
				printf("el numero es igual a 0.\n");
	}
	return 0;
} 
