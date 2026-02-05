/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 11:38:03 by svolkau           #+#    #+#             */
/*   Updated: 2026/02/04 12:30:29 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class  Array
{
	private:
		unsigned int _numberElements;
		T *_arr;
		
	public:
		Array();
		Array(unsigned int n);
		Array(Array const &from);
		Array &operator=(Array const &from);
		~Array();
		
		unsigned int size() const;

		T		&operator[](unsigned int i);
		T const	&operator[](unsigned int i) const;

	class OutOfRangeException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

		
};

#include "Array.tpp"	

#endif