/*calcular el mayor de dos numeros leidos desde el teclado y viualisarlos usando el si simple
Nombre: Gael Contreras Gonzalez*/

#include <stdio.h>
int main (){
	int num1, numm2;
	printf("Ingrese el primer numero: ");
	scanf("%d", &num1);
	
	printf("Ingrese el segundo numero: ");
	scanf("%d", &num2);
	
	if(num1 > num2){
		printf("El mayor numero es: %d\n", num1);
	}else{
		printf("El mayor numero es %d\n", num2);
	}
	return 0;
	
}
