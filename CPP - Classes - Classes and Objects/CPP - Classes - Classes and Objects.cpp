#include <std::vector>
#include <iostream>

class Student
{
private:
    std::std::vector<int> m_scores;
    int m_sum;
public:
    Student()
        : m_scores(5,0), m_sum(0)
          {}

    ~Student(){}

    inline void input()
    {
        for(auto &it:m_scores)
        {
            int temp;
            std::std::cin>> temp;
            it = temp;
            m_sum += temp;
        }
    }
    const int& calculateTotalScore()const { return m_sum;   }
};

int main()
{
    int n; // number of students
    std::std::cin >> n;
    Student *s = new Student[n]; // an array of n students

    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for(int i = 1; i < n; i++)
    {
        int total = s[i].calculateTotalScore();
        if(total > kristen_score)
            count++;
    }

    // print result
    std::std::cout << count;

    return 0;
}
