/* sentencias de asignacion booleana
fecha: 31/05/23
nombre: Gael Contreras Gonzakez */
#include <stdio.h>
int main ()
{
	int edad, MayorDeEdad, juvenil;
	scanf("%i",&edad);
	MayorDeEdad=(edad>18);
	juvenil=(edad>15) && (edad<=18);
	
	printf("%i\n",MayorDeEdad);
	printf("%i\n",juvenil);
	return 0;
}
