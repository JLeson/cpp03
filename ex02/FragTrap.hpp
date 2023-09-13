/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsarkoh <fsarkoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:30:25 by fsarkoh           #+#    #+#             */
/*   Updated: 2023/09/13 16:40:14 by fsarkoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	FragTrap(void);
public:
	FragTrap(std::string name);
	~FragTrap();

	void	highFivesGuys(void);
};
