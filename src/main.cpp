//============================================================================
// Name        : main.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "MaxHeap.h"
#include "MinHeap.h"
using namespace std;

int main() {
	MinHeap h(10);
	for(int i=0;i<10;i++)
		h.insertKey(rand()%100);
	h.print();
	cout<<'\n';
	MaxHeap hm(10);
	for(int i=0;i<10;i++)
		hm.insertKey(rand()%100);
	hm.print();
	return 0;
}
