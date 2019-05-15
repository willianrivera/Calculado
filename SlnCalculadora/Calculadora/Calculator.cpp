#include "pch.h"
#include "Calculator.h"


/*Calculator::Calculator()
{
}


Calculator::~Calculator()
{
}*/

double Calculator::Calculate(double x, char oper, double y)
{
	switch (oper)
	{
	case '+':
		return x + y;

	case '-':
		return x - y;

	case '*':
		return x * y;

	case '/':
		return x / y;


	default:
		return 0.0;
	}
	//return 0.0;
}
