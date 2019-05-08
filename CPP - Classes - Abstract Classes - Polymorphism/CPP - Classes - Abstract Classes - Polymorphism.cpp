#include <iostream>
#include <map>
#include <string>
#include <cstddef>


struct Node final
{
	Node* next;
	Node* prev;
	int _value;
	int _key;

	Node(Node* const p, Node* const n, const int k, const int val)
		: prev{ p }
		, next{ n }
		, _key{ k }
		, _value{ val }
	{};

	Node(const int k, const int val)
		: prev{ nullptr }
		, next{ nullptr }
		, _key{ k }
		, _value{ val }
	{};

	~Node()
	{
		std::cout << "Deleting " << _key << " " << _value << '\n';
		delete next; next = nullptr;
		delete prev; prev = nullptr;
	}
};

class Cache
{
protected:
	std::map<int, Node*> mp;         // map the key to the node in the linked list
	std::size_t cp{};                // capacity
	Node* tail{ nullptr };           // double linked list tail pointer
	Node* head{ nullptr };           // double linked list head pointer
	virtual void set(const int, const int) = 0;  //set function
	virtual int get(const int) const noexcept = 0;        //get function

public:
	Cache(const std::size_t c) : cp{ c } {}
	virtual ~Cache()
	{
		for (auto& [key, value]: mp)
		{
			delete value;
			value = nullptr;
		}
	}
};

class LRUCache final : public Cache
{
public:
	LRUCache(const std::size_t c)
		: Cache{ c }
	{}

	void set(const int k, const int v) override
	{
		Node* N{ nullptr };
		if (mp.empty()) //No nodes
		{
			N = new Node{ k, v };
			tail = head = N;
			mp[k] = N;
			return;
		}
		if (const auto it = mp.find(k); it != mp.cend())
		{
			it->second->_value = v; // update value
			if (head == it->second) return; // head! done here

			it->second->prev->next = it->second->next;

			if (tail == it->second) tail = tail->prev;      // tail?
			else it->second->next->prev = it->second->prev; // in between?

			it->second->next = head;
			it->second->prev = nullptr;
			head->prev = it->second;
			head = it->second;
		}
		else// No in hash table
		{
			N = new Node{ head->prev, head, k, v }; // new node
			head->prev = N;
			head = N;
			mp[k] = N;
			if (mp.size() > cp) // capacity?
			{
				tail = tail->prev;
				mp.erase(tail->next->_key);
				delete tail->next;
				tail->next = nullptr;
			}
		}
	}

	int get(const int k)  const noexcept override
	{
		if (const auto it = mp.find(k); it != mp.cend())
			return it->second->_value;
		return -1;
	}
};

int main()
{
	std::size_t n{}, capacity{};
	std::cin >> n >> capacity;
	LRUCache l{ capacity };
	while (n--)
	{
		std::string command{}; std::cin >> command;
		if (command == std::string{ "get" })
		{
			int key{}; std::cin >> key;
			std::cout << l.get(key) << '\n';
		}
		else if (command == std::string{ "set" })
		{
			int key{}, value{};
			std::cin >> key >> value;
			l.set(key, value);
		}
	}
	return 0;
}
