#include "stdafx.h"
#include "Ex_4_11.h"

void FindPrimeNumbers(int Range)
{
	std::vector<int> PrimeNumbers;
	std::vector<int> RangeNumbers;
	bool IsPrime = true;
	for (int i = 2; i <= Range; i++)
	{
		RangeNumbers.push_back(i);
	}
	for (int i = 0; i < RangeNumbers.size(); i++)
	{
		for (int j = 0; j < PrimeNumbers.size(); j++)
		{
			if (RangeNumbers[i] % PrimeNumbers[j] == 0)
			{
				IsPrime = false;
				break;
			}
		}
		if (IsPrime == true)
		{
			PrimeNumbers.push_back(RangeNumbers[i]);
		}
		IsPrime = true;
	}

	for (int i = 0; i < PrimeNumbers.size(); i++)
	{
		std::cout << PrimeNumbers[i] << " ";
	}
}
