// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	std::cout << "\033[1;31mbold red text\033[0m\n";
	std::cout << "\033[1;32mbold green text\033[0m\n";
	std::cout << "\033[1;33mbold yellow text\033[0m\n";
	std::cout << "\033[1;34mbold blue text\033[0m\n";
	std::cout << "\033[1;35mbold magenta text\033[0m\n";
	std::cout << "\033[1;36mbold cyan text\033[0m\n";

	int i, j, n;

	for (i = 0; i < 11; i++) {
		for (j = 0; j < 10; j++) {
			n = 10 * i + j;
			if (n > 108) break;
			printf("\033[%dm %3d\033[m", n, n);
		}
		printf("\n");
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
