#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Node
{
    public:
        int data;  //integer data field,
        Node *next; //pointing to another node
        Node(int d) // constructor initialize the data and next
        {
            data=d;
            next=NULL;
        }
};
//**************************************************************************
class Solution
{
   public:// given that the list is ordered
      //better solution by freeing the memory
      Node* removeDuplicates(Node *head)
          {
              Node* cur = head; //current node
              Node* past = 0; //past node
              while(cur)
              {
                  if(!past || past->data != cur->data)
                  {
                      past = cur;
                      cur = cur->next;
                  }
                  else
                  {
                      Node* tmp = cur;
                      cur = cur->next;
                      past->next = cur;
                      delete tmp;
                  }
              }
              return head;

            // another way with double loop
            /*Node* currentNode = head;

            while (currentNode != nullptr)
               {
                  Node* nextNode = currentNode->next;
                  // Scan ahead until nextNode points to a non-duplicate.
                  // Delete duplicate nodes as we go.
                  while ((nextNode != nullptr) && (nextNode->data == currentNode->data))
                  {
                     Node* duplicateNode = nextNode;
                     nextNode = nextNode->next;
                     delete duplicateNode;
                  }
                  currentNode->next = nextNode;
                  currentNode = nextNode;
               }

            return head;*/

            // also works, but will not free the heap
            /*if (!head)
               return head;
            Node *temp = head;
            while (node->next)
            {
               if (temp->data == temp->next->data)
                  temp->next = temp->next->next;
               else
                  temp = temp->next;
            }
            return head;*/
          }

      Node* insert(Node *head,int data)
      {
         Node* p=new Node(data);
         if(head==NULL)
            head=p;
         else if(head->next==NULL)
            head->next=p;
         else
         {
            Node *start=head;
            while(start->next!=NULL)
                  start=start->next;
            start->next=p;
         }
         return head;
      }
      void display(Node *head)
      {
         Node *start=head;
         while(start)
            {
               cout<<start->data<<" ";
               start=start->next;
            }
      }
};
//*******************************************************************************
int main()
{
   Node* head=NULL;
  	Solution mylist;
   int T,data;
   cin>>T;
   while(T-->0)
    {
        cin>>data;
        head=mylist.insert(head,data);
    }
   head=mylist.removeDuplicates(head); // to remove the duplicated list nodes
   mylist.display(head);
}
