#include<stdio.h>

int main() {
	int a;
	int num;
	printf("ingresa un numero\n");
	scanf("%i",&a);
	if (a>0) {
		num = a+1;
		printf("el numero positivo es: %i con preincremento es: %i\n",a,num);
	}
	if (a<0) {
		num = a+1;
		printf("el numero negativo es: %i con postincremento es: %i\n",a,num);
	}
	if (a==0) {
		num = a+10;
		printf("el numero es igual a: %i mas postincremento es: %i\n",a,num);
	}
	return 0;
}

