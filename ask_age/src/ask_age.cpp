#include <iostream>

int main() {

	int age {0};


	do
	{
		std::cout << "Please enter your age (enter zero to exit):";
		std::cin >> age;

		if (age>0) {
			int days {age * 365};
			std::cout << "Your age in days is " << days << "\n";
		} else {
			std::cout << "Done...";
		}
	} while (age>0);


}
