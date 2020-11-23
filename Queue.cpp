#include "Queue.h"	//importing the Queue Header File
#include "Node.h"

void Queue::Enqueue(int d)
{
	L1.insertH(d);
}

int Queue::Dequeue()
{
	return L1.delete_listT();
}

void Queue::print()
{
	if (L1.get_head() == NULL)
		cout << "\nQueue is empty";
	else
	{
		Node* temp = L1.get_head();
		while(temp != NULL)
		{ 
			cout << "\tvalue is = "<<temp->get_data();
			temp = temp->get_next();
		}
	}
}
