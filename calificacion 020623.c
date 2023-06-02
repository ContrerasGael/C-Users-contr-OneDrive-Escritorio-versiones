/* ejercicios 02/06/23
	desarrollar un programa en lenguaje C que solicite una nota/calificacion entre 1 y 10 no puede ser 0 ni 11, y evalue si es mayor a 6 mande un mensaje de aprovado*/ 
	
#include<stdio.h>

int main() {
	float cal;
	printf("ingrese su calificion\n");
	scanf("%s",cal);
	if (cal>=6 && cal<=10) {
		printf("Aprobatoria");
	} else {
		if (cal<6 && cal>=0) {
			printf("Reprobatoria\n");
		}
	}
	return 0;
}

