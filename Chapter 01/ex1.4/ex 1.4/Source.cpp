// Exercise 1.4

#include <iostream>

int main()
{
	std::cout << "Enter two numbers: " << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The product of " << v1 << " and " << v2 << " is " << v1 * v2 << std::endl;
	
	system("pause");  // Used to keep consol window open. workes in MS Windows.
	return 0;
}