#include <iostream>

int get_num_digits(int value)
{
	int num_digits {0};

	while (value!=0)
	{
		num_digits += 1;
		value = value / 10;
	}

	return num_digits;
}

void print_spaces(int num_spaces)
{
	for (int space = 0; space < num_spaces; ++space) {
		std::cout << " ";
	}

}

void print_multiplication_table
		(int width, int height, int num_padding=1, bool right_align=false)
{
	int max_value {width * height};
	int max_digits {get_num_digits(max_value)};
	const int padding {1};

	for (int y = 1; y <= height; ++y)
	{
		for (int x = 1; x <= width; x+=1)
		{
			int mul {x*y};

			int num_digits {get_num_digits(mul)};

			int required_space {max_digits - num_digits + padding};

			std::cout << mul;

			print_spaces(required_space);

		}
		std::cout << "\n";
	}
}


int main() {

	print_multiplication_table(11, 11);


}
