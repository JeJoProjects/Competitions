#include <cmath>
#include <cstdio>
#include <std::vector>
#include <iostream>
#include <algorithm>

/*********************************************************************** */
class Person
{
public:
      std::string name="noname";
      unsigned int age=0;
      virtual void getdata()=0; //virtual f(x) but true virtual must be=0
      virtual void putdata()=0;
};

/******************* Professor with inheritance of person **************** */
class Professor: public Person
{
private:
   int publications=0;
   unsigned int cur_id;
public:
   Professor()                      // constructor
   {
        //this->cur_id = ++id;
        //     OR
        cur_id = ++id;
   }
    static unsigned int id;         // static ID
    void getdata()
   {
      std::cin>> name >> age >> publications;
   }
   void putdata()
   {
      std::cout<<name<<" "<<age<<" "<<publications<<" "<<cur_id<<std::endl;
   }
};
unsigned int Professor::id = 0;
// static ID initialization to getting counted the number of objects
// created by main function at the time of code-running.
/******************* Student with inheritance of person **************** */
class Student: public Person
{
private:
   std::vector<unsigned int> marks;
   unsigned int sum=0;
   unsigned int cur_id;
public:
   Student()                 // Student constructor
   {
      this->cur_id = ++id;
   }
   static unsigned int id;  // static ID

   void getdata()
   {
      std::cin>> name >> age;
      for(unsigned int i=0; i<6; ++i)
      {
         unsigned int temp=0;
         std::cin>>temp;
         if(temp<=100)
         {
            marks.push_back(temp);
            sum+=marks[i];
         }
      }
   }
   void putdata()
   {
      std::cout<<name<<" "<<age<<" "<<sum<<" "<<cur_id<<std::endl;
   }
};
unsigned int Student::id = 0;
// static ID initialization to getting counted the number of objects
// created by main function at the time of code-running.

int main()
{

    int n, val;
    std::cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++)
    {
        std::cin>>val;
        if(val == 1)
            // If val is 1 current object is of type Professor
            per[i] = new Professor;
        else 
              per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
