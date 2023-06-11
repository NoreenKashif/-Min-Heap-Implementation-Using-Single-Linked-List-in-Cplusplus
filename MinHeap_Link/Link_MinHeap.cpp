#include"LinkMinHeap.h"
#include<iostream>
#include"Stack.h"
using namespace std;
template<typename T>
Link_Min_Heap<T>::Link_Min_Heap()
{
	root = nullptr;
	nodesCount = 0;
}
template<typename T>
MHNode<T>* Link_Min_Heap<T>::getRoot()
{
	return root;
}
template<typename T>
void Link_Min_Heap<T>::insert(T val)
{
	int num = (nodesCount + 1) / 2;
	Stack<int>bin;
	Stack<MHNode<T>*>path;
	if (root == nullptr)
	{
		root = new MHNode<T>(val);
		nodesCount++;
		return;
	}
	
	while (num != 0)
	{
		bin.push(num % 2);
		num = num / 2;
	}
	bin.pop();
	while (bin.getNumberOfElements() != 0)
		{
			MHNode<T>* p = root;
			path.push(root);
			if(bin.pop() == 0)
			{
				p = p->left;
				path.push(p->left);
			}
			else
			{
				path.push(p->right);
					p = p->right;
			}

		}
		

}
template<typename T>
void Link_Min_Heap<T>::print(MHNode<T>*root)
{
	if (root != NULL)
	{
		print(root->left);
		cout << root->info << " ";
		print(root->right);
	}
}