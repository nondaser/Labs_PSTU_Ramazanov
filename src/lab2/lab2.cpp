#include <iostream>
#include <cmath>
#include <iomanip>
#include <clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	double epsilon = 1e-4, sum = 0.0;
	int n = 1;
	while (true) {
		double term = pow(exp(1.0), n) * pow(100, -n * n);
		if (term < epsilon) break;
		sum += term;
		n++;
		cout << fixed << setprecision(10);
		cout << "Сумма ряда с точностью E = 10 ^-4 равна: " << sum << endl;
		return 0;
	}
}



