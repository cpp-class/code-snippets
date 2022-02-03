#include <iostream>

int main() {

	int age {0};

	do
	{
		std::cout << "Please enter your age (enter negative for exit):";
		std::cin >> age;
		std::cout << "You had " << age * 365 << " great days!\n";

	} while(age>0);

	return 0;
}
