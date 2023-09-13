/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsarkoh <fsarkoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:33:33 by fsarkoh           #+#    #+#             */
/*   Updated: 2023/09/13 16:40:33 by fsarkoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "A ScavTrap has been constructed!" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack = 30;
}

FragTrap::~FragTrap(void)
{
	std::cout << "A FragTrap has been destroyed!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{

	if (this->_hit_points == 0)
	{
		std::cout << "FragTrap " << this->_name << " is dead!" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name << " request a highfive, but nobody accepts..." << std::endl;
}
