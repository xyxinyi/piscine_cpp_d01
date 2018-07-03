#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

void		convert_Celcius(float temp)
{
	float		res;
    res = 9.0 / 5.0 * temp + 32;
    cout.precision(3);
    cout << setw(16) << fixed << res << setw(16) << "Fahrenheit" << endl;
}

void            convert_Fahrenheit(float temp)
{
	float		res;
	res = 5.0 / 9.0 * (temp - 32);
	cout.precision(3);	
	cout << setw(16) << fixed << res << setw(16) << "Celsius" << endl;
}

int		main()
{
	char		data[1000];
    float		temp;
    temp = 0;
    cin >> temp >> data;
    if (strncmp(data, "Celsius", 7) == 0)
		convert_Celcius(temp);
    if (strncmp(data, "Fahrenheit", 10) == 0)
		convert_Fahrenheit(temp);
    return 0;
}
