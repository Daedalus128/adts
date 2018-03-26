#include "StackLL.h"
#include <iostream>

using namespace std;

class Stack::Node
{
	public:
	int data =0;
	Node* link = nullptr;

};

Stack::~Stack():
{
	while (num_elements > 0)
	
}

int Stack:: size()
{
 return num_elements;
}

void Stack:: push(int x)
{

	if (num_elements == 0)
	{
 	Node* newPtr = new Node{x};
	frontPtr = newPtr;
	}
	if ( num_elements > 0)

	num_elements++;
}

void Stack::pop()
{
	Node* popPtr;
	popPtr = frontPtr;
	
}

int Stack::top()
{
	Node* getPtr
}

void Stack::clear()
{

}
