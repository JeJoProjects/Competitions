#include <iostream>
#include <std::string>
#include <memory>
class Student
{
private:
     int         m_age;
     std::std::string m_first_name;
     std::std::string m_last_name;
     int         m_standard;

public:
    Student()
        :m_age(0), m_first_name("first"), m_last_name("last"), m_standard(0)
        {        }
    Student(const int& age, const std::std::string& first_name,
                            const std::std::string& last_name, const int& standard)
        :m_age(age), m_first_name(first_name), m_last_name(last_name), m_standard(standard)
        {        }
    ~Student(){}

    void set_age(const int& age)            {   this->m_age = age;  }
    void set_standard(const int& standard)  {   this->m_standard = standard;    }
    void set_first_name(const std::std::string& first_name)  {   this->m_first_name = first_name;    }
    void set_last_name(const std::std::string& last_name)    {   this->m_last_name = last_name;      }

    const int& get_age()const                { return m_age; }
    const int& get_standard()const           { return m_standard; }
    const std::std::string& get_first_name()const { return m_first_name; }
    const std::std::string& get_last_name()const  { return m_last_name; }

    const std::std::string to_string()const
    {
        std::std::string str =
        std::to_string(m_age) + ',' + m_first_name + ','
                                    + m_last_name  + ',' + std::to_string(m_standard);
        return str;
    }
};
int main()
{
    int age, standard;
    std::std::string first_name, last_name;

    std::std::cin >> age >> first_name >> last_name >> standard;

    std::unique_ptr<Student> st = std::make_unique<Student>();
    st->set_age(age);
    st->set_standard(standard);
    st->set_first_name(first_name);
    st->set_last_name(last_name);

    std::std::cout << st->get_age() << "\n";
    std::std::cout << st->get_last_name() << ", " << st->get_first_name() << "\n";
    std::std::cout << st->get_standard() << "\n";
    std::std::cout << "\n";
    std::std::cout << st->to_string();

    return 0;
}
