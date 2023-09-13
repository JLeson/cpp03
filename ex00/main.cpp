/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsarkoh <fsarkoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:03:52 by fsarkoh           #+#    #+#             */
/*   Updated: 2023/09/13 15:45:32 by fsarkoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	claptrap("The original claptrap");

	claptrap.takeDamage(2);
	claptrap.attack("The not original claptrap");
	claptrap.beRepaired(2);
	claptrap.takeDamage(11);
	claptrap.takeDamage(10);

	ClapTrap	claptrap2("Claptrap 446373");
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
