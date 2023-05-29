/*programa numero
	titulo:
	fecha:
	nombre: Gael Contreras Gonzalez*/ 
	
#include <stdio.h>
int MiNumero;
int main ()
{
	/*variables al principio de la funcion main */
	int j;
	printf(		"¿cual es su nunmero favorito?"		);
	scanf("%d", &MiNumero);
	int numerodeInteracciones=12;
	int i;
	for(i=2; i<numerodeInteracciones; i+=2){
		printf("iteraccion numero: %d\n",i);
	} 
	printf("Cuanto vale aqui la variable i: %d\n",i);
	printf("Cuanto vale aqui la variable MiNumero:  %d\n",MiNumero);
	printf("Cuanto vale aqui la variable -numerodeIteracciones:	%d\n",numerodeInteracciones);
	
	return 0;
}
