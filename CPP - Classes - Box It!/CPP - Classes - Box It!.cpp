#include <iostream>

typedef unsigned long long uint64;
class Box
{
private:
    int m_length;
    int m_breadth;
    int m_height;
public:
    Box()
        :m_length(0), m_breadth(0), m_height(0)
        { }
    Box(const int& l, const int& b, const int& h)
        :m_length(l), m_breadth(b), m_height(h)
        { }
    Box(const Box& B)
        : m_length(B.m_length), m_breadth(B.m_breadth), m_height(B.m_height)
        { }
    const int& getLength()const  {  return m_length;    }
    const int& getBreadth()const {  return m_breadth;   }
    const int& getHeight()const  {  return m_height;    }

    const uint64 CalculateVolume()const  {  return (static_cast<uint64>(m_length)*
                                                    static_cast<uint64>(m_breadth)*
                                                    static_cast<uint64>(m_height)); }

    bool operator< (const Box& obj2)
    {
        return ( (this->m_length < obj2.m_length)                                  ||
        ( (this->m_breadth < obj2.m_breadth) && (this->m_length == obj2.m_length) )||
        ( (this->m_height < obj2.m_height) && (this->m_length == obj2.m_length)
                                         && (this->m_breadth == obj2.m_breadth)) );
    }
    friend std::ostream& operator<< (std::ostream& out, const Box &obj);
};

std::ostream& operator<< (std::ostream& out, const Box &obj)
{
    return out<<obj.m_length<<" "<<obj.m_breadth<<" "<<obj.m_height;
}

void check2()
{
	int n;
	std::std::cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		std::std::cin>>type;
		if(type ==1)
		{
			std::std::cout<<temp<<std::std::endl;
		}
		if(type == 2)
		{
			int l,b,h;
			std::std::cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			std::std::cout<<temp<<std::std::endl;
		}
		if(type==3)
		{
			int l,b,h;
			std::std::cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				std::std::cout<<"Lesser\n";
			}
			else
			{
				std::std::cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			std::std::cout<<temp.CalculateVolume()<<std::std::endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			std::std::cout<<NewBox<<std::std::endl;
		}

	}
}

int main()
{
	check2();
}
