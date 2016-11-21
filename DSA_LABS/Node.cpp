
#include "Node.h"
#include<string>

Node::Node()
{
}

Node::~Node()
{
}
///<summary> Returns new Node pointer</summary> <param>data: the value for Node</param>
Node * Node::createNode(int data){
	Node * newNode = new Node;
	newNode->data = data; // update data
	newNode->leftChild = NULL; // set left child pointer to null
	newNode->rightChild = NULL; // set right child pointer to null
	return newNode;
}
void Node::insert(int num, Node *& root)
{
	if (root == NULL)
		root = createNode(num);
	else{
		if (num > root->data)
		{
			if (root->rightChild == NULL)
				root->rightChild = createNode(num);
			else
				insert(num, root->rightChild);
		}
		else if (num < root->data)
		{
			if (root->leftChild == NULL)
				root->leftChild = createNode(num);
			else
				insert(num, root->leftChild);
		}
	}

	//else {
	//	// Locate the parent node
	//	var parent = null;
	//	var current = this.root;
	//	while (current != null)
	//	if (e < current.element) {
	//		parent = current;
	//		current = current.left;
	//	}
	//	else if (e > current.element) {
	//		parent = current;
	//		current = current.right;
	//	}
	//	else
	//		return false; // Duplicate node not inserted

	//	// Create the new node and attach it to the parent node
	//	if (e < parent.element) {
	//		parent.left = this.createNewNode(e);
	//	}
	//	else {
	//		parent.right = this.createNewNode(e);
	//	}
	//}

	//this.size++;
	//return true; // Element inserted

}
std::string Node::inOrder(Node * root)
{
	if (root != NULL)
		return inOrder(root->leftChild) + " " + std::to_string(root->data) + " " + inOrder(root->rightChild);
	else
		return "";

}
std::string Node::preOrder(Node * root)
{
	if (root != NULL)
		return  std::to_string(root->data) + " " + preOrder(root->leftChild) + " " + preOrder(root->rightChild);
	else
		return "";

}
std::string Node::postOrder(Node * root)
{
	if (root != NULL)
		return postOrder(root->leftChild) + " " + postOrder(root->rightChild) + " " + std::to_string(root->data);
	else
		return "";

}
