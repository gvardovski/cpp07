/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 12:15:10 by svolkau           #+#    #+#             */
/*   Updated: 2026/02/04 12:57:21 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	#include "inc/Array.hpp"

	int main()
	{
		Array<int> empty;
		Array<int> full(5);
		std::cout<<"Size = "<<full.size()<<std::endl;
		Array<int> copy1(full);
		std::cout<<"Size = "<<copy1.size()<<std::endl;
		Array<int> copy2(empty);
		std::cout<<"Size = "<<copy2.size()<<std::endl;
		// copy1[6];
	}