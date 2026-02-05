/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:10:24 by svolkau           #+#    #+#             */
/*   Updated: 2026/02/04 11:28:35 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename F>
void    iter(T *array, size_t length, F func)
{
	for (size_t i = 0; i < length; i++)
		func(array[i]);
}

template <typename T>
void printElement(const T &n)
{
	std::cout << n << std::endl;
}

template <typename T>
void incrementElement(T &n)
{
	++n;
}

#endif