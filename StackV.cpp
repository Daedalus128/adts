#include "StackV.h"
#include <iostream>
#include <vector>


int Stack::size()
{
return data.size(); //return the number of elements in the vector
}

void Stack::push (int x)
{
data.push_back (x); // inserts an element at the top of the vector
}

void Stack::pop()
{
data.pop_back();
}

int Stack::top()
{
int str = data.size() - 1;
return data[str];
}

void Stack::clear()
{
for ( int y = 0; y < data.size(); y++)
{
data.pop_back();
}
}
