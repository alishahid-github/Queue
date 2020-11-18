//.cpp file to implement the Linked List class

#include<iostream>
#include"List.h"					//importing the Linked List header file
using namespace std;

List::List()
{
	head = NULL;
}

Node* List::get_head() 
{
	return head; 
}
void  List::set_head(Node* h)
{ 
	head = h; 
}

void List::print() {

	Node* temp = head;		//traverse the head to nodes...
	while (temp != NULL) {
		cout << "The  List value= " << temp->get_data() << endl;
		temp = temp->get_next();
	}

}


void List::insertH(int d)
{
	Node* new_node = new Node(d);
	new_node->set_next(head);
	head = new_node;
}

int List::delete_listT()
{
	int data = -1;
	if (head != NULL)
	{
		if (head->get_next() == NULL)
		{
			data = head->get_data();
			head = head->get_next();
			return data;
		}
		else
		{
			Node* temp = head;
			Node* prev = head;
			while (temp->get_next() != NULL)
			{
				prev = temp;
				temp = temp->get_next();
			}
			prev->set_next(temp->get_next());
			data = temp->get_data();
			return data;

		}
		
	}
	else
		return data;
}



