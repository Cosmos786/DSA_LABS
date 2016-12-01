#include <iostream>
#include "Tree.h"
Tree::Tree()
{
}
Tree::~Tree()
{
}
///<summary> Returns new Node pointer</summary> <param>data: the value for Node</param>
Node * Tree::CreateNode(int data){
	Node * newNode = new Node;
	newNode->SetData(data); // update data
	newNode->SetRight(NULL); // set left child pointer to null
	newNode->SetLeft(NULL); // set right child pointer to null
	return newNode;
}
void Tree::Insert(int num, Node *& root)
{
	if (root == NULL)
		root = CreateNode(num);
	else{
		if (num > root->GetData())
		{
				Insert(num, root->GetRight());
		}
		else if (num < root->GetData())
		{
				Insert(num, root->GetLeft());
		}
	}
}
void Tree::InOrder(Node * root)
{
	if (root != NULL){
		InOrder(root->GetLeft());
		std::cout << root->GetData();
		InOrder(root->GetRight());
	}
}
void Tree::PreOrder(Node * root)
{
	if (root != NULL){
		std::cout << root->GetData();
		PreOrder(root->GetLeft());
		PreOrder(root->GetRight());
	}

}
void Tree::PostOrder(Node * root)
{
	if (root != NULL){
		PostOrder(root->GetLeft());
		PostOrder(root->GetRight());
		std::cout << root->GetData();
	}

}


void Tree::Insert(int num){
	Insert(num, root);
}
void Tree::InOrder(){
	InOrder(root);
}
void Tree::PreOrder(){
	PreOrder(root);
}
void Tree::PostOrder(){
	PostOrder(root);
}

Node* Tree::FindMin(Node* n)
{
	if (n == NULL)
		return NULL;
	if (n->GetLeft() == NULL)
		return n;
	return FindMin(n->GetLeft());
}

Node * Tree::Remove(Node *& n, int num)
{
	Node * tempNode;
	// node to delete is in left subtree
	if (num < n->GetData())
	{
		tempNode = Remove(n->GetLeft(), num);
		n->SetLeft(tempNode);
	}
	else if (num> n->GetData())
	{
		tempNode = Remove(n->GetRight(), num);
		n->SetRight(tempNode);
	}
//two children, replace with inorder successor
	else if (n->GetLeft() != NULL && n->GetRight() != NULL){
		Node * minNode;
		minNode = FindMin(n->GetRight());
		n->SetData(minNode->GetData());
		tempNode = Remove(n->GetRight(), minNode->GetData());
		n->SetRight(tempNode);
	}
	else{
		Node * nodeToDelete=n;
		if (n->GetLeft() == NULL)
		{
			n = n->GetRight();
		}
		else if (n->GetRight() == NULL)
		{
			n = n->GetLeft();
		}
		else
			n = NULL;
		delete nodeToDelete;

	}
	return n;
}
void Tree::Delete(int num){
	Remove(root, num);
}