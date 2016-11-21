#include<string>
class Node
{
private:
	int data;
	Node * leftChild;
	Node * rightChild;
public:
	Node();
	~Node();
	void insert(int num, Node *& root);
	
	Node * createNode(int data);
	std::string inOrder(Node * root);
	std::string preOrder(Node * root);
	std::string postOrder(Node * root);
};

