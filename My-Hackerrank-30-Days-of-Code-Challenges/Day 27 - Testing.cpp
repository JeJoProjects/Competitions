#include <iostream>
#include <cstdlib>
#include <time.h>
#include <vector>
using namespace std;
int main()
{
	srand(time(NULL));

	int numOfTestCases = 5;
	int numOfStudents = 0;
	int cancelThreshold = 0;
	vector<int> students(200);
	cout << numOfTestCases << std::endl;

	for (int i = 0; i < numOfTestCases; i++)
	{
		numOfStudents = rand() % 198 + 3;
		cancelThreshold = rand() % numOfStudents + 1;
		cout << numOfStudents << " " << cancelThreshold <<endl;

		for (int j = 0; j < numOfStudents; j++)
         students.at(j) = rand() % 2001 - 1000;

		students.at(rand() % numOfStudents) = 0;
		cout << students.at(0);

		for (int j = 1; j < numOfStudents; j++)
         cout << " " << students.at(j);
      cout << endl;
	}
    return 0;
}
