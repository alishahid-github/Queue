//Queue header file with standard functions
#include<iostream>
#include"List.h"
#ifndef QUEUE
#define QUEUE
using namespace std;
class Queue
{
private:
	List L1;
public:
	void Enqueue(int d);
	int Dequeue();
	void print();
};


#endif
