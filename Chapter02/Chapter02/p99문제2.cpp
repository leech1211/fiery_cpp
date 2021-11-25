#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		printf("#%d: %d\n", i,rand() % 100);
	}
}