/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 00:17:58 by apeposhi          #+#    #+#             */
/*   Updated: 2023/10/11 16:43:33 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <map>

class Harl {
public:
	void complain(const std::string& level);
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif
