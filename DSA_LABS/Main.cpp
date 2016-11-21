#include<iostream>
#include "Node.h"
using namespace std;
void test123(int* a);
int main(){

	// testing

	
	int  var = 20;   // actual variable declaration.
	int  *ip;        // pointer variable 

	ip = &var;       // store address of var in pointer variable
	var = 90;

	cout << "Value of var variable: ";
	cout << var << endl;

	// print the address stored in ip pointer variable
	cout << "Address stored in ip variable: ";
	cout << ip << endl;
	test123(&var);
	// access the value at the address available in pointer
	cout << "Value of *ip variable: ";
	cout <<  *ip << endl;

	return 0;


	//// end testing
	//Node * root = NULL;
	//Node n;
	//n.insert(7, root);
	//n.insert(4, root);
	//n.insert(10, root);
	//n.insert(8, root);
	//n.insert(6, root);
	//n.insert(13, root);
	//n.insert(2, root);
	//n.insert(5, root);
	//cout << n.inOrder(root)<<endl;
	//cout << n.preOrder(root) << endl;
	//cout << n.postOrder(root) << endl;
}

void test123(int* a){

	*a = 60;
}
