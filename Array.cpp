#include "Array.h"

template <typename T>Array<T>::Array(unsigned size) {
	_size = size;
	_data = new T[_size];
}

template <typename T> Array<T>::~Array() {
	delete[] _data;
}


template <typename T> void Array<T>::set(int index, T val) {
	if (index >= 0 && index < _size)
		_data[index] = val;
}


template <typename T> T Array<T>::get(int index) {
	if (index >= 0 && index < _size)
		return _data[index];
	else return 0;
}


template <typename T> size_t Array<T>::getSize() {
	return _size;
}

//  копированиt
template <typename T> Array<T>::Array(Array& a) {
	_size = a._size;				
	_data = new T[_size];				
	for (auto i = 0; i < _size; i++)
		_data[i] = a._data[i];			
}

// Оператор присваивания
template <typename T> Array<T>& Array<T>::operator=(Array& a) {
	if (this != &a) {			
		_size = a._size;		
		delete[] _data;		
		_data = new T[_size];	       
		for (auto i = 0; i < _size; i++)
			_data[i] = a._data[i];  
	return *this;  
}