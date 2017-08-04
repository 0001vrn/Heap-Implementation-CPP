/*
 * MinHeap.h
 *
 *  Created on: 04-Aug-2017
 *      Author: Varun
 */

#ifndef MINHEAP_H_
#define MINHEAP_H_

#include "Heap.h"

class MinHeap: public Heap {

public:
	MinHeap(int cap);
	virtual ~MinHeap();

	// to heapify a subtree with root at given index
	void MinHeapify(int i);

	// to extract the root which is the minimum element
	int extractMin();

	// Decreases key value of key at index i to new_val
	void decreaseKey(int i, int new_val);

	// Returns the minimum key (key at root) from min heap
	int getMin() { return harr[0]; }

	// Deletes a key stored at index i
	void deleteKey(int i);

	// Inserts a new key 'k'
	void insertKey(int k);

	void print();
};

#endif /* MINHEAP_H_ */
