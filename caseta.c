
#include<stdio.h>

int main() {
	float cant;
	float g;
	float s;
	int x;
	float z;
	printf("Vehiculos\n");
	printf("1: Particular\n");
	printf("2: Autobus\n");
	printf("3: Motocicleta\n");
	printf("Que tipo de vehiculo desea pasar? \n");
	scanf("%i",&x);
	printf("Ingrese la cantidad pagada: \n");
	scanf("%f",&cant);
	switch (x) {
	case 1:
		printf("vehiculo Prticular\n");
		printf("a este tipo de vehiculos se aplica una cuota de $500\n");
		z = cant-500;
		printf("El cambio que se le debe de dar es de: %f\n",z);
		break;
	case 2:
		printf("Autobus\n");
		printf("a este tipo de vehiculos se le aplica una cuota de $600 \n");
		g = cant-600;
		printf("El cambio que se le debe de dar es de: %f\n",g);
		break;
	case 3:
		printf("Motocicleta\n");
		printf("a este tipo de vehiculos se le aplica una cuota de $100 \n");
		s = cant-100;
		printf("El cambio que se le debe de dar es de: %f\n",s);
		break;
	}
	return 0;
}

