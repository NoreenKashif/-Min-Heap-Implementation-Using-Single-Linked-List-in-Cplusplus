#ifndef STACK_H
#define STACK_H
#include"Node.cpp"
template<typename T>
class Stack
{
	int NOE;
	
public:
	Node<T>* head;
	Stack();
	void push(T);
	T pop();
	T stackTop();
	int getNumberOfElements();
	void print();
};
#endif
