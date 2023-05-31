#include <stdio.h>
/*Operador de asignacion = (=)
Gael Contreras Gonzalez
31/05/23
Imprime el tamaño de valores  de coma (flotante y doub)*/

int main ()
{
	int a,b,c;
	int codigo, fahrenheit, coord_x,coord_y;
	
	codigo=3467;
	fahrenheit=123.456;
	coord_x=525;
	coord_y=725;
	a=b=c=45;
	a=(b=(c=45));
	printf("%i valor de la variable codigo \n", codigo);
	printf("%i valor de la variable fahrenheit \n", fahrenheit);
	printf("%variable de la variable coord_x \n", coord_x);
	printf("%i variable de la variable coord_y \n",coord_y);
	printf("%i variable de la variable a \n",a);
	printf("%i variable de la variable b \n",b);
	printf("%i variable de la variable c \n",c);
	return 0;
}
