#include "stdafx.h"
#include "Ex_4_4.h"

void GuessNumberGame()
{
	int first = 1, last = 100, guess;
	char answer = 'y';
	bool isCorrectAnswer = false;
	while (!isCorrectAnswer) {
		guess = (last - first) / 2 + first;
		std::cout << "Is the number are you thinking of less than " << guess << " (y/n)." << std::endl;
		std::cin >> answer;
		if (answer == 'y')
		{
			last = guess - 1;
		}
		else if (answer == 'n')
		{
			if (last - first == 1) { last--; }
			first = guess;
		}
		else
		{
			std::cout << "Wrong answer. ";
			continue;
		}
		if (first == last){	isCorrectAnswer = true;	}
	}
	std::cout << "The answer is: " << guess << std::endl;
}
