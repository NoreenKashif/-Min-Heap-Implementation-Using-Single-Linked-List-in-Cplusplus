#include<iostream>
#include"LinkMinHeap.h"
using namespace std;
int main()
{
	Link_Min_Heap<int>m;
	m.insert(2);
	m.insert(1);
	m.insert(0);
	m.insert(-1);
	m.insert(4);
	m.print(m.getRoot());
	

}