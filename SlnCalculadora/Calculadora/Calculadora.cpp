#include "pch.h"
#include "Calculator.h"
#include <iostream>

using namespace std;

int main()
{
	double x = 0.0;
	double y = 0.0;
	double resultado = 0.0;
	char oper = '+';


	cout << "Calculator Console Application" << endl << endl;
	cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b"
		<< endl;
	Calculator calcular;

	while (true)
	{
		cin >> x >> oper >> y;
		if (oper == '/' && y == 0)
		{
			cout << "prro no divida en cero >:V" << endl;
			continue;
		}
		else
		{

			resultado = calcular.Calculate(x, oper, y);
		}
		cout << "El resultado es: " << resultado << endl;
	}
	return 0;
}
