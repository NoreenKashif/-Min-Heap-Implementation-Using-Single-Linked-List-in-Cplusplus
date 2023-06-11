#include<iostream>
using namespace std;
#include"Stack.h"

template<typename T>
Stack<T>::Stack()
{
	head = nullptr;
	NOE = 0;
}
template<typename T>
void Stack<T>::push(T val)
{
	Node<T>* p = new Node<T>(val);
	p->next = head;
	head = p;
	NOE++;
}
template<typename T>
T Stack<T>::pop()
{
	
	if (NOE != 0)
	{
		/*if (head == nullptr)
			return ;*/
		T val;


		Node<T>* p = head;
		val = p->info;

		head = p->next;
		NOE--;


		delete p;
		p = nullptr;
		return val;
	}
	
	

}
template<typename T>
T Stack<T>::stackTop()
{
	/*if (head == nullptr)
		break;*/
	T val;
	val = head->info;
	return val;
}
template<typename T>
int Stack<T>::getNumberOfElements()
{
	return NOE;
}
template<typename T>
void Stack<T>::print()
{
	if (head == nullptr)
		return;
	Node<T>* p = head;

	while (p != nullptr)
	{
		cout << "\n" << p->next << " : " << p->info << "\n";
		p = p->next;
	}
}