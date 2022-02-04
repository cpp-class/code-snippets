#include <iostream>


void print_multiplication_table(int width, int height)
{
	int num_digits {0};
	int max_value {width * height};
	int max_digits {0};

	if (max_value<10) {
		max_digits = 1;
	} else if (max_value<100) {
		max_digits = 2;
	} else if (max_value<1000) {
		max_digits = 3;
	} else {
		max_digits = 4;
	}



	for (int y = 1; y <= height; ++y)
	{
		for (int x = 1; x <= width; x+=1)
		{
			int mul {x*y};

			if (mul<10) {
				num_digits = 1;
			} else if (mul<100) {
				num_digits = 2;
			} else if (mul<1000) {
				num_digits = 3;
			} else {
				num_digits = 4;
			}

			int required_space {max_digits - num_digits + 1};

			std::cout << mul;

			for (int space = 0; space < required_space; ++space) {
				std::cout << " ";
			}

		}
		std::cout << "\n";
	}
}


int main() {

	print_multiplication_table(11, 11);


}
