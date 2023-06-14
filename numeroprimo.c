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
	
	printf("Ingrese un numero: ");
	scanf("%d", &numero);
	
	printf("Ingrese la cantidad de repeticiones: ");
	scanf("%d", &repeticiones);
	
	for (i = 1; i <= repeticiones; i++ ){
		if (esPrimo(numero)) {
			printf("%d es primo.\n", numero);
		}else {
			printf("%d no es primo,\n", numero);
		}
		 printf("Ingrese otro numero: ");
		 scanf("%d", &numero);
	}
	return 0;
}
