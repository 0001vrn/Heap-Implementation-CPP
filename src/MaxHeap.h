/*
 * MaxHeap.h
 *
 *  Created on: 04-Aug-2017
 *      Author: Varun
 */

#ifndef MAXHEAP_H_
#define MAXHEAP_H_

#include "Heap.h"

class MaxHeap: public Heap {
	int *harr;
	int capacity;
	int heap_size;
public:
	MaxHeap(int cap);
	virtual ~MaxHeap();

	// to heapify a subtree with root at given index
	void MaxHeapify(int i);

	// to extract the root which is the minimum element
	int extractMax();

	// Decreases key value of key at index i to new_val
	void increaseKey(int i, int new_val);

	// Returns the minimum key (key at root) from min heap
	int getMax() { return harr[0]; }

	// Deletes a key stored at index i
	void deleteKey(int i);

	// Inserts a new key 'k'
	void insertKey(int k);

	void print();
};

#endif /* MAXHEAP_H_ */
