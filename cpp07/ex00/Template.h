//
// Created by Gaynell Hanh on 4/9/22.
//

#ifndef CPP_07_TEMPLATE_H
#define CPP_07_TEMPLATE_H

template<typename T>
void swap(T &lhs, T &rhs)
{
	T tmp = lhs;
	lhs = rhs;
	rhs = tmp;
}

template<typename T>
T min(T &lhs, T &rhs){	return lhs < rhs? lhs: rhs;}

template<typename T>
T max(T &lhs, T &rhs){	return lhs > rhs? lhs: rhs;}

#endif //CPP_07_TEMPLATE_H
