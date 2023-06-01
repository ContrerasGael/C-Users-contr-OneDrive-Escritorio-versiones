#include<iostream>
using namespace std;

int main() {
	float n;
	float totalderecibo;
	float v;
	cout << "Biienvenido a CFE" << endl;
	cout << "cual fue el costo de su recibo de luz anterior" << endl;
	cin >> n;
	cout << "¿Cual fue el costo de su recibo de luz actual?" << endl;
	cin >> v;
	totalderecibo = n-v;
	if (totalderecibo<=1000 || totalderecibo>=1) {
		cout << "la tarifa de kilowatts es de: 1.2, el total de recibo de luz es de: " << totalderecibo*1.2 << endl;
	} else {
		if (totalderecibo>=1001 && totalderecibo<=1850) {
			cout << "la tarifa de kilowatts es de: 1.8, el total de recibo de luz es de: " << totalderecibo*1.8 << endl;
		} else {
			if (totalderecibo>=1851) {
				cout << "la tarifa de kilowatts es de: 2.1, el total de recibo de luz es de: " << totalderecibo*2.1 << endl;
			} else {
				if (totalderecibo<1) {
					cout << "ERROR" << endl;
				}
			}
		}
	}
	return 0;
}

