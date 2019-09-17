#include "stdafx.h"
#include "Ex_4_6.h"

void ConvertDigitToString()
{
	std::vector<std::string> digitVector = { "zero","one","two","three","four","five","six","seven","eight","nine" };
	int inputDigit;
	std::string inputString;
	char consent = 'n';
	bool isSolutionFound;
	while (consent != 'y')
	{
		std::cout << "Please, enter any digit\n";
		std::cin >> inputDigit;
		if (inputDigit >= 0 && inputDigit <= 9)
		{
			std::cout << "You entered: " << digitVector[inputDigit] << std::endl;
		}
		else
		{
			std::cout << "Bad input!\n";
		}
		std::cout << "Do you want to try inverse of this function?\n";
		std::cin >> consent;
	}
	std::cout << "Please, enter any digit string\n";
	std::cin >> inputString;
	for (int i = 0; i < digitVector.size(); i++)
	{
		if (inputString == digitVector[i])
		{ 
			std::cout << "You entered: " << i << std::endl;
			isSolutionFound = true;
			break;
		}		
	}
	if(!isSolutionFound) { std::cout << "Bad input!\n"; }
}
