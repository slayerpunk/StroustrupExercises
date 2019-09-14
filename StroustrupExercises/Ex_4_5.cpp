#include "stdafx.h"
#include "Ex_4_5.h"


void Calculator()
{
	char isContinue = 'y';
	char exprOperator;
	double firstVar, secondVar;
	while (isContinue == 'y')
	{
		std::cout << "Please insert your simple expression like 34.7*234.3. \n";
		std::cin >> firstVar >> exprOperator >> secondVar;
		switch(exprOperator)
		{
		case '+': 
			std::cout << "The sum of " << firstVar << " and " << secondVar << " is: " << firstVar + secondVar << std::endl;
			break;
		case '-':
			std::cout << "The subtraction of " << firstVar << " and " << secondVar << " is: " << firstVar - secondVar << std::endl;
			break;
		case '*':
			std::cout << "The multiply of " << firstVar << " and " << secondVar << " is: " << firstVar * secondVar << std::endl;
			break;
		case '/':
			std::cout << "The division of " << firstVar << " and " << secondVar << " is: " << firstVar / secondVar << std::endl;
			break;
		default:
			std::cout << "Bad expression, try one more time";
			break;
		}

		std::cout << "Do you want to try again (y/n).\n";
		std::cin >> isContinue;

	}
}
