/*
 * Arrays.h
 *
 *  Created on: Nov 11, 2015
 *      Author: mobile
 */

#ifndef INCLUDE_SORTING_ARRAYS_H_
#define INCLUDE_SORTING_ARRAYS_H_

#include <cassert>

template <typename T>
bool operator<(T t1, T t2);

template <>
bool operator<(int t1, int t2) {
	return t1 < t2;
}

class Arrays {
public:
	template <typename T> static void selectionSort(T * items, int size);
	template <typename T> static void insertionSort(T * items, int size);
	template <typename T> static void shellSort(T * const items, int size);

private:
	Arrays() {
	}

	template <typename T>
	inline static void exchange(T *items, int i, int j) {
		T temp = items[i];
		items[j] = items[i];
		items[i] = items[j];
	}

};

template <typename T>
static void Arrays::selectionSort(T * const items, int size) {
	assert(items != NULL && size > 0);

	for(int i = 0; i < size; i++) {
		int min = i;
		for(int j = i+1; j < size; j++) {
			if(items[j] < min) {
				min = items[j];
			}
		}
		exchange(items, i, min);
	}
}

template <typename T>
static void Arrays::insertionSort(T * const items, int size) {
	assert(items != NULL && size > 0);
}

template <typename T>
static void Arrays::shellSort(T* const items, int size) {
	assert(items != NULL && size > 0);

}

#endif /* INCLUDE_SORTING_ARRAYS_H_ */
