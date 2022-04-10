//
// Created by Gaynell Hanh on 4/10/22.
//

#ifndef CPP_MODULE_ARRAY_HPP
#define CPP_MODULE_ARRAY_HPP
#include <iostream>

template<typename T>
class Array
{
private:
	T* array;
	unsigned int _size;
public:
	Array(): array(new T[0]), _size(0){}
	Array(unsigned int n):array(new T[n]), _size(n){}
	Array(Array const &rhs):array(new T[rhs._size]){
		*this = rhs;
	}
	Array &operator=(Array const &rhs)
	{
		if (this->array)
			delete [] this->array;
		array = new T[rhs._size];
		_size = rhs._size;
		for(u_int i = 0; i < _size; i++)
			array[i] = rhs.array[i];
		return *this;
	}

	T &operator[](unsigned int idx)
	{
		if (idx >= _size || idx < 0)
			throw std::out_of_range ("index is out of bounds");
		return array[idx];
	}

	unsigned int size() const {return _size;}

	~Array(){delete [] array;}

};

template<typename T>
std::ostream &operator<<(std::ostream &o, Array<T> &array)
{
	u_int len = array.size();
	o << "[";
	u_int i;
	for(i = 0; i < len - 1; i++)
		o << array[i] << ",";
	o << array[i] << "]";
	return o;
}


#endif //CPP_MODULE_ARRAY_HPP
