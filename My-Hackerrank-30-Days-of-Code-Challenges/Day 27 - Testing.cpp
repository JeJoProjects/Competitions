#include <iostream>
#include <cstdlib>
#include <time.h>
#include <std::vector>

int main()
{
	srand(time(NULL));

	int numOfTestCases = 5;
	int numOfStudents = 0;
	int cancelThreshold = 0;
	std::vector<int> students(200);
	std::cout << numOfTestCases << std::std::endl;

	for (int i = 0; i < numOfTestCases; i++)
	{
		numOfStudents = rand() % 198 + 3;
		cancelThreshold = rand() % numOfStudents + 1;
		std::cout << numOfStudents << " " << cancelThreshold <<std::endl;

		for (int j = 0; j < numOfStudents; j++)
         students.at(j) = rand() % 2001 - 1000;

		students.at(rand() % numOfStudents) = 0;
		std::cout << students.at(0);

		for (int j = 1; j < numOfStudents; j++)
         std::cout << " " << students.at(j);
      std::cout << std::endl;
	}
    return 0;
}
