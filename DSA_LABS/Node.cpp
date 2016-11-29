#include "Node.h"
#include<string>

Node::Node()
{
}

Node::~Node()
{
}
int Node::GetData(){
	return data;
}
void Node::SetData(int d){
	data = d;
}

void Node::SetLeft(Node *left){
	leftChild = left;
}
Node *& Node::GetLeft(){
	return leftChild;
}

void Node::SetRight(Node *right){
	rightChild = right;
}
Node *& Node::GetRight(){
	return rightChild;
}
