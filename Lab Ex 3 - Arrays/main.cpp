
// Lab Exercise 3 - Arrays
// Instructions:
/*
	[  ] Write a program that performs the following:
		[ x ] Prompt the user to input five numbers.
		[ x ] Store the input into either an array or a vector.
		[ x ] Once the user is finished entering numbers:
			[ x ] Display the five numbers in reverse order.
			[ x ] Display the highest number entered.
			[ x ] Display the lowest number entered.
		[ x ] Extra Credit: Allow the user to enter as many numbers as they want(at least 5).
	[ x ] Compress(zip) your program and submit it to Blackboard.
*/



//Rick Bowman, Alex Wick, Brian Harrah
#include <iostream>
#include <conio.h>
#include <vector>
#include <algorithm>

int main()
{
	int size;
	std::cout << "How many numbers would you like to input? ";
	std::cin >> size;

	std::vector<int> vec;

	std::vector<int>::iterator it;
	for (int it = 0; it < size; it++)
	{
		int temp;
		std::cout << "Please enter a number: ";
		std::cin >> temp;
		vec.push_back(temp);
	}

	std::vector<int>::reverse_iterator rit;
	for (rit = vec.rbegin(); rit != vec.rend(); rit++)
	{
		std::cout << *rit << ", ";
	}
	
	std::cout << std::endl << "The highest number entered is: " << *std::max_element(vec.begin(), vec.end());	
	std::cout << std::endl << "The lowest number entered is: " << *std::min_element(vec.begin(), vec.end());

	_getch();
	return 0;
}
