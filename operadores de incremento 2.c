/* programa #5
titulo: operadores de incremento 2
31/05/23
Oscar Zempoaltecatl Santillan*/
#include <stdio.h> 
int main()
{
	//post: está despues de la variable
	//pre: cuando está antes de la variable
	int n=5, t; //estas variables se definen 
	t= ++n*--n; //la variable t define pre o post incremento
	printf("n= %d, t=%d\n",n,t); //imprime el valor de n y t mas la suma que realizó el incremento. 
	printf("%d %d %d\n",++n, ++n, ++n); //imprime el incremento que da n 
	return 0; //termina el programa 
}
