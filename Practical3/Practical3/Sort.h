/**
* Sort.h
*
* Template based Sort functions
*
* @author  your name
* @version 2.0
*/
#ifndef SORT_H_
#define SORT_H_

#include "Array.h"

template <class T> void swap(T & a, T & b);

// ------------------------ Sort Algorithm Templates ------------------------



// PostCondition: Array elements are sorted
template <class T>
void selectionSort(Array<T> & elements) {
	int min;
	int comps = 0;
	int Swaps = 0;

	for (int marker = 0; marker < elements.length() - 1; marker++) {
		min = marker;
		comps++;
		for (int i = marker + 1; i < elements.length(); i++) {
			if (elements[i] < elements[min]) {
				min = i;
			}
		}
		
		// swap elements at position min and out
		/*T tmp = elements[marker];
		elements[marker] = elements[min];
		elements[min] = tmp;*/

		swap(elements[marker], elements[min]);
		Swaps+=3;
		
	}
	std::cout << "Selection Comps = " << comps << std::endl;
	std::cout << "Selection Swaps = " << Swaps << std::endl;
}

// PostCondition: collection elements are sorted
template <class T>
void insertionSort(Array<T> & elements) {
	int in, out, temp;
	int comps = 0;
	int swaps = 0;
	for (out = 1; out < elements.length(); out++) {
		temp = elements[out];
		
		// find position for temp
		for (in = out; in > 0 && elements[in - 1] >= temp; in--) {
			elements[in] = elements[in - 1];
			comps++;
		}
		// place temp in new position
		elements[in] = temp;
		swaps+=3;
	}

	std::cout << "Inseration Comps = " << comps << std::endl;
	std::cout << "Inseration Swaps = " << swaps << std::endl;
}
template <class T> 
void swap(T & a, T & b) {
	T temp;
	temp = a;
	 a = b;
	 b =  temp;
	 
}
#endif

