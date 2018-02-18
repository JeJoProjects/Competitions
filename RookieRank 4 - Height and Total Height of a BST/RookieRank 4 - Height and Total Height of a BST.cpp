#include <iostream>
#include <unordered_map>
#include <queue>
using namespace std;

struct node
{
    int key;
    struct node *left, *right;
};
struct node *root = NULL;
struct node *newNode(int item)
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
inline int treeHeight(node *root)
{
    if (root == NULL)           return 0;
    
    queue<node *> q;

    // Enqueue Root and initialize height
    q.push(root);
    int height = 0;

    while (1)
    {
        // nodeCount (queue size) indicates number of nodes
        // at current lelvel.
        int nodeCount = q.size();
        if (nodeCount == 0)     return height;
        height++;
        // Dequeue all nodes of current level and Enqueue all
        // nodes of next level
        while (nodeCount > 0)
        {
            node *node = q.front();
            q.pop();
            if (node->left != NULL)     q.push(node->left);
            if (node->right != NULL)    q.push(node->right);
            nodeCount--;
        }
    }
}

inline struct node* findNode(struct node* node, int tofind)
{
    struct node *curr =  (struct node *)malloc(sizeof(struct node));
    curr = root;
    while (curr != NULL)
    {
        if (curr->key == tofind)        return curr;
        else if (tofind < curr->key)    curr = curr->left;
        else                            curr = curr->right;
    }
    return curr;
}

struct node* insert(struct node* node, int key)
{
    /* If the tree is empty, return a new node */
    if (node == NULL) return newNode(key);
    /* Otherwise, recur down the tree */
    if (key < node->key)                node->left  = insert(node->left, key);
    else if (key > node->key)           node->right = insert(node->right, key);
    /* return the (unchanged) node pointer */
    return node;
}

int main()
{
    int n; cin>>n;
    unordered_map<int, int> Map;

    for(int i =0; i<n; ++i)
    {
        int temp; cin>>temp;
        auto gett = Map.find(temp);
        if(gett == Map.cend())
        {
            if(i==0)      root = insert(root, temp);
            else                 insert(root, temp);
            Map.emplace(temp,i);
        }
    }

    int height = -1;
    int sum = 0;
    for (auto itr = Map.cbegin(); itr != Map.cend(); ++itr)
    {
        struct node* temp = findNode(root,itr->first);
        int level = treeHeight(temp) - 1;
        height = max(level, height);
        sum += level;
    }

   cout<<height<<endl<<sum<<endl;

    return 0;
}
