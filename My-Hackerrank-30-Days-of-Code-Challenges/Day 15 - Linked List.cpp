#include <iostream>
#include <cstddef>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
        Node(int d)
        {
            data=d;
            next=NULL;
        }
};
class Solution
{
   public:
      Node* insert(Node *head,int data) // to insert
      {
         Node* newhead = new Node(data);
         if(head != NULL)
         {
            Node *current = head;
         while(current->next != NULL)
            {
               current = current->next;
            }
         current->next = newhead;
         return head;
         }
         else
            return newhead;
      }

      void display(Node *head) // to display
      {
         Node *start=head;
         while(start)
         {
            cout<<start->data<<" ";
            start=start->next;
         }
      }
};

int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }
	mylist.display(head);

}

