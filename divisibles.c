#include<iostream>
using namespace std;

int main() {
	float n1;
	float n2;
	cout << "ingresa el primer numero" << endl;
	cin >> n1;
	cout << "ingresa el segundo numero" << endl;
	cin >> n2;
	if (n1%n2==0) {
		cout << "el numero " << n1 << " es divisible entre el numero " << n2 << endl;
	} else {
		cout << "el numero " << n1 << " no es divisible entre " << n2 << endl;
	}
	return 0;
}

