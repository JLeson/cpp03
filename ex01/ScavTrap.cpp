/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsarkoh <fsarkoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:54:57 by fsarkoh           #+#    #+#             */
/*   Updated: 2023/09/13 16:27:43 by fsarkoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "A ScavTrap has been constructed!" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack = 20;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "A ScavTrap has been destroyed!" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_energy_points == 0)
	{
		std::cout << "ScavTrap " << this->_name << " is exhausted..." << std::endl;
		return ;
	}
	if (this->_hit_points == 0)
	{
		std::cout << "ScavTrap " << this->_name << " is dead!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " stabs " << target << " with a spear for " << this->_attack << " damage" << std::endl;
	this->_energy_points--;
}

void	ScavTrap::gaurdGate(void)
{
	if (this->_hit_points == 0)
	{
		std::cout << "ScavTrap " << this->_name << " is dead!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " is now in gate keeper mode" << std::endl;	
}
