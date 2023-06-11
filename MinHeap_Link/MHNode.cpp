#include<iostream>
template <typename T>
struct MHNode
{
	MHNode<T>* left;
	MHNode<T>* right;
	T info;
	MHNode()
	{
		left = nullptr;
		right = nullptr;
	}
	MHNode<T>(T val)
	{
		info = val;
		left = nullptr;
		right = nullptr;
	}
};