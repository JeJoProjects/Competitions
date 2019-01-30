#include <iostream>
#include <std::vector>

//*********************************************************************************
class Person
{
   //private is also available but no accessible for child class.
   // only available in class public section
	protected:   //user 2 or sub class will get it
		std::string firstName;
		std::string lastName;
		int id;
	public:
		Person(std::string firstName, std::string lastName, int identification)
		{
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			std::cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n";
		}
		~Person()
		{
			std::cout<<"nothing left in Person"<<std::endl;
		}

};
//*********************************************************************************
class Student :  public Person
{
	private:
		std::vector<int> testScores;
		int sum=0, subs=0;
		double avg=0.0;
	public:
	   Student(std::string firstN, std::string lastN, int idS, std::vector<int> scores): Person(firstN,lastN,idS)
	   {
	     this->testScores=scores;
	     subs=testScores.size();
	   }
      char calculate()
        {
           char g;
           for(unsigned int i=0; i<subs; ++i)
            {
               sum+=testScores[i];
            }
           avg=sum/subs;
           if     (avg>=90 && avg<=100)
                  g='O';
           else if(avg>=80 && avg<=90)
                  g='E';
           else if(avg>=70 && avg<=80)
                  g='A';
           else if(avg>=55 && avg<=75)
                  g='P';
           else if(avg>=40 && avg<=55)
                  g='D';
           else if(avg<40)
                  g= 'T';
            return g;
        }
   ~Student()
   {
      std::cout<<"nothing  in Student"<<std::endl;
   }
};
//*********************************************************************************
int main() {
	std::string firstName;
  	std::string lastName;
	int id;
  	int numScores;
	std::cin >> firstName >> lastName >> id >> numScores;
  	std::vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	std::cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	std::cout << "Grade: " << s->calculate() << "\n";
	Student S(firstName, lastName, id, scores);
	return 0;
}
