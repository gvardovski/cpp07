/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:14:16 by svolkau           #+#    #+#             */
/*   Updated: 2026/02/04 11:32:27 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/iter.hpp"
#include <iostream>

int main()
{
	int intArray[] = {0, 1, 2, 3, 4};
	const int constIntArray[] = {6, 7, 8, 9, 10};
	char    charArray[] = {'H', 'e', 'l', 'l', 'o'};
	const char    constCharArray[] = {'W', 'o', 'r', 'l', 'd'};

	std::cout << "Integer Array:" << std::endl;
	iter(intArray, 5, incrementElement<int>);
	iter(intArray, 5, printElement<int>);
	iter(constIntArray, 5, printElement<const int>);

	std::cout << "\nCharacter Array:" << std::endl;
	iter(charArray, 5, printElement<char>);
	iter(constCharArray, 5, printElement<const char>);

	return 0;
}