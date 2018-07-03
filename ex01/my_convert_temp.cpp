#include <iomanip>
#include <iostream>

void calculate_celsius(float temp)
{
	float r;
	r = 9.0 / 5.0 * temp + 32;
	std::cout.precision(3);
	std::cout << std::setw(16) << std::fixed << r << std::setw(16) << "Fahrenheit" << std::endl;
}

void calculate_fahrenheit(float temp)
{
	float r;
	r = 5.0 / 9.0 * (temp - 32);
	std::cout.precision(3);
	std::cout << std::setw(16) << std::fixed << r << std::setw(16) << "Celsius" << std::endl;
}

int main()
{
	std::string t;
	float temp;
	temp = 0;
	std::cin >> temp >> t;
	if(t == "Celsius")
		calculate_celsius(temp);
	if(t == "Fahrenheit")
		calculate_fahrenheit(temp);
	return 0;
}
