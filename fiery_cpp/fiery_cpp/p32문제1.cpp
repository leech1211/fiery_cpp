#include <iostream>

int BoxVolume(int length, int weight, int height )
{
	return length * weight * height;
}

int BoxVolume(int length, int weight)
{
	return length * weight;
}

int BoxVolume(int length)
{
	return length;
}

int main()
{
	std::cout << "[3,3,3] : " << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5,5,D] : " << BoxVolume(5, 5) << std::endl;
	std::cout << "[7,D,D] : " << BoxVolume(7) << std::endl;

	return 0;
}