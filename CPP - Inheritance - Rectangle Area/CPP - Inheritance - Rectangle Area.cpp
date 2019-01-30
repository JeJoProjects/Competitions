#include <iostream>

class Rectangle
{
protected:
    int m_width;
    int m_height;
public:
    const void display()const
    {
        std::std::cout << m_width << " " << m_height << std::std::endl;
    }
};
class RectangleArea: public Rectangle
{
public:
    void  read_input()
    {
        std::std::cin >> m_width >> m_height;
    }
    const void display()const
    {
        std::std::cout << m_width * m_height << std::std::endl;
    }
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;

    /*
     * Read the width and height
     */
    r_area.read_input();

    /*
     * Print the width and height
     */
    r_area.Rectangle::display();

    /*
     * Print the area
     */
    r_area.display();

    return 0;
}
