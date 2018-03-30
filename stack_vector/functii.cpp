#include "Header.h"


void initStack(Stack &s, int maxElem)
{
	s.vec = new Atom[maxElem];
	s.nrElem = 0;
}
void push(Stack &s, Atom val)
{
	s.vec[s.nrElem] = val;
	s.nrElem++;
}
Atom pop(Stack &s)
{
	if (!isEmpty(s))
	{
		s.nrElem--;
		return s.vec[s.nrElem];
	}
	return -1;
}
Atom top(Stack &s)
{
	return s.vec[s.nrElem];
}
bool isEmpty(Stack &s)
{
	if (s.nrElem == 0)
		return 1;
	return 0;
}