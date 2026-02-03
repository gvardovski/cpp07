/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 11:56:05 by svolkau           #+#    #+#             */
/*   Updated: 2026/02/03 12:08:51 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename MI>
MI min(MI const &a, MI const &b)
{
	return (a < b ? a : b);
}

template <typename MA>
MA max(MA const &a, MA const &b)
{
	return (a > b ? a : b);
}

#endif