#include <stdio.h>
 
 int main(){
 	int numero;
 	
 	printf("Ingresa un numero: ");
 	scanf("%d", &numero);
 	
 	if (numero > 0){
 		printf ("El numero es mayor a 0.\n");
 		
	 }else if (numero < 0){
	 	printf ("el numero es menor a 0.\n");
	 }else {
	 	printf("el numero  es igual a 0.\n");
	 }
	 return 0;
 }
