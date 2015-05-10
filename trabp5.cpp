#include <iostream>

using namespace std;

double GetNumeroPositivo(double);
double GetPerimetro(double, double);

int main()
{
	cout<<"Ingrese el valor de un lado del rectangulo \n";
	double h=GetNumeroPositivo(h);
	cout<<"Ingrese el valor del otro lado \n";
	double b=GetNumeroPositivo(b);
	cout<<"El perimetro es: ";
	cout<<GetPerimetro(h,b);
}

double GetNumeroPositivo(double x)
{
	cin>>x;
}

double GetPerimetro(double h, double b)
{
	double perimetro=2*(b+h);
	return perimetro;
}

