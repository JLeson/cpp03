/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsarkoh <fsarkoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:08:41 by fsarkoh           #+#    #+#             */
/*   Updated: 2023/09/13 15:45:20 by fsarkoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "A ClapTrap has been constructed!" << std::endl;
	this->_name = name;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack = 0;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	std::cout << "A ClapTrap has been constructed!" << std::endl;
	this->_name = claptrap._name;
	this->_hit_points = claptrap._hit_points;
	this->_energy_points = claptrap._energy_points;
	this->_attack = claptrap._attack;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "A ClapTrap has been destroyed!" << std::endl;
}

void	ClapTrap::operator=(const ClapTrap &claptrap)
{
	this->_name = claptrap._name;
	this->_hit_points = claptrap._hit_points;
	this->_energy_points = claptrap._energy_points;
	this->_attack = claptrap._attack;
}

void	ClapTrap::attack(const std::string &target)
{	
	if (this->_energy_points == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is exhausted..." << std::endl;
		return ;
	}
	if (this->_hit_points == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << " for " << this->_attack << " damage" << std::endl;
	this->_energy_points--;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is exhausted..." << std::endl;
		return ;
	}
	if (this->_hit_points == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name	<< " repairs itself for " << amount << " hitpoints" << std::endl;
	this->_hit_points += amount;
	this->_energy_points--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is getting beat beyond death!!!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " took " << amount << " damage" << std::endl;
	if (this->_hit_points < amount)
		this->_hit_points = 0;
	else
		this->_hit_points -= amount;
}
