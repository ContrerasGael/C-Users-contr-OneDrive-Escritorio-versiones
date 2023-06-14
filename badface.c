#include <stdio.h>

int esPrimo(int numero) {
	int i;
	if (numero < 2){
		return 0;
	}
	for (i = 2; i <= numero / 2; i++ ){
		if (numero % i ==0  ){
			return 0;
		}
	}
	return 1;
}

int main () {
	int numero, repeticiones, i;
	int bandera = i;
	
	printf("Ingrese un numero: ");
	scanf("%d", &numero);
	
	printf("Ingrese la cantidad de repeticiones: (0 para terminar el programa) ");
	scanf("%d", &repeticiones);
	
	for (i = 1; i <= repeticiones && bandera; i++ ){
		if (esPrimo(numero)) {
			printf("%d es primo.\n", numero);
		}else {
			printf("%d no es primo,\n", numero);
		}
		 printf("Ingrese otro numero: (ingrese 0 para cerrar el programa)");
		 scanf("%d", &numero);
		 if (numero ==0) {
		 	bandera = 0;
		 }
	}
	return 0;
}

