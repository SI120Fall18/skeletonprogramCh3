// Complete the following program skeleton.
// This is a modified program from the textbook.

#include <iostream>

int main() 
{
	double hours, minutes;

	// Write code here that prompts the user
	// to enter how many hours they studied over the weekend
	// and reads the input into the hours variable.
	std::cout << "How many hours did you study over the weekend?\n";
	std::cin >> hours;

	// The following line does the conversion.
	minutes = hours * 60;

	// Write code here that displays the amount of
	// minutes spent studying.
	std::cout << "Minutes studied: " << minutes << std::endl;

	return 0;
}
