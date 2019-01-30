#include <iostream>
#include <std::vector>
#include <std::map>
#include <std::string>
#include <algorithm>
#include <std::set>
#include <cassert>


struct Node
{
   Node* next;
   Node* prev;
   int m_value;
   int m_key;
   Node(Node* p, Node* n, const int& k, const int& val)
    :prev(p),next(n),m_key(k),m_value(val)
    {};
   Node(const int& k, const int& val)
    :prev(nullptr),next(nullptr),m_key(k),m_value(val)
    {};
    ~Node(){    delete next; delete prev;   }
};

class Cache
{
protected:
   std::map<int,Node*> mp;   // std::map the key to the node in the linked list
   int cp;              // capacity
   Node* tail;          // double linked list tail pointer
   Node* head;          // double linked list head pointer
   virtual void std::set(int, int) = 0;  //std::set function
   virtual int get(int) = 0;        //get function

};

class LRUCache: public Cache
{
    public:
    LRUCache(int c) { cp = c; }

    void std::set(int k,int v)
    {
        Node *N;

        if(mp.empty()) //No nodes
        {
            N = new Node(k,v);
            tail = head = N;
            mp[k] = N;

            return;
        }

        auto it = mp.find(k);

        if(it != mp.end()) //In hash table
        {
            it->second->value = v; // update value

            if(head == it->second) //head?
                return;

            it->second->prev->next = it->second->next;

            if(tail == it->second) //tail?
                tail = tail->prev;
            else                   //in between?
                it->second->next->prev = it->second->prev;

            it->second->next = head;
            it->second->prev = NULL;
            head->prev = it->second;
            head = it->second;
        }
        else               // No in hash table
        {
            N = new Node(head->prev,head,k,v); //new node
            head->prev = N;
            head = N;
            mp[k] = N;

            if(mp.size() > cp) //capacity?
            {
                tail = tail->prev;
                mp.erase(tail->next->key);
                delete tail->next;
                tail->next = NULL;
            }

        }

    }

    int get(int k)
    {
        auto it = mp.find(k);
        if(it != mp.end())
            return it->second->value;

        return -1;
    }

};

int main()
{
    int n, capacity,i;
    std::cin >> n >> capacity;
    LRUCache l(capacity);
    for(i=0;i<n;i++)
    {
        std::string command;
        std::cin >> command;
        if(command == "get")
        {
            int key;
            std::cin >> key;
            std::cout << l.get(key) << std::endl;
        }
        else if(command == "std::set")
        {
            int key, value;
            std::cin >> key >> value;
            l.std::set(key,value);
        }
   }
   return 0;
}
