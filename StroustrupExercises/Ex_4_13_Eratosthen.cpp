#include "stdafx.h"
#include "Ex_4_13_Eratosthen.h"

void SieveOfEratosthenes(int Range)
{
	std::vector<NumberAndState> PrimeNumbers;
	std::vector<NumberAndState> RangeNumbers;
	bool IsPrime = false;
	for (int i = 2; i <= Range; i++)
	{
		NumberAndState ToAdd{ i,true };
		RangeNumbers.push_back(ToAdd);
	}
	for (int i = 0; i < RangeNumbers.size()/2; i++)
	{
		if (RangeNumbers[i].IsPrime == false) { continue; }
		for (int j = RangeNumbers[i].Num*2-2; j < RangeNumbers.size(); j += RangeNumbers[i].Num)
		{
			//std::cout << i << " " << j << std::endl;
			RangeNumbers[j].IsPrime = false;	
		}	
// 		for (int x = 0; x < RangeNumbers.size(); x++)
// 		{
// 			if (RangeNumbers[x].IsPrime == true)
// 			{
// 				std::cout << RangeNumbers[x].Num << " ";
// 			}
// 		}
/*		std::cout << std::endl;*/
	}
	

	for (int i = 0; i < RangeNumbers.size(); i++)
	{
		if (RangeNumbers[i].IsPrime == true)
		{
			std::cout << RangeNumbers[i].Num << " ";
		}		
	}
}
