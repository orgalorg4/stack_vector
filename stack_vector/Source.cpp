#include <iostream>
#include "Header.h"

void main()
{
	Stack s;
	initStack(s, 15);
	for (int i = 0;i < 10;i++)
	{
		push(s, i);
	}
	for (int i = 0;i < 10;i++)
	{
		std::cout<<top(s)<<" "<<pop(s)<<std::endl;
	}
}