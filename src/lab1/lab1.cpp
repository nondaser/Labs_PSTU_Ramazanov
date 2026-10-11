#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
	// nomer 1
	float a_f = 100.0f, b_f = 0.001f;
	float chisl_f = pow(a_f + b_f, 4) - (pow(a_f, 4) + 4 * pow(a_f, 3) * b_f);
	float znam_f = 6 * pow(a_f, 2) * pow(b_f, 2) + 4 * a_f * pow(b_f, 3) + pow(b_f, 4);
	float result_f = chisl_f / znam_f;
	double a_d = 100.0, b_d = 0.001;
	double chisl_d = pow(a_d + b_d, 4) - (pow(a_d, 4) + 4 * pow(a_d, 3) * b_d);
	double znam_d = 6 * pow(a_d, 2) * pow(b_d, 2) + 4 * a_f * pow(b_d, 3) + pow(b_d, 4);
	double result_d = chisl_d / znam_d;
	cout << fixed << setprecision(10);
	cout << "float: "<< result_f << endl;
	cout << "double: "<< result_d << endl;


	// nomer 2
	int m = 5, n = 3;
	// m - ++n
	int r1 = m - ++n;
	cout << "++m > --n = " << r1 << " (n = " << n << ")" << endl;
	bool r2 = ++m > --n;
	cout << "++m > --n = " << r2 << " (m = " << m << ", n = " << n << ")" << endl;
	bool r3 = --n < ++m;
	cout << "--n < ++m = " << r3 << " (n = " << n << ", m = " << m << ")" << endl;
	return 0;
}


