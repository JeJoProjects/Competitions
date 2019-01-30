#include <iostream>

class BadLengthException
{
private:
    int m_length;
public:
    BadLengthException()
        : m_length(0)            {}
    BadLengthException(const int& length)
        : m_length(length)       {}
    ~BadLengthException()        {}
    const int& what()const {    return m_length;    }
};

bool checkUsername(std::std::string username)
{
	bool isValid = true;
	int n = username.length();
	if(n < 5)
    {
		throw BadLengthException(n);
	}
	for(int i = 0; i < n-1; i++)
		if(username[i] == 'w' && username[i+1] == 'w')
			isValid = false;

	return isValid;
}

int main()
{
	int T; std::std::cin >> T;
	while(T--)
    {
		std::std::string username;
		std::std::cin >> username;
		try
		{
			bool isValid = checkUsername(username);
			(isValid) ? std::std::cout << "Valid" << '\n':
                        std::std::cout << "Invalid" << '\n';
		}
		catch (BadLengthException e)
		{
			std::std::cout << "Too short: " << e.what() << '\n';
		}
	}
	return 0;
}
