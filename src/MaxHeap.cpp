/*
 * MaxHeap.cpp
 *
 *  Created on: 04-Aug-2017
 *      Author: Varun
 */
#include<climits>
#include<iostream>
using namespace std;
#include "MaxHeap.h"


MaxHeap::MaxHeap(int cap){
	heap_size=0;
	capacity=cap;
	harr = new int[cap];
}

MaxHeap::~MaxHeap() {
	// TODO Auto-generated destructor stub
}
void MaxHeap::print(){
	for(int i=0;i<heap_size;i++)
		cout<<harr[i]<<' ';
}
// A recursive method to heapify a subtree with root at given index
// This method assumes that the subtrees are already heapified
void MaxHeap::MaxHeapify(int i)
{
    int l = left(i);
    int r = right(i);
    int smallest = i;
    if (l < heap_size && harr[l] > harr[i])
        smallest = l;
    if (r < heap_size && harr[r] > harr[smallest])
        smallest = r;
    if (smallest != i)
    {
        swap(harr[i], harr[smallest]);
        MaxHeapify(smallest);
    }
}

// Inserts a new key 'k'
void MaxHeap::insertKey(int k)
{
    if (heap_size == capacity)
    {
        //cout << "\nOverflow: Could not insertKey\n";
        return;
    }

    // First insert the new key at the end
    heap_size++;
    int i = heap_size - 1;
    harr[i] = k;

    // Fix the max heap property if it is violated
    while (i != 0 && harr[parent(i)] < harr[i])
    {
       swap(harr[i], harr[parent(i)]);
       i = parent(i);
    }
}

// Decreases value of key at index 'i' to new_val.  It is assumed that
// new_val is smaller than harr[i].
void MaxHeap::increaseKey(int i, int new_val)
{
    harr[i] = new_val;
    while (i != 0 && harr[parent(i)] < harr[i])
    {
       swap(harr[i], harr[parent(i)]);
       i = parent(i);
    }
}

// Method to remove maximum element (or root) from max heap
int MaxHeap::extractMax()
{
    if (heap_size <= 0)
        return INT_MIN;
    if (heap_size == 1)
    {
        heap_size--;
        return harr[0];
    }

    // Store the maximum value, and remove it from heap
    int root = harr[0];
    harr[0] = harr[heap_size-1];
    heap_size--;
    MaxHeapify(0);

    return root;
}


// This function deletes key at index i. It first reduced value to
// infinite, then calls extractMax()
void MaxHeap::deleteKey(int i)
{
    increaseKey(i, INT_MAX);
    extractMax();
}
