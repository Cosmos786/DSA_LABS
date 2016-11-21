#include<iostream>
#include "Node.h"
using namespace std;
int main(){
	Node * root = NULL;
	Node n;
	n.insert(7, root);
	n.insert(4, root);
	n.insert(10, root);
	n.insert(8, root);
	n.insert(6, root);
	n.insert(13, root);
	n.insert(2, root);
	n.insert(5, root);
	cout << n.inOrder(root)<<endl;
	cout << n.preOrder(root) << endl;
	cout << n.postOrder(root) << endl;
}
