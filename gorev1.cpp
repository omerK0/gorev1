#include <iostream>

int main() 
{
	#define G 9.80665
	float t;
	std::cin >> t;
	float x = 0.5 * G * t * t;
	std::cout << x;

	return 0;
}