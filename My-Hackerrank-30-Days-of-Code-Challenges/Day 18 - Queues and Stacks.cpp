#include <iostream>
#include <stack>
#include <queue>


class Solution
{
   stack<char> stk;
   queue<char> que;
public:
   void pushCharacter(char s)
   {
      stk.push(s);
   }
   void enqueueCharacter(char q)
   {
      que.push(q);
   }
   char popCharacter()
   {
      while (!stk.empty())
      {
         char temppopc= stk.top();
         stk.pop();
         return temppopc;
      }
      return '0';
   }
   char dequeueCharacter()
   {
      while (!que.empty())
      {
         char tempdq= que.front();
         que.pop();
         return tempdq;
      }
      return '0';
   }
};

int main()
{
    // read the std::string s.
    std::string s;
    getline(std::cin, s);

  	// create the Solution class object p.
    Solution obj;

    // push/enqueue all the characters of std::string s to stack.
    for (int i = 0; i < s.length(); i++)
      {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
      }

    bool isPalindrome = true;

    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++)
      {
        if (obj.popCharacter() != obj.dequeueCharacter())
        {
            isPalindrome = false;
            break;
        }
      }

    // finally print whether std::string s is palindrome or not.
    if (isPalindrome)
        std::cout << "The word, " << s << ", is a palindrome.";
    else
        std::cout << "The word, " << s << ", is not a palindrome.";

    return 0;
}
