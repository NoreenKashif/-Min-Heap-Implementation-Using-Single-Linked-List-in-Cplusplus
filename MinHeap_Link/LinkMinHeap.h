#include"MHNode.cpp"
#ifndef LINK_MIN_HEAP_H
#define LINK_MIN_HEAP_H
template<typename T>
class Link_Min_Heap
{
	MHNode<T>* root;
	int nodesCount = 0;
public:
	MHNode<T>* getRoot();
	Link_Min_Heap();
	/*T getMin();
	void minHeapify(int i);*/
	void insert(T val);
	/*void swap(T& a, T& b);
	void removeMin();*/
	void print(MHNode<T>*);
};
#endif
