/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsarkoh <fsarkoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:03:52 by fsarkoh           #+#    #+#             */
/*   Updated: 2023/09/13 16:40:22 by fsarkoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	claptrap("The original claptrap");

	claptrap.highFivesGuys();
	claptrap.takeDamage(2);
	claptrap.attack("The not original claptrap");
	claptrap.beRepaired(2);
	claptrap.takeDamage(11);
	claptrap.takeDamage(10);

	FragTrap	claptrap2("Claptrap 446373");
	claptrap2.attack("A random bandit");
	claptrap2.attack("A random bandit");
	claptrap2.attack("A random bandit");
	claptrap2.attack("A random bandit");
	claptrap2.attack("A random bandit");
	claptrap2.attack("A random bandit");
	claptrap2.attack("A random bandit");
	claptrap2.attack("A random bandit");
	claptrap2.attack("A random bandit");
	claptrap2.attack("A random bandit");
	claptrap2.attack("A random bandit");
	claptrap2.beRepaired(2);
	return (0);
}
