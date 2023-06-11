#include<iostream>
using namespace std;
template<typename T>
struct Node
{
	Node<T>*next;
	T info;
	Node()
	{
		next = nullptr;
	}
	Node<T>(T val)
	{
		info = val;
		next = nullptr;
	}
};
