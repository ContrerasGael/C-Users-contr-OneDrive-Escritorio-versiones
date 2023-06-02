
#include<stdio.h>

int main() {
	int n1;
	int n2;
	printf("numero 1\n");
	scanf("%i",&n1);
	printf("numero2\n");
	scanf("%i",&n2);
	if (n1>n2) {
		printf("%i  es mayor que %i\n",n1,n2);
	} else {
		if (n2>n1) {
			printf("%i  es mayor que  %i\n",n2,n1);
		}
	}
	return 0;
}

