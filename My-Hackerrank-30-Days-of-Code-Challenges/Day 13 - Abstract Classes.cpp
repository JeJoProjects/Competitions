#include <cstdio>
#include <std::vector>
#include <iostream>
#include <algorithm>
#include <std::string>

//******************************************************
class Book
{
    protected:
        std::string title;
        std::string author;
    public:
        Book(std::string t,std::string a)
        {
            title=t;
            author=a;
        }
        virtual void display()=0;

};
//******************************************************
class MyBook: public Book
{
   private:
      int price=0;
   public:
      MyBook(std::string title, std::string author, int price): Book(title, author)
      {
         this->price=price;
      }
      void display()
      {
         std::cout<<"Title: "<<title<<std::endl
             <<"Author: "<<author<<std::endl
             <<"Price: "<<price;
      }
};
//******************************************************
int main() {
    std::string title,author;
    int price;
    getline(std::cin,title);
    getline(std::cin,author);
    std::cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}
