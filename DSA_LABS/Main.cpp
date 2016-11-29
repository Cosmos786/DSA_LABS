#include<iostream>
#include "Tree.h"
using namespace std;
void test123(int* a);
int main(){

	//// testing

	//
	//int  var = 20;   // actual variable declaration.
	//int  *ip;        // pointer variable 

	//ip = &var;       // store address of var in pointer variable
	//var = 90;

	//cout << "Value of var variable: ";
	//cout << var << endl;

	//// print the address stored in ip pointer variable
	//cout << "Address stored in ip variable: ";
	//cout << ip << endl;
	//test123(&var);
	//// access the value at the address available in pointer
	//cout << "Value of *ip variable: ";
	//cout <<  *ip << endl;

	//return 0;


	// end testing
	Tree treeObj;// = new Tree;
	treeObj.Insert(7);
	treeObj.Insert(4);
	treeObj.Insert(10);
	treeObj.Insert(8);
	treeObj.Insert(6);
	treeObj.Insert(13);
	treeObj.Insert(2);
	treeObj.Insert(5);
		   
	treeObj.InOrder();
	treeObj.Delete(2);
	treeObj.InOrder();
}

void test123(int* a){

	*a = 60;
}
