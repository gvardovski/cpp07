/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 11:51:42 by svolkau           #+#    #+#             */
/*   Updated: 2026/02/04 12:55:30 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _numberElements(0), _arr(NULL) 
{
	std::cout<<"Default constructor"<<std::endl;	
}

template <typename T>
Array<T>::Array(unsigned int n) : _numberElements(n), _arr(new T[n])
{
	std::cout<<"Constructor with argumensts"<<std::endl;
}

template <typename T>
Array<T>::Array(Array const &from) : _numberElements(from._numberElements), _arr(new T[from._numberElements])
{
	for (unsigned int i = 0; i < _numberElements; i++)
		_arr[i] = from._arr[i];
	std::cout<<"Copy constructor"<<std::endl;
}

template <typename T>
Array<T>::~Array()
{
	delete [] _arr;
	std::cout<<"Destructor"<<std::endl;
}

template <typename T>
unsigned int Array<T>::size() const
{
	return _numberElements;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &from)
{
	if (this != &from)
	{
		delete [] _arr;
		_numberElements = from._numberElements;
		_arr = new T[_numberElements];
		for (unsigned int i = 0; i < _numberElements; i++)
			_arr[i] = from._arr[i];
	}
	return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (i >= _numberElements)
		throw OutOfRangeException();
	return _arr[i];
}

template <typename T>
T const &Array<T>::operator[](unsigned int i) const
{
	if (i >= _numberElements)
		throw OutOfRangeException();
	return (_arr[i]);
}

template <typename T>
const char *Array<T>::OutOfRangeException::what() const throw()
{
	return ("Index out of range");
}

#endif