#pragma once
typedef int Atom;
struct Stack
{
	Atom *vec;
	int nrElem;
};
void initStack(Stack &s, int nrE);
void push(Stack &s,Atom val);
Atom pop(Stack &s);
Atom top(Stack &s);