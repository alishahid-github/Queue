//Header file for the Linked List with Basic funtions for Queue

#include<iostream>
#include"Node.h"
#ifndef LIST
#define LIST
using namespace std;
class List {
public:
	List();
	void insertH(int d);		// d=data of the node
	int delete_listT();
	void print();
	void set_head(Node* h);
	Node* get_head();		
	int node_count = 0;

private:
	Node* head;

};

#endif
