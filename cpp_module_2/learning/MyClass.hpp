/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 00:11:38 by apeposhi          #+#    #+#             */
/*   Updated: 2023/11/04 00:23:55 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYCLASS_HPP
#define MYCLASS_HPP

class MyClass {
private:
	int* data;
public:
	MyClass(); // Default constructor
	explicit MyClass(int value); // Parameterized constructor
	MyClass(const MyClass& other); // Copy Constructor
	MyClass& operator=(const MyClass& other); // Assignment operator
	~MyClass(); // Destructor

	int getValue() const; // Accessor
	int setValue(int value); // Mutator
};

#endif