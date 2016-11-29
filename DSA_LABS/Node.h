#include<string>
class Node
{
private:
	int data;
	Node * leftChild;
	Node * rightChild;
public:

	/////////////////////////////////////////////////////////////////////////////////////////////////////////

	Node();
	~Node();
	
	// Getter setter for Data
	int GetData();
	void SetData(int);

	// Getter Setter for Right & Left Childs
	void SetLeft(Node *);
	Node *& GetLeft();
	void SetRight(Node *);
	Node *& GetRight();

	
	////////////////////////////////////////////////////////////////////////////////////////////////////////


};

