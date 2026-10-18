#include <iostream>
#include <cmath>
#include <iomanip>
#include <clocale>
using namespace std;

// функция для факториала
double factorial(int n)
{
    double res = 1.0;
    for (int i = 1; i <= n; i++)
    {
        res *= i;
    }
    return res;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    double a = 0.1;         
    double b = 1.0;         
    int k = 10;             
    double step = (b - a) / k; 
    double eps = 0.0001;    
    int n_max = 30;         

    double x;               
    double S_n;             
    double S_eps;           
    double y;               
    double term;            
    int j;                  

    
    cout << fixed << setprecision(6);
    cout << "X\t\tSN\t\tSE\t\tY" << endl;
    cout << "--------------------------------------------------------" << endl;


    for (int i = 0; i <= k; i++)
    {
        x = a + i * step;

        // а)
        S_n = 1.0;
        for (int m = 1; m <= n_max; m++)
        {
            term = ((m * m + 1) / factorial(m)) * pow(x / 2.0, m);
            S_n += term;
        }

        // б)
        S_eps = 1.0;
        j = 1;
        while (true)
        {
            term = ((j * j + 1) / factorial(j)) * pow(x / 2.0, j);
            if (fabs(term) < eps)
            {
                break;
            }
            S_eps += term;
            j++;
        }


        y = (x * x / 4.0 + x / 2.0 + 1.0) * exp(x / 2.0);

        
        cout << x << "\t\t" << S_n << "\t" << S_eps << "\t" << y << endl;
    }

    return 0;
}