#include"Node.h"
class Tree
{
public:
	Tree();
	~Tree();

private:
	Node * root;
	void Insert(int num, Node *& root);
	Node * CreateNode(int data);
	void InOrder(Node *);
	void PreOrder(Node *);
	void PostOrder(Node *);
	Node * Tree::Remove(Node *& n, int num);
	Node* FindMin(Node* n);
public:
	void Insert(int);
	void Delete(int);
	void InOrder();
	void PreOrder();
	void PostOrder();
};
