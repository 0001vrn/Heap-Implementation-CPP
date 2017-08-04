/*
 * Heap.h
 *
 *  Created on: 04-Aug-2017
 *      Author: Varun
 */

#ifndef HEAP_H_
#define HEAP_H_

class Heap {

public:
	Heap();
	virtual ~Heap();

	int parent(int i) { return (i-1)/2; }

	// to get index of left child of node at index i
	int left(int i) { return (2*i + 1); }

	// to get index of right child of node at index i
	int right(int i) { return (2*i + 2); }
};

#endif /* HEAP_H_ */
