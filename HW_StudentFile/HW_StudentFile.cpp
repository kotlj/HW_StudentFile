
#include <iostream>
#include "StudentFile.h"

int main()
{
	//StudentFile test("Who", 120, "group", 10);
	//test.save("test.txt");
	StudentFile lTest;
	lTest.load("test.txt");
	std::cout << lTest.getAge();
}
