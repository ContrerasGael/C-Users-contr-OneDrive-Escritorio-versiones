#include <stdio.h>
int main (){
	int i;
	int suma = 0;
	
	for (i = 1; i <= 50; i++){
		suma += i;
	}
	
	printf("La suma de los primeros 50 numeros enteros es: %d\n", suma);
	
	return 0;
}
